# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

from pkg_resources import parse_version
import kaitaistruct
from kaitaistruct import KaitaiStruct, KaitaiStream, BytesIO


if parse_version(kaitaistruct.__version__) < parse_version('0.9'):
    raise Exception("Incompatible Kaitai Struct Python API: 0.9 or later is required, but you have %s" % (kaitaistruct.__version__))

class Integers(KaitaiStruct):
    def __init__(self, _io, _parent=None, _root=None):
        self._io = _io
        self._parent = _parent
        self._root = _root if _root else self
        self._read()

    def _read(self):
        self.magic1 = self._io.read_bytes(6)
        if not self.magic1 == b"\x50\x41\x43\x4B\x2D\x31":
            raise kaitaistruct.ValidationNotEqualError(b"\x50\x41\x43\x4B\x2D\x31", self.magic1, self._io, u"/seq/0")
        self.uint8 = self._io.read_u1()
        self.sint8 = self._io.read_s1()
        self.magic_uint = self._io.read_bytes(10)
        if not self.magic_uint == b"\x50\x41\x43\x4B\x2D\x55\x2D\x44\x45\x46":
            raise kaitaistruct.ValidationNotEqualError(b"\x50\x41\x43\x4B\x2D\x55\x2D\x44\x45\x46", self.magic_uint, self._io, u"/seq/3")
        self.uint16 = self._io.read_u2le()
        self.uint32 = self._io.read_u4le()
        self.uint64 = self._io.read_u8le()
        self.magic_sint = self._io.read_bytes(10)
        if not self.magic_sint == b"\x50\x41\x43\x4B\x2D\x53\x2D\x44\x45\x46":
            raise kaitaistruct.ValidationNotEqualError(b"\x50\x41\x43\x4B\x2D\x53\x2D\x44\x45\x46", self.magic_sint, self._io, u"/seq/7")
        self.sint16 = self._io.read_s2le()
        self.sint32 = self._io.read_s4le()
        self.sint64 = self._io.read_s8le()
        self.magic_uint_le = self._io.read_bytes(9)
        if not self.magic_uint_le == b"\x50\x41\x43\x4B\x2D\x55\x2D\x4C\x45":
            raise kaitaistruct.ValidationNotEqualError(b"\x50\x41\x43\x4B\x2D\x55\x2D\x4C\x45", self.magic_uint_le, self._io, u"/seq/11")
        self.uint16le = self._io.read_u2le()
        self.uint32le = self._io.read_u4le()
        self.uint64le = self._io.read_u8le()
        self.magic_sint_le = self._io.read_bytes(9)
        if not self.magic_sint_le == b"\x50\x41\x43\x4B\x2D\x53\x2D\x4C\x45":
            raise kaitaistruct.ValidationNotEqualError(b"\x50\x41\x43\x4B\x2D\x53\x2D\x4C\x45", self.magic_sint_le, self._io, u"/seq/15")
        self.sint16le = self._io.read_s2le()
        self.sint32le = self._io.read_s4le()
        self.sint64le = self._io.read_s8le()
        self.magic_uint_be = self._io.read_bytes(9)
        if not self.magic_uint_be == b"\x50\x41\x43\x4B\x2D\x55\x2D\x42\x45":
            raise kaitaistruct.ValidationNotEqualError(b"\x50\x41\x43\x4B\x2D\x55\x2D\x42\x45", self.magic_uint_be, self._io, u"/seq/19")
        self.uint16be = self._io.read_u2be()
        self.uint32be = self._io.read_u4be()
        self.uint64be = self._io.read_u8be()
        self.magic_sint_be = self._io.read_bytes(9)
        if not self.magic_sint_be == b"\x50\x41\x43\x4B\x2D\x53\x2D\x42\x45":
            raise kaitaistruct.ValidationNotEqualError(b"\x50\x41\x43\x4B\x2D\x53\x2D\x42\x45", self.magic_sint_be, self._io, u"/seq/23")
        self.sint16be = self._io.read_s2be()
        self.sint32be = self._io.read_s4be()
        self.sint64be = self._io.read_s8be()


