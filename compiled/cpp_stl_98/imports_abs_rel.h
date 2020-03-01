#ifndef IMPORTS_ABS_REL_H_
#define IMPORTS_ABS_REL_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include "/for_abs_imports/imported_and_rel.h"

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif
class importedAndRel_t;

class importsAbsRel_t : public kaitai::kstruct {

public:

    importsAbsRel_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, importsAbsRel_t* p__root = 0);

private:
    void _read();

public:
    ~importsAbsRel_t();

private:
    uint8_t m_one;
    importedAndRel_t* m_two;
    importsAbsRel_t* m__root;
    kaitai::kstruct* m__parent;

public:
    uint8_t one() const { return m_one; }
    importedAndRel_t* two() const { return m_two; }
    importsAbsRel_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // IMPORTS_ABS_REL_H_
