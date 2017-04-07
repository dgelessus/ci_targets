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

public class NavRoot extends KaitaiStruct {
    public static NavRoot fromFile(String fileName) throws IOException {
        return new NavRoot(new KaitaiStream(fileName));
    }

    public NavRoot(KaitaiStream _io) {
        super(_io);
        this._root = this;
        _read();
    }

    public NavRoot(KaitaiStream _io, KaitaiStruct _parent) {
        super(_io);
        this._parent = _parent;
        this._root = this;
        _read();
    }

    public NavRoot(KaitaiStream _io, KaitaiStruct _parent, NavRoot _root) {
        super(_io);
        this._parent = _parent;
        this._root = _root;
        _read();
    }
    private void _read() {
        this.header = new HeaderObj(this._io, this, _root);
        this.index = new IndexObj(this._io, this, _root);
    }
    public static class HeaderObj extends KaitaiStruct {
        public static HeaderObj fromFile(String fileName) throws IOException {
            return new HeaderObj(new KaitaiStream(fileName));
        }

        public HeaderObj(KaitaiStream _io) {
            super(_io);
            _read();
        }

        public HeaderObj(KaitaiStream _io, NavRoot _parent) {
            super(_io);
            this._parent = _parent;
            _read();
        }

        public HeaderObj(KaitaiStream _io, NavRoot _parent, NavRoot _root) {
            super(_io);
            this._parent = _parent;
            this._root = _root;
            _read();
        }
        private void _read() {
            this.qtyEntries = this._io.readU4le();
            this.filenameLen = this._io.readU4le();
        }
        private long qtyEntries;
        private long filenameLen;
        private NavRoot _root;
        private NavRoot _parent;
        public long qtyEntries() { return qtyEntries; }
        public long filenameLen() { return filenameLen; }
        public NavRoot _root() { return _root; }
        public NavRoot _parent() { return _parent; }
    }
    public static class IndexObj extends KaitaiStruct {
        public static IndexObj fromFile(String fileName) throws IOException {
            return new IndexObj(new KaitaiStream(fileName));
        }

        public IndexObj(KaitaiStream _io) {
            super(_io);
            _read();
        }

        public IndexObj(KaitaiStream _io, NavRoot _parent) {
            super(_io);
            this._parent = _parent;
            _read();
        }

        public IndexObj(KaitaiStream _io, NavRoot _parent, NavRoot _root) {
            super(_io);
            this._parent = _parent;
            this._root = _root;
            _read();
        }
        private void _read() {
            this.magic = this._io.readBytes(4);
            entries = new ArrayList<Entry>((int) (_root.header().qtyEntries()));
            for (int i = 0; i < _root.header().qtyEntries(); i++) {
                this.entries.add(new Entry(this._io, this, _root));
            }
        }
        private byte[] magic;
        private ArrayList<Entry> entries;
        private NavRoot _root;
        private NavRoot _parent;
        public byte[] magic() { return magic; }
        public ArrayList<Entry> entries() { return entries; }
        public NavRoot _root() { return _root; }
        public NavRoot _parent() { return _parent; }
    }
    public static class Entry extends KaitaiStruct {
        public static Entry fromFile(String fileName) throws IOException {
            return new Entry(new KaitaiStream(fileName));
        }

        public Entry(KaitaiStream _io) {
            super(_io);
            _read();
        }

        public Entry(KaitaiStream _io, IndexObj _parent) {
            super(_io);
            this._parent = _parent;
            _read();
        }

        public Entry(KaitaiStream _io, IndexObj _parent, NavRoot _root) {
            super(_io);
            this._parent = _parent;
            this._root = _root;
            _read();
        }
        private void _read() {
            this.filename = new String(this._io.readBytes(_root.header().filenameLen()), Charset.forName("UTF-8"));
        }
        private String filename;
        private NavRoot _root;
        private NavRoot.IndexObj _parent;
        public String filename() { return filename; }
        public NavRoot _root() { return _root; }
        public NavRoot.IndexObj _parent() { return _parent; }
    }
    private HeaderObj header;
    private IndexObj index;
    private NavRoot _root;
    private KaitaiStruct _parent;
    public HeaderObj header() { return header; }
    public IndexObj index() { return index; }
    public NavRoot _root() { return _root; }
    public KaitaiStruct _parent() { return _parent; }
}
