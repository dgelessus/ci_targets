import kaitai_struct_nim_runtime
import options

type
  ExprCalcArrayOps* = ref object of KaitaiStruct
    `parent`*: KaitaiStruct
    `doubleArrayInst`: seq[float64]
    `doubleArrayInstFlag`: bool
    `intArraySizeInst`: int
    `intArraySizeInstFlag`: bool
    `intArrayMaxInst`: int
    `intArrayMaxInstFlag`: bool
    `doubleArrayMaxInst`: float64
    `doubleArrayMaxInstFlag`: bool
    `strArrayMaxInst`: string
    `strArrayMaxInstFlag`: bool
    `strArrayMinInst`: string
    `strArrayMinInstFlag`: bool
    `doubleArrayMidInst`: float64
    `doubleArrayMidInstFlag`: bool
    `strArrayInst`: seq[string]
    `strArrayInstFlag`: bool
    `doubleArraySizeInst`: int
    `doubleArraySizeInstFlag`: bool
    `strArrayFirstInst`: string
    `strArrayFirstInstFlag`: bool
    `strArrayLastInst`: string
    `strArrayLastInstFlag`: bool
    `strArrayMidInst`: string
    `strArrayMidInstFlag`: bool
    `doubleArrayLastInst`: float64
    `doubleArrayLastInstFlag`: bool
    `intArrayMinInst`: int
    `intArrayMinInstFlag`: bool
    `strArraySizeInst`: int
    `strArraySizeInstFlag`: bool
    `intArrayFirstInst`: int
    `intArrayFirstInstFlag`: bool
    `doubleArrayFirstInst`: float64
    `doubleArrayFirstInstFlag`: bool
    `intArrayMidInst`: int
    `intArrayMidInstFlag`: bool
    `doubleArrayMinInst`: float64
    `doubleArrayMinInstFlag`: bool
    `intArrayInst`: seq[int]
    `intArrayInstFlag`: bool
    `intArrayLastInst`: int
    `intArrayLastInstFlag`: bool

proc read*(_: typedesc[ExprCalcArrayOps], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): ExprCalcArrayOps

proc doubleArray*(this: ExprCalcArrayOps): seq[float64]
proc intArraySize*(this: ExprCalcArrayOps): int
proc intArrayMax*(this: ExprCalcArrayOps): int
proc doubleArrayMax*(this: ExprCalcArrayOps): float64
proc strArrayMax*(this: ExprCalcArrayOps): string
proc strArrayMin*(this: ExprCalcArrayOps): string
proc doubleArrayMid*(this: ExprCalcArrayOps): float64
proc strArray*(this: ExprCalcArrayOps): seq[string]
proc doubleArraySize*(this: ExprCalcArrayOps): int
proc strArrayFirst*(this: ExprCalcArrayOps): string
proc strArrayLast*(this: ExprCalcArrayOps): string
proc strArrayMid*(this: ExprCalcArrayOps): string
proc doubleArrayLast*(this: ExprCalcArrayOps): float64
proc intArrayMin*(this: ExprCalcArrayOps): int
proc strArraySize*(this: ExprCalcArrayOps): int
proc intArrayFirst*(this: ExprCalcArrayOps): int
proc doubleArrayFirst*(this: ExprCalcArrayOps): float64
proc intArrayMid*(this: ExprCalcArrayOps): int
proc doubleArrayMin*(this: ExprCalcArrayOps): float64
proc intArray*(this: ExprCalcArrayOps): seq[int]
proc intArrayLast*(this: ExprCalcArrayOps): int

proc read*(_: typedesc[ExprCalcArrayOps], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): ExprCalcArrayOps =
  template this: untyped = result
  this = new(ExprCalcArrayOps)
  let root = if root == nil: cast[ExprCalcArrayOps](this) else: cast[ExprCalcArrayOps](root)
  this.io = io
  this.root = root
  this.parent = parent


