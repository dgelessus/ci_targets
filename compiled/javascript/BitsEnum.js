// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

var BitsEnum = (function() {
  BitsEnum.Animal = Object.freeze({
    CAT: 0,
    DOG: 1,
    HORSE: 4,
    PLATYPUS: 5,

    0: "CAT",
    1: "DOG",
    4: "HORSE",
    5: "PLATYPUS",
  });

  function BitsEnum(_io, _parent, _root) {
    this._io = _io;
    this._parent = _parent;
    this._root = _root || this;

    this._read();
  }
  BitsEnum.prototype._read = function() {
    this.one = this._io.readBitsInt(4);
    this.two = this._io.readBitsInt(8);
    this.three = this._io.readBitsInt(1);
  }

  return BitsEnum;
})();

// Export for amd environments
if (typeof define === 'function' && define.amd) {
  define('BitsEnum', [], function() {
    return BitsEnum;
  });
}

// Export for CommonJS
if (typeof module === 'object' && module && module.exports) {
  module.exports = BitsEnum;
}
