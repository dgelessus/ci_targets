#ifndef NAV_PARENT_FALSE2_H_
#define NAV_PARENT_FALSE2_H_

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

class nav_parent_false2_t : public kaitai::kstruct {

public:
    class child_t;

    nav_parent_false2_t(kaitai::kstream* p_io, kaitai::kstruct* p_parent = 0, nav_parent_false2_t* p_root = 0);
    ~nav_parent_false2_t();

    class child_t : public kaitai::kstruct {

    public:

        child_t(kaitai::kstream* p_io, kaitai::kstruct* p_parent = 0, nav_parent_false2_t* p_root = 0);
        ~child_t();

    private:
        uint8_t m_foo;
        nav_parent_false2_t* m__root;
        kaitai::kstruct* m__parent;

    public:
        uint8_t foo() const { return m_foo; }
        nav_parent_false2_t* _root() const { return m__root; }
        kaitai::kstruct* _parent() const { return m__parent; }
    };

private:
    child_t* m_parentless;
    nav_parent_false2_t* m__root;
    kaitai::kstruct* m__parent;

public:
    child_t* parentless() const { return m_parentless; }
    nav_parent_false2_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // NAV_PARENT_FALSE2_H_
