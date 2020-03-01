#ifndef NAV_PARENT_FALSE_H_
#define NAV_PARENT_FALSE_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class navParentFalse_t : public kaitai::kstruct {

public:
    class parentA_t;
    class parentB_t;
    class child_t;

    navParentFalse_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, navParentFalse_t* p__root = 0);

private:
    void _read();

public:
    ~navParentFalse_t();

    class parentA_t : public kaitai::kstruct {

    public:

        parentA_t(kaitai::kstream* p__io, navParentFalse_t* p__parent = 0, navParentFalse_t* p__root = 0);

    private:
        void _read();

    public:
        ~parentA_t();

    private:
        child_t* m_foo;
        parentB_t* m_bar;
        navParentFalse_t* m__root;
        navParentFalse_t* m__parent;

    public:
        child_t* foo() const { return m_foo; }
        parentB_t* bar() const { return m_bar; }
        navParentFalse_t* _root() const { return m__root; }
        navParentFalse_t* _parent() const { return m__parent; }
    };

    class parentB_t : public kaitai::kstruct {

    public:

        parentB_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, navParentFalse_t* p__root = 0);

    private:
        void _read();

    public:
        ~parentB_t();

    private:
        child_t* m_foo;
        navParentFalse_t* m__root;
        kaitai::kstruct* m__parent;

    public:
        child_t* foo() const { return m_foo; }
        navParentFalse_t* _root() const { return m__root; }
        kaitai::kstruct* _parent() const { return m__parent; }
    };

    class child_t : public kaitai::kstruct {

    public:

        child_t(kaitai::kstream* p__io, navParentFalse_t::parentA_t* p__parent = 0, navParentFalse_t* p__root = 0);

    private:
        void _read();

    public:
        ~child_t();

    private:
        uint8_t m_code;
        std::string m_more;
        bool n_more;

    public:
        bool _is_null_more() { more(); return n_more; };

    private:
        navParentFalse_t* m__root;
        navParentFalse_t::parentA_t* m__parent;

    public:
        uint8_t code() const { return m_code; }
        std::string more() const { return m_more; }
        navParentFalse_t* _root() const { return m__root; }
        navParentFalse_t::parentA_t* _parent() const { return m__parent; }
    };

private:
    uint8_t m_child_size;
    parentA_t* m_element_a;
    parentB_t* m_element_b;
    navParentFalse_t* m__root;
    kaitai::kstruct* m__parent;

public:
    uint8_t child_size() const { return m_child_size; }
    parentA_t* element_a() const { return m_element_a; }
    parentB_t* element_b() const { return m_element_b; }
    navParentFalse_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // NAV_PARENT_FALSE_H_
