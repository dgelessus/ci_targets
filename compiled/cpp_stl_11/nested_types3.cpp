// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "nested_types3.h"

nestedTypes3_t::nestedTypes3_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, nestedTypes3_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_a_cc = nullptr;
    m_a_c_d = nullptr;
    m_b = nullptr;
    _read();
}

void nestedTypes3_t::_read() {
    m_a_cc = std::unique_ptr<subtypeA_t::subtypeCc_t>(new subtypeA_t::subtypeCc_t(m__io, this, m__root));
    m_a_c_d = std::unique_ptr<subtypeA_t::subtypeC_t::subtypeD_t>(new subtypeA_t::subtypeC_t::subtypeD_t(m__io, this, m__root));
    m_b = std::unique_ptr<subtypeB_t>(new subtypeB_t(m__io, this, m__root));
}

nestedTypes3_t::~nestedTypes3_t() {
}

nestedTypes3_t::subtypeA_t::subtypeA_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, nestedTypes3_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void nestedTypes3_t::subtypeA_t::_read() {
}

nestedTypes3_t::subtypeA_t::~subtypeA_t() {
}

nestedTypes3_t::subtypeA_t::subtypeC_t::subtypeC_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, nestedTypes3_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void nestedTypes3_t::subtypeA_t::subtypeC_t::_read() {
}

nestedTypes3_t::subtypeA_t::subtypeC_t::~subtypeC_t() {
}

nestedTypes3_t::subtypeA_t::subtypeC_t::subtypeD_t::subtypeD_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, nestedTypes3_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void nestedTypes3_t::subtypeA_t::subtypeC_t::subtypeD_t::_read() {
    m_value_d = m__io->read_s1();
}

nestedTypes3_t::subtypeA_t::subtypeC_t::subtypeD_t::~subtypeD_t() {
}

nestedTypes3_t::subtypeA_t::subtypeCc_t::subtypeCc_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, nestedTypes3_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void nestedTypes3_t::subtypeA_t::subtypeCc_t::_read() {
    m_value_cc = m__io->read_s1();
}

nestedTypes3_t::subtypeA_t::subtypeCc_t::~subtypeCc_t() {
}

nestedTypes3_t::subtypeB_t::subtypeB_t(kaitai::kstream* p__io, nestedTypes3_t* p__parent, nestedTypes3_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_a_cc = nullptr;
    m_a_c_d = nullptr;
    _read();
}

void nestedTypes3_t::subtypeB_t::_read() {
    m_value_b = m__io->read_s1();
    m_a_cc = std::unique_ptr<subtypeA_t::subtypeCc_t>(new subtypeA_t::subtypeCc_t(m__io, this, m__root));
    m_a_c_d = std::unique_ptr<subtypeA_t::subtypeC_t::subtypeD_t>(new subtypeA_t::subtypeC_t::subtypeD_t(m__io, this, m__root));
}

nestedTypes3_t::subtypeB_t::~subtypeB_t() {
}
