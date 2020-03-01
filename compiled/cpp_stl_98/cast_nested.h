#ifndef CAST_NESTED_H_
#define CAST_NESTED_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <vector>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class castNested_t : public kaitai::kstruct {

public:
    class opcode_t;

    castNested_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, castNested_t* p__root = 0);

private:
    void _read();

public:
    ~castNested_t();

    class opcode_t : public kaitai::kstruct {

    public:
        class intval_t;
        class strval_t;

        opcode_t(kaitai::kstream* p__io, castNested_t* p__parent = 0, castNested_t* p__root = 0);

    private:
        void _read();

    public:
        ~opcode_t();

        class intval_t : public kaitai::kstruct {

        public:

            intval_t(kaitai::kstream* p__io, castNested_t::opcode_t* p__parent = 0, castNested_t* p__root = 0);

        private:
            void _read();

        public:
            ~intval_t();

        private:
            uint8_t m_value;
            castNested_t* m__root;
            castNested_t::opcode_t* m__parent;

        public:
            uint8_t value() const { return m_value; }
            castNested_t* _root() const { return m__root; }
            castNested_t::opcode_t* _parent() const { return m__parent; }
        };

        class strval_t : public kaitai::kstruct {

        public:

            strval_t(kaitai::kstream* p__io, castNested_t::opcode_t* p__parent = 0, castNested_t* p__root = 0);

        private:
            void _read();

        public:
            ~strval_t();

        private:
            std::string m_value;
            castNested_t* m__root;
            castNested_t::opcode_t* m__parent;

        public:
            std::string value() const { return m_value; }
            castNested_t* _root() const { return m__root; }
            castNested_t::opcode_t* _parent() const { return m__parent; }
        };

    private:
        uint8_t m_code;
        kaitai::kstruct* m_body;
        bool n_body;

    public:
        bool _is_null_body() { body(); return n_body; };

    private:
        castNested_t* m__root;
        castNested_t* m__parent;

    public:
        uint8_t code() const { return m_code; }
        kaitai::kstruct* body() const { return m_body; }
        castNested_t* _root() const { return m__root; }
        castNested_t* _parent() const { return m__parent; }
    };

private:
    bool f_opcodes_0_str;
    castNested_t::opcode_t::strval_t* m_opcodes_0_str;

public:
    castNested_t::opcode_t::strval_t* opcodes_0_str();

private:
    bool f_opcodes_0_str_value;
    std::string m_opcodes_0_str_value;

public:
    std::string opcodes_0_str_value();

private:
    bool f_opcodes_1_int;
    castNested_t::opcode_t::intval_t* m_opcodes_1_int;

public:
    castNested_t::opcode_t::intval_t* opcodes_1_int();

private:
    bool f_opcodes_1_int_value;
    uint8_t m_opcodes_1_int_value;

public:
    uint8_t opcodes_1_int_value();

private:
    std::vector<opcode_t*>* m_opcodes;
    castNested_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::vector<opcode_t*>* opcodes() const { return m_opcodes; }
    castNested_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // CAST_NESTED_H_
