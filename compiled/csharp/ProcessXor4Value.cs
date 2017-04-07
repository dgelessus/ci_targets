// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

using System;
using System.Collections.Generic;
using System.Linq;

namespace Kaitai
{
    public partial class ProcessXor4Value : KaitaiStruct
    {
        public static ProcessXor4Value FromFile(string fileName)
        {
            return new ProcessXor4Value(new KaitaiStream(fileName));
        }

        public ProcessXor4Value(KaitaiStream io, KaitaiStruct parent = null, ProcessXor4Value root = null) : base(io)
        {
            m_parent = parent;
            m_root = root ?? this;
            _parse();
        }

        private void _parse()
        {
            _key = m_io.ReadBytes(4);
            __raw_buf = m_io.ReadBytesFull();
            _buf = m_io.ProcessXor(__raw_buf, Key);
        }
        private byte[] _key;
        private byte[] _buf;
        private ProcessXor4Value m_root;
        private KaitaiStruct m_parent;
        private byte[] __raw_buf;
        public byte[] Key { get { return _key; } }
        public byte[] Buf { get { return _buf; } }
        public ProcessXor4Value M_Root { get { return m_root; } }
        public KaitaiStruct M_Parent { get { return m_parent; } }
        public byte[] M_RawBuf { get { return __raw_buf; } }
    }
}
