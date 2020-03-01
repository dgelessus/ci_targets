#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <memory>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class nestedTypes_t : public kaitai::kstruct {

public:
    class subtypeA_t;
    class subtypeB_t;

    nestedTypes_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, nestedTypes_t* p__root = nullptr);

private:
    void _read();

public:
    ~nestedTypes_t();

    class subtypeA_t : public kaitai::kstruct {

    public:
        class subtypeC_t;

        subtypeA_t(kaitai::kstream* p__io, nestedTypes_t* p__parent = nullptr, nestedTypes_t* p__root = nullptr);

    private:
        void _read();

    public:
        ~subtypeA_t();

        class subtypeC_t : public kaitai::kstruct {

        public:

            subtypeC_t(kaitai::kstream* p__io, nestedTypes_t::subtypeA_t* p__parent = nullptr, nestedTypes_t* p__root = nullptr);

        private:
            void _read();

        public:
            ~subtypeC_t();

        private:
            int8_t m_value_c;
            nestedTypes_t* m__root;
            nestedTypes_t::subtypeA_t* m__parent;

        public:
            int8_t value_c() const { return m_value_c; }
            nestedTypes_t* _root() const { return m__root; }
            nestedTypes_t::subtypeA_t* _parent() const { return m__parent; }
        };

    private:
        std::unique_ptr<subtypeB_t> m_typed_at_root;
        std::unique_ptr<subtypeC_t> m_typed_here;
        nestedTypes_t* m__root;
        nestedTypes_t* m__parent;

    public:
        subtypeB_t* typed_at_root() const { return m_typed_at_root.get(); }
        subtypeC_t* typed_here() const { return m_typed_here.get(); }
        nestedTypes_t* _root() const { return m__root; }
        nestedTypes_t* _parent() const { return m__parent; }
    };

    class subtypeB_t : public kaitai::kstruct {

    public:

        subtypeB_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, nestedTypes_t* p__root = nullptr);

    private:
        void _read();

    public:
        ~subtypeB_t();

    private:
        int8_t m_value_b;
        nestedTypes_t* m__root;
        kaitai::kstruct* m__parent;

    public:
        int8_t value_b() const { return m_value_b; }
        nestedTypes_t* _root() const { return m__root; }
        kaitai::kstruct* _parent() const { return m__parent; }
    };

private:
    std::unique_ptr<subtypeA_t> m_one;
    std::unique_ptr<subtypeB_t> m_two;
    nestedTypes_t* m__root;
    kaitai::kstruct* m__parent;

public:
    subtypeA_t* one() const { return m_one.get(); }
    subtypeB_t* two() const { return m_two.get(); }
    nestedTypes_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};
