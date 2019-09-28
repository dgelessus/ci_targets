# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

import ../../../runtime/nim/kaitai

type
  ProcessXorConst* = ref object
    key*: uint8
    buf*: seq[byte]
    root*: ProcessXorConst
    parent*: ref RootObj
    raw_buf*: seq[byte]

proc read*(_: typedesc[ProcessXorConst], stream: KaitaiStream, root: ProcessXorConst, parent: ref RootObj): owned ProcessXorConst =
  result = new(ProcessXorConst)
  let root = if root == nil: cast[ProcessXorConst](result) else: root
  result.key = readU1(stream)
  result.buf = readBytesFull(stream)
  result.root = root
  result.parent = parent

proc fromFile*(_: typedesc[ProcessXorConst], filename: string): owned ProcessXorConst =
  var stream = newKaitaiStream(filename)
  ProcessXorConst.read(stream, nil, nil)
