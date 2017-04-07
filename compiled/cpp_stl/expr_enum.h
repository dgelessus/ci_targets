#ifndef EXPR_ENUM_H_
#define EXPR_ENUM_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include <kaitai/kaitaistruct.h>
#include <kaitai/kaitaistream.h>

#include <stdint.h>
#include <vector>
#include <sstream>
#include <algorithm>

#if KAITAI_STRUCT_VERSION < 7000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.7 or later is required"
#endif

class expr_enum_t : public kaitai::kstruct {

public:

    enum animal_t {
        ANIMAL_DOG = 4,
        ANIMAL_CAT = 7,
        ANIMAL_CHICKEN = 12,
        ANIMAL_BOOM = 102
    };

    expr_enum_t(kaitai::kstream* p_io, kaitai::kstruct* p_parent = 0, expr_enum_t* p_root = 0);
    ~expr_enum_t();

private:
    bool f_const_dog;
    animal_t m_const_dog;

public:
    animal_t const_dog();

private:
    bool f_derived_boom;
    animal_t m_derived_boom;

public:
    animal_t derived_boom();

private:
    bool f_derived_dog;
    animal_t m_derived_dog;

public:
    animal_t derived_dog();

private:
    uint8_t m_one;
    expr_enum_t* m__root;
    kaitai::kstruct* m__parent;

public:
    uint8_t one() const { return m_one; }
    expr_enum_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // EXPR_ENUM_H_
