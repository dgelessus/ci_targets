// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "if_values.h"

ifValues_t::ifValues_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, ifValues_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_codes = 0;
    _read();
}

void ifValues_t::_read() {
    int l_codes = 3;
    m_codes = new std::vector<code_t*>();
    m_codes->reserve(l_codes);
    for (int i = 0; i < l_codes; i++) {
        m_codes->push_back(new code_t(m__io, this, m__root));
    }
}

ifValues_t::~ifValues_t() {
    for (std::vector<code_t*>::iterator it = m_codes->begin(); it != m_codes->end(); ++it) {
        delete *it;
    }
    delete m_codes;
}

ifValues_t::code_t::code_t(kaitai::kstream* p__io, ifValues_t* p__parent, ifValues_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    f_half_opcode = false;
    _read();
}

void ifValues_t::code_t::_read() {
    m_opcode = m__io->read_u1();
}

ifValues_t::code_t::~code_t() {
}

int32_t ifValues_t::code_t::half_opcode() {
    if (f_half_opcode)
        return m_half_opcode;
    n_half_opcode = true;
    if (kaitai::kstream::mod(opcode(), 2) == 0) {
        n_half_opcode = false;
        m_half_opcode = (opcode() / 2);
    }
    f_half_opcode = true;
    return m_half_opcode;
}
