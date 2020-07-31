// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "default_endian_mod.h"

default_endian_mod_t::default_endian_mod_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, default_endian_mod_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_main = 0;

    try {
        _read();
    } catch(...) {
        this->~default_endian_mod_t();
        throw;
    }
}

void default_endian_mod_t::_read() {
    m_main = new main_obj_t(m__io, this, m__root);
}

default_endian_mod_t::~default_endian_mod_t() {
    delete m_main;
}

default_endian_mod_t::main_obj_t::main_obj_t(kaitai::kstream* p__io, default_endian_mod_t* p__parent, default_endian_mod_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_nest = 0;
    m_nest_be = 0;

    try {
        _read();
    } catch(...) {
        this->~main_obj_t();
        throw;
    }
}

void default_endian_mod_t::main_obj_t::_read() {
    m_one = m__io->read_s4le();
    m_nest = new subnest_t(m__io, this, m__root);
    m_nest_be = new subnest_be_t(m__io, this, m__root);
}

default_endian_mod_t::main_obj_t::~main_obj_t() {
    delete m_nest;
    delete m_nest_be;
}

default_endian_mod_t::main_obj_t::subnest_t::subnest_t(kaitai::kstream* p__io, default_endian_mod_t::main_obj_t* p__parent, default_endian_mod_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        this->~subnest_t();
        throw;
    }
}

void default_endian_mod_t::main_obj_t::subnest_t::_read() {
    m_two = m__io->read_s4le();
}

default_endian_mod_t::main_obj_t::subnest_t::~subnest_t() {
}

default_endian_mod_t::main_obj_t::subnest_be_t::subnest_be_t(kaitai::kstream* p__io, default_endian_mod_t::main_obj_t* p__parent, default_endian_mod_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;

    try {
        _read();
    } catch(...) {
        this->~subnest_be_t();
        throw;
    }
}

void default_endian_mod_t::main_obj_t::subnest_be_t::_read() {
    m_two = m__io->read_s4be();
}

default_endian_mod_t::main_obj_t::subnest_be_t::~subnest_be_t() {
}