proc doubleArray(this: ExprCalcArrayOps): seq[float64] = 
  if this.doubleArrayInstFlag:
    return this.doubleArrayInst
  let doubleArrayInstExpr = seq[float64](@[float64(10.0), float64(25.0), float64(50.0), float64(100.0), float64(3.14159)])
  this.doubleArrayInst = doubleArrayInstExpr
  this.doubleArrayInstFlag = true
  return this.doubleArrayInst

proc intArraySize(this: ExprCalcArrayOps): int = 
  if this.intArraySizeInstFlag:
    return this.intArraySizeInst
  let intArraySizeInstExpr = int(len(this.intArray))
  this.intArraySizeInst = intArraySizeInstExpr
  this.intArraySizeInstFlag = true
  return this.intArraySizeInst

proc intArrayMax(this: ExprCalcArrayOps): int = 
  if this.intArrayMaxInstFlag:
    return this.intArrayMaxInst
  let intArrayMaxInstExpr = int(max(this.intArray))
  this.intArrayMaxInst = intArrayMaxInstExpr
  this.intArrayMaxInstFlag = true
  return this.intArrayMaxInst

proc doubleArrayMax(this: ExprCalcArrayOps): float64 = 
  if this.doubleArrayMaxInstFlag:
    return this.doubleArrayMaxInst
  let doubleArrayMaxInstExpr = float64(max(this.doubleArray))
  this.doubleArrayMaxInst = doubleArrayMaxInstExpr
  this.doubleArrayMaxInstFlag = true
  return this.doubleArrayMaxInst

proc strArrayMax(this: ExprCalcArrayOps): string = 
  if this.strArrayMaxInstFlag:
    return this.strArrayMaxInst
  let strArrayMaxInstExpr = string(max(this.strArray))
  this.strArrayMaxInst = strArrayMaxInstExpr
  this.strArrayMaxInstFlag = true
  return this.strArrayMaxInst

proc strArrayMin(this: ExprCalcArrayOps): string = 
  if this.strArrayMinInstFlag:
    return this.strArrayMinInst
  let strArrayMinInstExpr = string(min(this.strArray))
  this.strArrayMinInst = strArrayMinInstExpr
  this.strArrayMinInstFlag = true
  return this.strArrayMinInst

proc doubleArrayMid(this: ExprCalcArrayOps): float64 = 
  if this.doubleArrayMidInstFlag:
    return this.doubleArrayMidInst
  let doubleArrayMidInstExpr = float64(this.doubleArray[1])
  this.doubleArrayMidInst = doubleArrayMidInstExpr
  this.doubleArrayMidInstFlag = true
  return this.doubleArrayMidInst

proc strArray(this: ExprCalcArrayOps): seq[string] = 
  if this.strArrayInstFlag:
    return this.strArrayInst
  let strArrayInstExpr = seq[string](@[string("un"), string("deux"), string("trois"), string("quatre")])
  this.strArrayInst = strArrayInstExpr
  this.strArrayInstFlag = true
  return this.strArrayInst

proc doubleArraySize(this: ExprCalcArrayOps): int = 
  if this.doubleArraySizeInstFlag:
    return this.doubleArraySizeInst
  let doubleArraySizeInstExpr = int(len(this.doubleArray))
  this.doubleArraySizeInst = doubleArraySizeInstExpr
  this.doubleArraySizeInstFlag = true
  return this.doubleArraySizeInst

proc strArrayFirst(this: ExprCalcArrayOps): string = 
  if this.strArrayFirstInstFlag:
    return this.strArrayFirstInst
  let strArrayFirstInstExpr = string(this.strArray[0])
  this.strArrayFirstInst = strArrayFirstInstExpr
  this.strArrayFirstInstFlag = true
  return this.strArrayFirstInst

proc strArrayLast(this: ExprCalcArrayOps): string = 
  if this.strArrayLastInstFlag:
    return this.strArrayLastInst
  let strArrayLastInstExpr = string(this.strArray[^1])
  this.strArrayLastInst = strArrayLastInstExpr
  this.strArrayLastInstFlag = true
  return this.strArrayLastInst

