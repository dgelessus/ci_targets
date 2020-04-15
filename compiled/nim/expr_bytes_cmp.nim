import kaitai_struct_nim_runtime
import options

template defineEnum(typ) =
  type typ* = distinct int64
  proc `==`*(x, y: typ): bool {.borrow.}

type
  ExprBytesCmp* = ref object of KaitaiStruct
    one*: seq[byte]
    two*: seq[byte]
    parent*: KaitaiStruct
    isLeInst*: Option[bool]
    ackInst*: seq[byte]
    isGt2Inst*: Option[bool]
    isGtInst*: Option[bool]
    ack2Inst*: seq[byte]
    isEqInst*: Option[bool]
    isLt2Inst*: Option[bool]
    isGeInst*: Option[bool]
    hiValInst*: seq[byte]
    isNeInst*: Option[bool]
    isLtInst*: Option[bool]

proc read*(_: typedesc[ExprBytesCmp], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): ExprBytesCmp

proc isLe*(this: ExprBytesCmp): bool
proc ack*(this: ExprBytesCmp): seq[byte]
proc isGt2*(this: ExprBytesCmp): bool
proc isGt*(this: ExprBytesCmp): bool
proc ack2*(this: ExprBytesCmp): seq[byte]
proc isEq*(this: ExprBytesCmp): bool
proc isLt2*(this: ExprBytesCmp): bool
proc isGe*(this: ExprBytesCmp): bool
proc hiVal*(this: ExprBytesCmp): seq[byte]
proc isNe*(this: ExprBytesCmp): bool
proc isLt*(this: ExprBytesCmp): bool

proc read*(_: typedesc[ExprBytesCmp], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): ExprBytesCmp =
  template this: untyped = result
  this = new(ExprBytesCmp)
  let root = if root == nil: cast[ExprBytesCmp](this) else: cast[ExprBytesCmp](root)
  this.io = io
  this.root = root
  this.parent = parent

  let oneExpr = this.io.readBytes(int(1))
  this.one = oneExpr
  let twoExpr = this.io.readBytes(int(3))
  this.two = twoExpr

proc isLe(this: ExprBytesCmp): bool = 
  if isSome(this.isLeInst):
    return get(this.isLeInst)
  let isLeInstExpr = bool(this.two <= this.ack2)
  this.isLeInst = isLeInstExpr
  if isSome(this.isLeInst):
    return get(this.isLeInst)

proc ack(this: ExprBytesCmp): seq[byte] = 
  if this.ackInst.len != 0:
    return this.ackInst
  let ackInstExpr = seq[byte](@[65'u8, 67'u8, 75'u8])
  this.ackInst = ackInstExpr
  if this.ackInst.len != 0:
    return this.ackInst

proc isGt2(this: ExprBytesCmp): bool = 
  if isSome(this.isGt2Inst):
    return get(this.isGt2Inst)
  let isGt2InstExpr = bool(this.hiVal > this.two)
  this.isGt2Inst = isGt2InstExpr
  if isSome(this.isGt2Inst):
    return get(this.isGt2Inst)

proc isGt(this: ExprBytesCmp): bool = 
  if isSome(this.isGtInst):
    return get(this.isGtInst)
  let isGtInstExpr = bool(this.two > this.ack2)
  this.isGtInst = isGtInstExpr
  if isSome(this.isGtInst):
    return get(this.isGtInst)

proc ack2(this: ExprBytesCmp): seq[byte] = 
  if this.ack2Inst.len != 0:
    return this.ack2Inst
  let ack2InstExpr = seq[byte](@[65'u8, 67'u8, 75'u8, 50'u8])
  this.ack2Inst = ack2InstExpr
  if this.ack2Inst.len != 0:
    return this.ack2Inst

proc isEq(this: ExprBytesCmp): bool = 
  if isSome(this.isEqInst):
    return get(this.isEqInst)
  let isEqInstExpr = bool(this.two == this.ack)
  this.isEqInst = isEqInstExpr
  if isSome(this.isEqInst):
    return get(this.isEqInst)

proc isLt2(this: ExprBytesCmp): bool = 
  if isSome(this.isLt2Inst):
    return get(this.isLt2Inst)
  let isLt2InstExpr = bool(this.one < this.two)
  this.isLt2Inst = isLt2InstExpr
  if isSome(this.isLt2Inst):
    return get(this.isLt2Inst)

proc isGe(this: ExprBytesCmp): bool = 
  if isSome(this.isGeInst):
    return get(this.isGeInst)
  let isGeInstExpr = bool(this.two >= this.ack2)
  this.isGeInst = isGeInstExpr
  if isSome(this.isGeInst):
    return get(this.isGeInst)

proc hiVal(this: ExprBytesCmp): seq[byte] = 
  if this.hiValInst.len != 0:
    return this.hiValInst
  let hiValInstExpr = seq[byte](@[-112'u8, 67'u8])
  this.hiValInst = hiValInstExpr
  if this.hiValInst.len != 0:
    return this.hiValInst

proc isNe(this: ExprBytesCmp): bool = 
  if isSome(this.isNeInst):
    return get(this.isNeInst)
  let isNeInstExpr = bool(this.two != this.ack)
  this.isNeInst = isNeInstExpr
  if isSome(this.isNeInst):
    return get(this.isNeInst)

proc isLt(this: ExprBytesCmp): bool = 
  if isSome(this.isLtInst):
    return get(this.isLtInst)
  let isLtInstExpr = bool(this.two < this.ack2)
  this.isLtInst = isLtInstExpr
  if isSome(this.isLtInst):
    return get(this.isLtInst)

proc fromFile*(_: typedesc[ExprBytesCmp], filename: string): ExprBytesCmp =
  ExprBytesCmp.read(newKaitaiFileStream(filename), nil, nil)

