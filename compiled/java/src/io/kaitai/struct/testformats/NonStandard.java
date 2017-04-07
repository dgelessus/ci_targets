// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package io.kaitai.struct.testformats;

import io.kaitai.struct.KaitaiStruct;
import io.kaitai.struct.KaitaiStream;

import java.io.IOException;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.nio.charset.Charset;

public class NonStandard extends KaitaiStruct {
    public static NonStandard fromFile(String fileName) throws IOException {
        return new NonStandard(new KaitaiStream(fileName));
    }

    public NonStandard(KaitaiStream _io) {
        super(_io);
        this._root = this;
        _read();
    }

    public NonStandard(KaitaiStream _io, KaitaiStruct _parent) {
        super(_io);
        this._parent = _parent;
        this._root = this;
        _read();
    }

    public NonStandard(KaitaiStream _io, KaitaiStruct _parent, NonStandard _root) {
        super(_io);
        this._parent = _parent;
        this._root = _root;
        _read();
    }
    private void _read() {
        this.foo = this._io.readU1();
        switch (foo()) {
        case 42: {
            this.bar = this._io.readU2le();
            break;
        }
        case 43: {
            this.bar = this._io.readU4le();
            break;
        }
        }
    }
    private Integer vi;
    public Integer vi() {
        if (this.vi != null)
            return this.vi;
        int _tmp = (int) (foo());
        this.vi = _tmp;
        return this.vi;
    }
    private Integer pi;
    public Integer pi() {
        if (this.pi != null)
            return this.pi;
        long _pos = this._io.pos();
        this._io.seek(0);
        this.pi = this._io.readU1();
        this._io.seek(_pos);
        return this.pi;
    }
    private int foo;
    private long bar;
    private NonStandard _root;
    private KaitaiStruct _parent;
    public int foo() { return foo; }
    public long bar() { return bar; }
    public NonStandard _root() { return _root; }
    public KaitaiStruct _parent() { return _parent; }
}
