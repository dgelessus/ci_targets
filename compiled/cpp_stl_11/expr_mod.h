#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <memory>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class exprMod_t : public kaitai::kstruct {

public:

    exprMod_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, exprMod_t* p__root = nullptr);

private:
    void _read();

public:
    ~exprMod_t();

private:
    bool f_mod_pos_const;
    int32_t m_mod_pos_const;

public:
    int32_t mod_pos_const();

private:
    bool f_mod_neg_const;
    int32_t m_mod_neg_const;

public:
    int32_t mod_neg_const();

private:
    bool f_mod_pos_seq;
    int32_t m_mod_pos_seq;

public:
    int32_t mod_pos_seq();

private:
    bool f_mod_neg_seq;
    int32_t m_mod_neg_seq;

public:
    int32_t mod_neg_seq();

private:
    uint32_t m_int_u;
    int32_t m_int_s;
    exprMod_t* m__root;
    kaitai::kstruct* m__parent;

public:
    uint32_t int_u() const { return m_int_u; }
    int32_t int_s() const { return m_int_s; }
    exprMod_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};
