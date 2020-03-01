#ifndef PARAMS_PASS_STRUCT_H_
#define PARAMS_PASS_STRUCT_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class paramsPassStruct_t : public kaitai::kstruct {

public:
    class block_t;
    class structType_t;

    paramsPassStruct_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, paramsPassStruct_t* p__root = 0);

private:
    void _read();

public:
    ~paramsPassStruct_t();

    class block_t : public kaitai::kstruct {

    public:

        block_t(kaitai::kstream* p__io, paramsPassStruct_t* p__parent = 0, paramsPassStruct_t* p__root = 0);

    private:
        void _read();

    public:
        ~block_t();

    private:
        uint8_t m_foo;
        paramsPassStruct_t* m__root;
        paramsPassStruct_t* m__parent;

    public:
        uint8_t foo() const { return m_foo; }
        paramsPassStruct_t* _root() const { return m__root; }
        paramsPassStruct_t* _parent() const { return m__parent; }
    };

    class structType_t : public kaitai::kstruct {

    public:
        class baz_t;

        structType_t(kaitai::kstruct* p_foo, kaitai::kstream* p__io, paramsPassStruct_t* p__parent = 0, paramsPassStruct_t* p__root = 0);

    private:
        void _read();

    public:
        ~structType_t();

        class baz_t : public kaitai::kstruct {

        public:

            baz_t(kaitai::kstruct* p_foo, kaitai::kstream* p__io, paramsPassStruct_t::structType_t* p__parent = 0, paramsPassStruct_t* p__root = 0);

        private:
            void _read();

        public:
            ~baz_t();

        private:
            uint8_t m_qux;
            kaitai::kstruct* m_foo;
            paramsPassStruct_t* m__root;
            paramsPassStruct_t::structType_t* m__parent;

        public:
            uint8_t qux() const { return m_qux; }
            kaitai::kstruct* foo() const { return m_foo; }
            paramsPassStruct_t* _root() const { return m__root; }
            paramsPassStruct_t::structType_t* _parent() const { return m__parent; }
        };

    private:
        baz_t* m_bar;
        kaitai::kstruct* m_foo;
        paramsPassStruct_t* m__root;
        paramsPassStruct_t* m__parent;

    public:
        baz_t* bar() const { return m_bar; }
        kaitai::kstruct* foo() const { return m_foo; }
        paramsPassStruct_t* _root() const { return m__root; }
        paramsPassStruct_t* _parent() const { return m__parent; }
    };

private:
    block_t* m_first;
    structType_t* m_one;
    paramsPassStruct_t* m__root;
    kaitai::kstruct* m__parent;

public:
    block_t* first() const { return m_first; }
    structType_t* one() const { return m_one; }
    paramsPassStruct_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // PARAMS_PASS_STRUCT_H_
