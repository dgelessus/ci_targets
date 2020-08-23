-- This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild
--
-- This file is compatible with Lua 5.3

local class = require("class")
require("kaitaistruct")
local str_decode = require("string_decode")

IndexSizes = class.class(KaitaiStruct)

function IndexSizes:_init(io, parent, root)
  KaitaiStruct._init(self, io)
  self._parent = parent
  self._root = root or self
  self:_read()
end

function IndexSizes:_read()
  self.qty = self._io:read_u4le()
  self.sizes = {}
  for i = 0, self.qty - 1 do
    self.sizes[i + 1] = self._io:read_u4le()
  end
  self.bufs = {}
  for i = 0, self.qty - 1 do
    self.bufs[i + 1] = str_decode.decode(self._io:read_bytes(self.sizes[i + 1]), "ASCII")
  end
end


