import kaitai_struct_nim_runtime
import options
import imports_circular_a

import "imports_circular_a"
template defineEnum(typ) =
  type typ* = distinct int64
  proc `==`*(x, y: typ): bool {.borrow.}

type
  ImportsCircularB* = ref object of KaitaiStruct
    initial*: uint8
    backRef*: ImportsCircularA
    parent*: KaitaiStruct

proc read*(_: typedesc[ImportsCircularB], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): ImportsCircularB


proc read*(_: typedesc[ImportsCircularB], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): ImportsCircularB =
  template this: untyped = result
  this = new(ImportsCircularB)
  let root = if root == nil: cast[ImportsCircularB](this) else: cast[ImportsCircularB](root)
  this.io = io
  this.root = root
  this.parent = parent

  let initialExpr = this.io.readU1()
  this.initial = initialExpr
  if this.initial == 65:
    let backRefExpr = ImportsCircularA.read(this.io, this.root, this)
    this.backRef = backRefExpr

proc fromFile*(_: typedesc[ImportsCircularB], filename: string): ImportsCircularB =
  ImportsCircularB.read(newKaitaiFileStream(filename), nil, nil)

