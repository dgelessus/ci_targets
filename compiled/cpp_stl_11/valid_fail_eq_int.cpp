// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "valid_fail_eq_int.h"
#include "kaitai/exceptions.h"

validFailEqInt_t::validFailEqInt_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, validFailEqInt_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    _read();
}

void validFailEqInt_t::_read() {
    m_foo = m__io->read_u1();
    if (!(foo() == 123)) {
        throw kaitai::validation_not_equal_error<uint8_t>(123, foo(), _io(), std::string("/seq/0"));
    }
}

validFailEqInt_t::~validFailEqInt_t() {
}
