import ../../runtime/nim/kaitai
import options

{.experimental: "dotOperators".}

type
  FloatingPoints* = ref FloatingPointsObj
  FloatingPointsObj* = object
    io: KaitaiStream
    root*: FloatingPoints
    parent*: ref RootObj
    singleValue*: float32
    doubleValue*: float64
    singleValueBe*: float32
    doubleValueBe*: float64
    approximateValue*: float32
    singleValuePlusIntInst: proc(): float64
    singleValuePlusFloatInst: proc(): float64
    doubleValuePlusFloatInst: proc(): float64

# FloatingPoints
template `.`*(a: FloatingPoints, b: untyped): untyped =
  (a.`b inst`)()

proc read*(_: typedesc[FloatingPoints], io: KaitaiStream, root: FloatingPoints, parent: ref RootObj): owned FloatingPoints =
  result = new(FloatingPoints)
  let root = if root == nil: cast[FloatingPoints](result) else: root
  result.io = io
  result.root = root
  result.parent = parent

  result.singleValue = readF4le(io)
  result.doubleValue = readF8le(io)
  result.singleValueBe = readF4be(io)
  result.doubleValueBe = readF8be(io)
  result.approximateValue = readF4le(io)

  let shadow = result
  var singleValuePlusInt: Option[float64]
  result.singleValuePlusIntInst = proc(): float64 =
    if isNone(singleValuePlusInt):
      singleValuePlusInt = some(float64((shadow.singleValue + 1)))
    get(singleValuePlusInt)
  var singleValuePlusFloat: Option[float64]
  result.singleValuePlusFloatInst = proc(): float64 =
    if isNone(singleValuePlusFloat):
      singleValuePlusFloat = some(float64((shadow.singleValue + 0.5)))
    get(singleValuePlusFloat)
  var doubleValuePlusFloat: Option[float64]
  result.doubleValuePlusFloatInst = proc(): float64 =
    if isNone(doubleValuePlusFloat):
      doubleValuePlusFloat = some(float64((shadow.doubleValue + 0.05)))
    get(doubleValuePlusFloat)

proc fromFile*(_: typedesc[FloatingPoints], filename: string): owned FloatingPoints =
  FloatingPoints.read(newKaitaiStream(filename), nil, nil)

proc `=destroy`(x: var FloatingPointsObj) =
  close(x.io)
