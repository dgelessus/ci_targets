#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <memory>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class validFailInst_t : public kaitai::kstruct {

public:

    validFailInst_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, validFailInst_t* p__root = nullptr);

private:
    void _read();

public:
    ~validFailInst_t();

private:
    bool f_inst;
    uint8_t m_inst;

public:
    uint8_t inst();

private:
    uint8_t m_a;
    bool n_a;

public:
    bool _is_null_a() { a(); return n_a; };

private:
    validFailInst_t* m__root;
    kaitai::kstruct* m__parent;

public:
    uint8_t a() const { return m_a; }
    validFailInst_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};
