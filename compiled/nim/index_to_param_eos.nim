import kaitai_struct_nim_runtime
import options

template defineEnum(typ) =
  type typ* = distinct int64
  proc `==`*(x, y: typ): bool {.borrow.}

type
  IndexToParamEos* = ref object of KaitaiStruct
    qty*: uint32
    sizes*: seq[uint32]
    blocks*: seq[IndexToParamEos_Block]
    parent*: KaitaiStruct
  IndexToParamEos_Block* = ref object of KaitaiStruct
    buf*: string
    idx*: int32
    parent*: IndexToParamEos

proc read*(_: typedesc[IndexToParamEos], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): IndexToParamEos
proc read*(_: typedesc[IndexToParamEos_Block], io: KaitaiStream, root: KaitaiStruct, parent: IndexToParamEos, idx: any): IndexToParamEos_Block


proc read*(_: typedesc[IndexToParamEos], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): IndexToParamEos =
  template this: untyped = result
  this = new(IndexToParamEos)
  let root = if root == nil: cast[IndexToParamEos](this) else: cast[IndexToParamEos](root)
  this.io = io
  this.root = root
  this.parent = parent

  this.qty = this.io.readU4le()
  for i in 0 ..< this.qty:
    this.sizes.add(this.io.readU4le())
  while not this.io.isEof:
    this.blocks.add(IndexToParamEos_Block.read(this.io, this.root, this, i))

proc fromFile*(_: typedesc[IndexToParamEos], filename: string): IndexToParamEos =
  IndexToParamEos.read(newKaitaiFileStream(filename), nil, nil)

proc read*(_: typedesc[IndexToParamEos_Block], io: KaitaiStream, root: KaitaiStruct, parent: IndexToParamEos, idx: any): IndexToParamEos_Block =
  template this: untyped = result
  this = new(IndexToParamEos_Block)
  let root = if root == nil: cast[IndexToParamEos](this) else: cast[IndexToParamEos](root)
  this.io = io
  this.root = root
  this.parent = parent

  this.buf = encode(this.io.readBytes(int(IndexToParamEos(this.root).sizes[this.idx])), "ASCII")

proc fromFile*(_: typedesc[IndexToParamEos_Block], filename: string): IndexToParamEos_Block =
  IndexToParamEos_Block.read(newKaitaiFileStream(filename), nil, nil)

