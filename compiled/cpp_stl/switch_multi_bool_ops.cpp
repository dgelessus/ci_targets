// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "switch_multi_bool_ops.h"



switch_multi_bool_ops_t::switch_multi_bool_ops_t(kaitai::kstream *p_io, kaitai::kstruct* p_parent, switch_multi_bool_ops_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = this;
    _read();
}

void switch_multi_bool_ops_t::_read() {
    m_opcodes = new std::vector<opcode_t*>();
    while (!m__io->is_eof()) {
        m_opcodes->push_back(new opcode_t(m__io, this, m__root));
    }
}

switch_multi_bool_ops_t::~switch_multi_bool_ops_t() {
    for (std::vector<opcode_t*>::iterator it = m_opcodes->begin(); it != m_opcodes->end(); ++it) {
        delete *it;
    }
    delete m_opcodes;
}

switch_multi_bool_ops_t::opcode_t::opcode_t(kaitai::kstream *p_io, switch_multi_bool_ops_t* p_parent, switch_multi_bool_ops_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = p_root;
    _read();
}

void switch_multi_bool_ops_t::opcode_t::_read() {
    m_code = m__io->read_u1();
    n_body = true;
    switch ((( ((code() > 0) && (code() <= 8) && (((code() != 10) ? (true) : (false)))) ) ? (code()) : (0))) {
    case 1: {
        n_body = false;
        m_body = m__io->read_u1();
        break;
    }
    case 2: {
        n_body = false;
        m_body = m__io->read_u2le();
        break;
    }
    case 4: {
        n_body = false;
        m_body = m__io->read_u4le();
        break;
    }
    case 8: {
        n_body = false;
        m_body = m__io->read_u8le();
        break;
    }
    }
}

switch_multi_bool_ops_t::opcode_t::~opcode_t() {
    if (!n_body) {
    }
}
