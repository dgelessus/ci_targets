import kaitai_struct_nim_runtime
import options

type
  ProcessRepeatBytes* = ref object of KaitaiStruct
    bufs*: seq[string]
    parent*: KaitaiStruct
    rawBufs*: seq[string]

proc read*(_: typedesc[ProcessRepeatBytes], io: KaitaiStream, root: KaitaiStruct, parent: KaitaiStruct): ProcessRepeatBytes =
  template this: untyped = result
  this = new(ProcessRepeatBytes)
  let root = if root == nil: cast[KaitaiStruct](this) else: root
  this.io = io
  this.root = root
  this.parent = parent


  ##[
  ]##
  this.rawBufs = newString(2)
  bufs = newSeq[string](2)
  for i in 0 ..< 2:
    this.rawBufs.add(this.io.readBytes(int(5)))
    this.bufs.add(rawBufs.processXor(158))

proc fromFile*(_: typedesc[ProcessRepeatBytes], filename: string): ProcessRepeatBytes =
  ProcessRepeatBytes.read(newKaitaiFileStream(filename), nil, nil)
