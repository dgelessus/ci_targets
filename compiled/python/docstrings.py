# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

import array
import struct
import zlib
from enum import Enum
from pkg_resources import parse_version

from kaitaistruct import __version__ as ks_version, KaitaiStruct, KaitaiStream, BytesIO


if parse_version(ks_version) < parse_version('0.7'):
    raise Exception("Incompatible Kaitai Struct Python API: 0.7 or later is required, but you have %s" % (ks_version))

class Docstrings(KaitaiStruct):
    def __init__(self, _io, _parent=None, _root=None):
        self._io = _io
        self._parent = _parent
        self._root = _root if _root else self
        self.one = self._io.read_u1()

    class ComplexSubtype(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self


    @property
    def two(self):
        if hasattr(self, '_m_two'):
            return self._m_two if hasattr(self, '_m_two') else None

        _pos = self._io.pos()
        self._io.seek(0)
        self._m_two = self._io.read_u1()
        self._io.seek(_pos)
        return self._m_two if hasattr(self, '_m_two') else None

    @property
    def three(self):
        if hasattr(self, '_m_three'):
            return self._m_three if hasattr(self, '_m_three') else None

        self._m_three = 66
        return self._m_three if hasattr(self, '_m_three') else None


