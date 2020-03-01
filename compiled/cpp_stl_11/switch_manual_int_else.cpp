// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <memory>
#include "switch_manual_int_else.h"

switchManualIntElse_t::switchManualIntElse_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent, switchManualIntElse_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_opcodes = nullptr;
    _read();
}

void switchManualIntElse_t::_read() {
    m_opcodes = std::unique_ptr<std::vector<std::unique_ptr<opcode_t>>>(new std::vector<std::unique_ptr<opcode_t>>());
    {
        int i = 0;
        while (!m__io->is_eof()) {
            m_opcodes->push_back(std::move(std::unique_ptr<opcode_t>(new opcode_t(m__io, this, m__root))));
            i++;
        }
    }
}

switchManualIntElse_t::~switchManualIntElse_t() {
}

switchManualIntElse_t::opcode_t::opcode_t(kaitai::kstream* p__io, switchManualIntElse_t* p__parent, switchManualIntElse_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void switchManualIntElse_t::opcode_t::_read() {
    m_code = m__io->read_u1();
    switch (code()) {
    case 73: {
        m_body = std::unique_ptr<intval_t>(new intval_t(m__io, this, m__root));
        break;
    }
    case 83: {
        m_body = std::unique_ptr<strval_t>(new strval_t(m__io, this, m__root));
        break;
    }
    default: {
        m_body = std::unique_ptr<noneval_t>(new noneval_t(m__io, this, m__root));
        break;
    }
    }
}

switchManualIntElse_t::opcode_t::~opcode_t() {
}

switchManualIntElse_t::opcode_t::intval_t::intval_t(kaitai::kstream* p__io, switchManualIntElse_t::opcode_t* p__parent, switchManualIntElse_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void switchManualIntElse_t::opcode_t::intval_t::_read() {
    m_value = m__io->read_u1();
}

switchManualIntElse_t::opcode_t::intval_t::~intval_t() {
}

switchManualIntElse_t::opcode_t::strval_t::strval_t(kaitai::kstream* p__io, switchManualIntElse_t::opcode_t* p__parent, switchManualIntElse_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void switchManualIntElse_t::opcode_t::strval_t::_read() {
    m_value = kaitai::kstream::bytes_to_str(m__io->read_bytes_term(0, false, true, true), std::string("ASCII"));
}

switchManualIntElse_t::opcode_t::strval_t::~strval_t() {
}

switchManualIntElse_t::opcode_t::noneval_t::noneval_t(kaitai::kstream* p__io, switchManualIntElse_t::opcode_t* p__parent, switchManualIntElse_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = p__root;
    _read();
}

void switchManualIntElse_t::opcode_t::noneval_t::_read() {
    m_filler = m__io->read_u4le();
}

switchManualIntElse_t::opcode_t::noneval_t::~noneval_t() {
}
