// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

var RepeatUntilComplex = (function() {
  function RepeatUntilComplex(_io, _parent, _root) {
    this._io = _io;
    this._parent = _parent;
    this._root = _root || this;

    this.first = []
    do {
      var _ = new TypeU1(this._io, this, this._root);
      this.first.push(_);
    } while (!(_.count == 0));
    this.second = []
    do {
      var _ = new TypeU2(this._io, this, this._root);
      this.second.push(_);
    } while (!(_.count == 0));
    this.third = []
    do {
      var _ = this._io.readU1();
      this.third.push(_);
    } while (!(_ == 0));
  }

  var TypeU1 = RepeatUntilComplex.TypeU1 = (function() {
    function TypeU1(_io, _parent, _root) {
      this._io = _io;
      this._parent = _parent;
      this._root = _root || this;

      this.count = this._io.readU1();
      this.values = new Array(this.count);
      for (var i = 0; i < this.count; i++) {
        this.values[i] = this._io.readU1();
      }
    }

    return TypeU1;
  })();

  var TypeU2 = RepeatUntilComplex.TypeU2 = (function() {
    function TypeU2(_io, _parent, _root) {
      this._io = _io;
      this._parent = _parent;
      this._root = _root || this;

      this.count = this._io.readU2le();
      this.values = new Array(this.count);
      for (var i = 0; i < this.count; i++) {
        this.values[i] = this._io.readU2le();
      }
    }

    return TypeU2;
  })();

  return RepeatUntilComplex;
})();

// Export for amd environments
if (typeof define === 'function' && define.amd) {
  define('RepeatUntilComplex', [], function() {
    return RepeatUntilComplex;
  });
}

// Export for CommonJS
if (typeof module === 'object' && module && module.exports) {
  module.exports = RepeatUntilComplex;
}
