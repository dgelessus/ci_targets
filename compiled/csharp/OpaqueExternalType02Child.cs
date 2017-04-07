// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

using System;
using System.Collections.Generic;
using System.Linq;

namespace Kaitai
{
    public partial class OpaqueExternalType02Child : KaitaiStruct
    {
        public static OpaqueExternalType02Child FromFile(string fileName)
        {
            return new OpaqueExternalType02Child(new KaitaiStream(fileName));
        }

        public OpaqueExternalType02Child(KaitaiStream io, KaitaiStruct parent = null, OpaqueExternalType02Child root = null) : base(io)
        {
            m_parent = parent;
            m_root = root ?? this;
            _parse();
        }

        private void _parse()
        {
            f_someMethod = false;
            _s1 = System.Text.Encoding.GetEncoding("UTF-8").GetString(m_io.ReadBytesTerm(124, false, true, true));
            _s2 = System.Text.Encoding.GetEncoding("UTF-8").GetString(m_io.ReadBytesTerm(124, false, false, true));
            _s3 = new OpaqueExternalType02ChildChild(m_io, this, m_root);
        }
        public partial class OpaqueExternalType02ChildChild : KaitaiStruct
        {
            public static OpaqueExternalType02ChildChild FromFile(string fileName)
            {
                return new OpaqueExternalType02ChildChild(new KaitaiStream(fileName));
            }

            public OpaqueExternalType02ChildChild(KaitaiStream io, OpaqueExternalType02Child parent = null, OpaqueExternalType02Child root = null) : base(io)
            {
                m_parent = parent;
                m_root = root;
                _parse();
            }

            private void _parse()
            {
                if (M_Root.SomeMethod) {
                    _s3 = System.Text.Encoding.GetEncoding("UTF-8").GetString(m_io.ReadBytesTerm(64, true, true, true));
                }
            }
            private string _s3;
            private OpaqueExternalType02Child m_root;
            private OpaqueExternalType02Child m_parent;
            public string S3 { get { return _s3; } }
            public OpaqueExternalType02Child M_Root { get { return m_root; } }
            public OpaqueExternalType02Child M_Parent { get { return m_parent; } }
        }
        private bool f_someMethod;
        private bool _someMethod;
        public bool SomeMethod
        {
            get
            {
                if (f_someMethod)
                    return _someMethod;
                _someMethod = (bool) (true);
                f_someMethod = true;
                return _someMethod;
            }
        }
        private string _s1;
        private string _s2;
        private OpaqueExternalType02ChildChild _s3;
        private OpaqueExternalType02Child m_root;
        private KaitaiStruct m_parent;
        public string S1 { get { return _s1; } }
        public string S2 { get { return _s2; } }
        public OpaqueExternalType02ChildChild S3 { get { return _s3; } }
        public OpaqueExternalType02Child M_Root { get { return m_root; } }
        public KaitaiStruct M_Parent { get { return m_parent; } }
    }
}
