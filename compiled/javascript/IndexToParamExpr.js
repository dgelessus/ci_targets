// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

var IndexToParamExpr = (function() {
  function IndexToParamExpr(_io, _parent, _root) {
    this._io = _io;
    this._parent = _parent;
    this._root = _root || this;

    this._read();
  }
  IndexToParamExpr.prototype._read = function() {
    this.qty = this._io.readU4le();
    this.sizes = new Array(this.qty);
    for (var i = 0; i < this.qty; i++) {
      this.sizes[i] = this._io.readU4le();
    }
    this.blocks = new Array(this.qty);
    for (var i = 0; i < this.qty; i++) {
      this.blocks[i] = new Block(this._io, this, this._root, i);
    }
  }

  var Block = IndexToParamExpr.Block = (function() {
    function Block(_io, _parent, _root, idx) {
      this._io = _io;
      this._parent = _parent;
      this._root = _root || this;
      this.idx = idx;

      this._read();
    }
    Block.prototype._read = function() {
      this.buf = KaitaiStream.bytesToStr(this._io.readBytes(this._root.sizes[this.idx]), "ASCII");
    }

    return Block;
  })();

  return IndexToParamExpr;
})();

// Export for amd environments
if (typeof define === 'function' && define.amd) {
  define('IndexToParamExpr', [], function() {
    return IndexToParamExpr;
  });
}

// Export for CommonJS
if (typeof module === 'object' && module && module.exports) {
  module.exports = IndexToParamExpr;
}