#ifndef TYPE_TERNARY_OPAQUE_H_
#define TYPE_TERNARY_OPAQUE_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"

#include <stdint.h>

#if KAITAI_STRUCT_VERSION < 7000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.7 or later is required"
#endif
class term_strz_t;

class type_ternary_opaque_t : public kaitai::kstruct {

public:

    type_ternary_opaque_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, type_ternary_opaque_t* p__root = 0);

private:
    void _read();

public:
    ~type_ternary_opaque_t();

private:
    bool f_is_hack;
    bool m_is_hack;

public:
    bool is_hack();

private:
    bool f_dif;
    term_strz_t* m_dif;

public:
    term_strz_t* dif();

private:
    term_strz_t* m_dif_wo_hack;
    bool n_dif_wo_hack;

public:
    bool _is_null_dif_wo_hack() { dif_wo_hack(); return n_dif_wo_hack; };

private:
    term_strz_t* m_dif_with_hack;
    bool n_dif_with_hack;

public:
    bool _is_null_dif_with_hack() { dif_with_hack(); return n_dif_with_hack; };

private:
    type_ternary_opaque_t* m__root;
    kaitai::kstruct* m__parent;
    std::string m__raw_dif_wo_hack;
    kaitai::kstream* m__io__raw_dif_wo_hack;
    std::string m__raw__raw_dif_with_hack;
    std::string m__raw_dif_with_hack;
    kaitai::kstream* m__io__raw_dif_with_hack;

public:
    term_strz_t* dif_wo_hack() const { return m_dif_wo_hack; }
    term_strz_t* dif_with_hack() const { return m_dif_with_hack; }
    type_ternary_opaque_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    std::string _raw_dif_wo_hack() const { return m__raw_dif_wo_hack; }
    kaitai::kstream* _io__raw_dif_wo_hack() const { return m__io__raw_dif_wo_hack; }
    std::string _raw__raw_dif_with_hack() const { return m__raw__raw_dif_with_hack; }
    std::string _raw_dif_with_hack() const { return m__raw_dif_with_hack; }
    kaitai::kstream* _io__raw_dif_with_hack() const { return m__io__raw_dif_with_hack; }
};

#endif  // TYPE_TERNARY_OPAQUE_H_
