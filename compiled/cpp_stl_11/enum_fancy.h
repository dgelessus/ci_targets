#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <memory>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class enum_fancy_t : public kaitai::kstruct {

public:

    enum animal_t {
        ANIMAL_DOG = 4,
        ANIMAL_CAT = 7,
        ANIMAL_CHICKEN = 12
    };

    enum_fancy_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, enum_fancy_t* p__root = nullptr);

private:
    void _read();

public:

private:
    void _clean_up();

public:
    ~enum_fancy_t();

private:
    animal_t m_pet_1;
    animal_t m_pet_2;
    enum_fancy_t* m__root;
    kaitai::kstruct* m__parent;

public:
    animal_t pet_1() const { return m_pet_1; }
    animal_t pet_2() const { return m_pet_2; }
    enum_fancy_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};