proc strArrayMid(this: ExprCalcArrayOps): string = 
  if this.strArrayMidInstFlag:
    return this.strArrayMidInst
  let strArrayMidInstExpr = string(this.strArray[1])
  this.strArrayMidInst = strArrayMidInstExpr
  this.strArrayMidInstFlag = true
  return this.strArrayMidInst

proc doubleArrayLast(this: ExprCalcArrayOps): float64 = 
  if this.doubleArrayLastInstFlag:
    return this.doubleArrayLastInst
  let doubleArrayLastInstExpr = float64(this.doubleArray[^1])
  this.doubleArrayLastInst = doubleArrayLastInstExpr
  this.doubleArrayLastInstFlag = true
  return this.doubleArrayLastInst

proc intArrayMin(this: ExprCalcArrayOps): int = 
  if this.intArrayMinInstFlag:
    return this.intArrayMinInst
  let intArrayMinInstExpr = int(min(this.intArray))
  this.intArrayMinInst = intArrayMinInstExpr
  this.intArrayMinInstFlag = true
  return this.intArrayMinInst

proc strArraySize(this: ExprCalcArrayOps): int = 
  if this.strArraySizeInstFlag:
    return this.strArraySizeInst
  let strArraySizeInstExpr = int(len(this.strArray))
  this.strArraySizeInst = strArraySizeInstExpr
  this.strArraySizeInstFlag = true
  return this.strArraySizeInst

proc intArrayFirst(this: ExprCalcArrayOps): int = 
  if this.intArrayFirstInstFlag:
    return this.intArrayFirstInst
  let intArrayFirstInstExpr = int(this.intArray[0])
  this.intArrayFirstInst = intArrayFirstInstExpr
  this.intArrayFirstInstFlag = true
  return this.intArrayFirstInst

proc doubleArrayFirst(this: ExprCalcArrayOps): float64 = 
  if this.doubleArrayFirstInstFlag:
    return this.doubleArrayFirstInst
  let doubleArrayFirstInstExpr = float64(this.doubleArray[0])
  this.doubleArrayFirstInst = doubleArrayFirstInstExpr
  this.doubleArrayFirstInstFlag = true
  return this.doubleArrayFirstInst

proc intArrayMid(this: ExprCalcArrayOps): int = 
  if this.intArrayMidInstFlag:
    return this.intArrayMidInst
  let intArrayMidInstExpr = int(this.intArray[1])
  this.intArrayMidInst = intArrayMidInstExpr
  this.intArrayMidInstFlag = true
  return this.intArrayMidInst

proc doubleArrayMin(this: ExprCalcArrayOps): float64 = 
  if this.doubleArrayMinInstFlag:
    return this.doubleArrayMinInst
  let doubleArrayMinInstExpr = float64(min(this.doubleArray))
  this.doubleArrayMinInst = doubleArrayMinInstExpr
  this.doubleArrayMinInstFlag = true
  return this.doubleArrayMinInst

proc intArray(this: ExprCalcArrayOps): seq[int] = 
  if this.intArrayInstFlag:
    return this.intArrayInst
  let intArrayInstExpr = seq[int](@[int(10), int(25), int(50), int(100), int(200), int(500), int(1000)])
  this.intArrayInst = intArrayInstExpr
  this.intArrayInstFlag = true
  return this.intArrayInst

proc intArrayLast(this: ExprCalcArrayOps): int = 
  if this.intArrayLastInstFlag:
    return this.intArrayLastInst
  let intArrayLastInstExpr = int(this.intArray[^1])
  this.intArrayLastInst = intArrayLastInstExpr
  this.intArrayLastInstFlag = true
  return this.intArrayLastInst

proc fromFile*(_: typedesc[ExprCalcArrayOps], filename: string): ExprCalcArrayOps =
  ExprCalcArrayOps.read(newKaitaiFileStream(filename), nil, nil)

