#ifndef ENUM_INT_RANGE_U_H_
#define ENUM_INT_RANGE_U_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class enumIntRangeU_t : public kaitai::kstruct {

public:

    enum constants_t {
        CONSTANTS_ZERO = 0,
        CONSTANTS_INT_MAX = 4294967295
    };

    enumIntRangeU_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, enumIntRangeU_t* p__root = 0);

private:
    void _read();

public:
    ~enumIntRangeU_t();

private:
    constants_t m_f1;
    constants_t m_f2;
    enumIntRangeU_t* m__root;
    kaitai::kstruct* m__parent;

public:
    constants_t f1() const { return m_f1; }
    constants_t f2() const { return m_f2; }
    enumIntRangeU_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // ENUM_INT_RANGE_U_H_
