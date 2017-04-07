# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

import array
import struct
import zlib
from enum import Enum
from pkg_resources import parse_version

from kaitaistruct import __version__ as ks_version, KaitaiStruct, KaitaiStream, BytesIO


if parse_version(ks_version) < parse_version('0.7'):
    raise Exception("Incompatible Kaitai Struct Python API: 0.7 or later is required, but you have %s" % (ks_version))

class EnumIf(KaitaiStruct):

    class Opcodes(Enum):
        a_string = 83
        a_tuple = 84
    def __init__(self, _io, _parent=None, _root=None):
        self._io = _io
        self._parent = _parent
        self._root = _root if _root else self
        self.op1 = self._root.Operation(self._io, self, self._root)
        self.op2 = self._root.Operation(self._io, self, self._root)
        self.op3 = self._root.Operation(self._io, self, self._root)

    class Operation(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.opcode = self._root.Opcodes(self._io.read_u1())
            if self.opcode == self._root.Opcodes.a_tuple:
                self.arg_tuple = self._root.ArgTuple(self._io, self, self._root)

            if self.opcode == self._root.Opcodes.a_string:
                self.arg_str = self._root.ArgStr(self._io, self, self._root)



    class ArgTuple(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.num1 = self._io.read_u1()
            self.num2 = self._io.read_u1()


    class ArgStr(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.len = self._io.read_u1()
            self.str = (self._io.read_bytes(self.len)).decode(u"UTF-8")



