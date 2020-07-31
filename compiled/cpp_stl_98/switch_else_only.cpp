// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "switch_else_only.h"

switch_else_only_t::switch_else_only_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, switch_else_only_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;

    try {
        _read();
    } catch(...) {
        this->~switch_else_only_t();
        throw;
    }
}

void switch_else_only_t::_read() {
    m_opcode = m__io->read_s1();
    m_prim_byte = m__io->read_s1();
    m_indicator = m__io->read_bytes(4);
    m_ut = new data_t(m__io, this, m__root);
}

switch_else_only_t::~switch_else_only_t() {
    delete m_ut;
}

switch_else_only_t::data_t::data_t(kaitai::kstream* p__io, switch_else_only_t* p__parent, switch_else_only_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        this->~data_t();
        throw;
    }
}

void switch_else_only_t::data_t::_read() {
    m_value = m__io->read_bytes(4);
}

switch_else_only_t::data_t::~data_t() {
}
