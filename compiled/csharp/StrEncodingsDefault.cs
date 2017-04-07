// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

using System;
using System.Collections.Generic;
using System.Linq;

namespace Kaitai
{
    public partial class StrEncodingsDefault : KaitaiStruct
    {
        public static StrEncodingsDefault FromFile(string fileName)
        {
            return new StrEncodingsDefault(new KaitaiStream(fileName));
        }

        public StrEncodingsDefault(KaitaiStream io, KaitaiStruct parent = null, StrEncodingsDefault root = null) : base(io)
        {
            m_parent = parent;
            m_root = root ?? this;
            _parse();
        }

        private void _parse()
        {
            _lenOf1 = m_io.ReadU2le();
            _str1 = System.Text.Encoding.GetEncoding("UTF-8").GetString(m_io.ReadBytes(LenOf1));
            _rest = new Subtype(m_io, this, m_root);
        }
        public partial class Subtype : KaitaiStruct
        {
            public static Subtype FromFile(string fileName)
            {
                return new Subtype(new KaitaiStream(fileName));
            }

            public Subtype(KaitaiStream io, StrEncodingsDefault parent = null, StrEncodingsDefault root = null) : base(io)
            {
                m_parent = parent;
                m_root = root;
                _parse();
            }

            private void _parse()
            {
                _lenOf2 = m_io.ReadU2le();
                _str2 = System.Text.Encoding.GetEncoding("UTF-8").GetString(m_io.ReadBytes(LenOf2));
                _lenOf3 = m_io.ReadU2le();
                _str3 = System.Text.Encoding.GetEncoding("SJIS").GetString(m_io.ReadBytes(LenOf3));
                _lenOf4 = m_io.ReadU2le();
                _str4 = System.Text.Encoding.GetEncoding("CP437").GetString(m_io.ReadBytes(LenOf4));
            }
            private ushort _lenOf2;
            private string _str2;
            private ushort _lenOf3;
            private string _str3;
            private ushort _lenOf4;
            private string _str4;
            private StrEncodingsDefault m_root;
            private StrEncodingsDefault m_parent;
            public ushort LenOf2 { get { return _lenOf2; } }
            public string Str2 { get { return _str2; } }
            public ushort LenOf3 { get { return _lenOf3; } }
            public string Str3 { get { return _str3; } }
            public ushort LenOf4 { get { return _lenOf4; } }
            public string Str4 { get { return _str4; } }
            public StrEncodingsDefault M_Root { get { return m_root; } }
            public StrEncodingsDefault M_Parent { get { return m_parent; } }
        }
        private ushort _lenOf1;
        private string _str1;
        private Subtype _rest;
        private StrEncodingsDefault m_root;
        private KaitaiStruct m_parent;
        public ushort LenOf1 { get { return _lenOf1; } }
        public string Str1 { get { return _str1; } }
        public Subtype Rest { get { return _rest; } }
        public StrEncodingsDefault M_Root { get { return m_root; } }
        public KaitaiStruct M_Parent { get { return m_parent; } }
    }
}
