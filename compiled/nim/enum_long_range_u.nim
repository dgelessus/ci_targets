import kaitai_struct_nim_runtime
import options

template defineEnum(typ) =
  type typ* = distinct int64
  proc `==`*(x, y: typ): bool {.borrow.}

defineEnum(EnumLongRangeU_constants)
const
  zero* = EnumLongRangeU_constants(0)
  int_max* = EnumLongRangeU_constants(4294967295)
  int_over_max* = EnumLongRangeU_constants(4294967296)
  long_max* = EnumLongRangeU_constants(9223372036854775807)

type
  EnumLongRangeU* = ref object of KaitaiStruct
    f1*: EnumLongRangeU_Constants
    f2*: EnumLongRangeU_Constants
    f3*: EnumLongRangeU_Constants
    f4*: EnumLongRangeU_Constants
    parent*: KaitaiStruct

proc read*(_: typedesc[EnumLongRangeU], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): EnumLongRangeU


proc read*(_: typedesc[EnumLongRangeU], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): EnumLongRangeU =
  template this: untyped = result
  this = new(EnumLongRangeU)
  let root = if root == nil: cast[EnumLongRangeU](this) else: cast[EnumLongRangeU](root)
  this.io = io
  this.root = root
  this.parent = parent

  let f1Expr = EnumLongRangeU_Constants(this.io.readU8be())
  this.f1 = f1Expr
  let f2Expr = EnumLongRangeU_Constants(this.io.readU8be())
  this.f2 = f2Expr
  let f3Expr = EnumLongRangeU_Constants(this.io.readU8be())
  this.f3 = f3Expr
  let f4Expr = EnumLongRangeU_Constants(this.io.readU8be())
  this.f4 = f4Expr

proc fromFile*(_: typedesc[EnumLongRangeU], filename: string): EnumLongRangeU =
  EnumLongRangeU.read(newKaitaiFileStream(filename), nil, nil)

