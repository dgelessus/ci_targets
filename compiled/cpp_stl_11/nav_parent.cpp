// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "nav_parent.h"

navParent_t::navParent_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, navParent_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_header = nullptr;
    m_index = nullptr;
    _read();
}

void navParent_t::_read() {
    m_header = std::unique_ptr<headerObj_t>(new headerObj_t(m__io, this, m__root));
    m_index = std::unique_ptr<indexObj_t>(new indexObj_t(m__io, this, m__root));
}

navParent_t::~navParent_t() {
}

navParent_t::headerObj_t::headerObj_t(kaitai::kstream* p__io, navParent_t* p__parent, navParent_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void navParent_t::headerObj_t::_read() {
    m_qty_entries = m__io->read_u4le();
    m_filename_len = m__io->read_u4le();
}

navParent_t::headerObj_t::~headerObj_t() {
}

navParent_t::indexObj_t::indexObj_t(kaitai::kstream* p__io, navParent_t* p__parent, navParent_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    m_entries = nullptr;
    _read();
}

void navParent_t::indexObj_t::_read() {
    m_magic = m__io->read_bytes(4);
    int l_entries = _parent()->header()->qty_entries();
    m_entries = std::unique_ptr<std::vector<std::unique_ptr<entry_t>>>(new std::vector<std::unique_ptr<entry_t>>());
    m_entries->reserve(l_entries);
    for (int i = 0; i < l_entries; i++) {
        m_entries->push_back(std::move(std::unique_ptr<entry_t>(new entry_t(m__io, this, m__root))));
    }
}

navParent_t::indexObj_t::~indexObj_t() {
}

navParent_t::entry_t::entry_t(kaitai::kstream* p__io, navParent_t::indexObj_t* p__parent, navParent_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void navParent_t::entry_t::_read() {
    m_filename = kaitai::kstream::bytes_to_str(m__io->read_bytes(_parent()->_parent()->header()->filename_len()), std::string("UTF-8"));
}

navParent_t::entry_t::~entry_t() {
}
