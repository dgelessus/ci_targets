import kaitai_struct_nim_runtime
import options

template defineEnum(typ) =
  type typ* = distinct int64
  proc `==`*(x, y: typ): bool {.borrow.}

type
  InstanceStdArray* = ref object of KaitaiStruct
    ofs*: uint32
    entrySize*: uint32
    qtyEntries*: uint32
    parent*: KaitaiStruct
    entriesInst*: seq[seq[byte]]

proc read*(_: typedesc[InstanceStdArray], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): InstanceStdArray

proc entries*(this: InstanceStdArray): seq[seq[byte]]

proc read*(_: typedesc[InstanceStdArray], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): InstanceStdArray =
  template this: untyped = result
  this = new(InstanceStdArray)
  let root = if root == nil: cast[InstanceStdArray](this) else: cast[InstanceStdArray](root)
  this.io = io
  this.root = root
  this.parent = parent

  this.ofs = this.io.readU4le()
  this.entrySize = this.io.readU4le()
  this.qtyEntries = this.io.readU4le()

proc entries(this: InstanceStdArray): seq[seq[byte]] = 
  if this.entriesInst.len != 0:
    return this.entriesInst
  let pos = this.io.pos()
  this.io.seek(int(this.ofs))
  for i in 0 ..< this.qtyEntries:
    this.entriesInst.add(this.io.readBytes(int(this.entrySize)))
  this.io.seek(pos)
  if this.entriesInst.len != 0:
    return this.entriesInst

proc fromFile*(_: typedesc[InstanceStdArray], filename: string): InstanceStdArray =
  InstanceStdArray.read(newKaitaiFileStream(filename), nil, nil)

