// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

using System;
using System.Collections.Generic;
using System.Linq;

namespace Kaitai
{
    public partial class RecursiveOne : KaitaiStruct
    {
        public static RecursiveOne FromFile(string fileName)
        {
            return new RecursiveOne(new KaitaiStream(fileName));
        }

        public RecursiveOne(KaitaiStream io, KaitaiStruct parent = null, RecursiveOne root = null) : base(io)
        {
            m_parent = parent;
            m_root = root ?? this;
            _parse();
        }

        private void _parse()
        {
            _one = m_io.ReadU1();
            switch ((One & 3)) {
            case 0: {
                _next = new RecursiveOne(m_io);
                break;
            }
            case 1: {
                _next = new RecursiveOne(m_io);
                break;
            }
            case 2: {
                _next = new RecursiveOne(m_io);
                break;
            }
            case 3: {
                _next = new Fini(m_io, this, m_root);
                break;
            }
            }
        }
        public partial class Fini : KaitaiStruct
        {
            public static Fini FromFile(string fileName)
            {
                return new Fini(new KaitaiStream(fileName));
            }

            public Fini(KaitaiStream io, RecursiveOne parent = null, RecursiveOne root = null) : base(io)
            {
                m_parent = parent;
                m_root = root;
                _parse();
            }

            private void _parse()
            {
                _finisher = m_io.ReadU2le();
            }
            private ushort _finisher;
            private RecursiveOne m_root;
            private RecursiveOne m_parent;
            public ushort Finisher { get { return _finisher; } }
            public RecursiveOne M_Root { get { return m_root; } }
            public RecursiveOne M_Parent { get { return m_parent; } }
        }
        private byte _one;
        private KaitaiStruct _next;
        private RecursiveOne m_root;
        private KaitaiStruct m_parent;
        public byte One { get { return _one; } }
        public KaitaiStruct Next { get { return _next; } }
        public RecursiveOne M_Root { get { return m_root; } }
        public KaitaiStruct M_Parent { get { return m_parent; } }
    }
}
