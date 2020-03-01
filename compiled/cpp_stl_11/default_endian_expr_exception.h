#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <memory>
#include <vector>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class defaultEndianExprException_t : public kaitai::kstruct {

public:
    class doc_t;

    defaultEndianExprException_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, defaultEndianExprException_t* p__root = nullptr);

private:
    void _read();

public:
    ~defaultEndianExprException_t();

    class doc_t : public kaitai::kstruct {

    public:
        class mainObj_t;

        doc_t(kaitai::kstream* p__io, defaultEndianExprException_t* p__parent = nullptr, defaultEndianExprException_t* p__root = nullptr);

    private:
        void _read();

    public:
        ~doc_t();

        class mainObj_t : public kaitai::kstruct {

        public:

            mainObj_t(kaitai::kstream* p__io, defaultEndianExprException_t::doc_t* p__parent = nullptr, defaultEndianExprException_t* p__root = nullptr);

        private:
            int m__is_le;

        public:

        private:
            void _read();

        public:

        private:
            void _read_le();

        public:

        private:
            void _read_be();

        public:
            ~mainObj_t();

        private:
            uint32_t m_some_int;
            uint16_t m_some_int_be;
            uint16_t m_some_int_le;
            defaultEndianExprException_t* m__root;
            defaultEndianExprException_t::doc_t* m__parent;

        public:
            uint32_t some_int() const { return m_some_int; }
            uint16_t some_int_be() const { return m_some_int_be; }
            uint16_t some_int_le() const { return m_some_int_le; }
            defaultEndianExprException_t* _root() const { return m__root; }
            defaultEndianExprException_t::doc_t* _parent() const { return m__parent; }
        };

    private:
        std::string m_indicator;
        std::unique_ptr<mainObj_t> m_main;
        defaultEndianExprException_t* m__root;
        defaultEndianExprException_t* m__parent;

    public:
        std::string indicator() const { return m_indicator; }
        mainObj_t* main() const { return m_main.get(); }
        defaultEndianExprException_t* _root() const { return m__root; }
        defaultEndianExprException_t* _parent() const { return m__parent; }
    };

private:
    std::unique_ptr<std::vector<std::unique_ptr<doc_t>>> m_docs;
    defaultEndianExprException_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::vector<std::unique_ptr<doc_t>>* docs() const { return m_docs.get(); }
    defaultEndianExprException_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};
