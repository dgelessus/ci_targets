// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "valid_fail_eq_str.h"
#include "kaitai/exceptions.h"

valid_fail_eq_str_t::valid_fail_eq_str_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, valid_fail_eq_str_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    _read();
}

void valid_fail_eq_str_t::_read() {
    m_foo = kaitai::kstream::bytes_to_str(m__io->read_bytes(4), std::string("ASCII"));
    if (!(foo() == (std::string("BACK")))) {
        throw kaitai::validation_not_equal_error<std::string>(std::string("BACK"), foo(), _io(), std::string("/seq/0"));
    }
}

valid_fail_eq_str_t::~valid_fail_eq_str_t() {
    _clean_up();
}

void valid_fail_eq_str_t::_clean_up() {
}