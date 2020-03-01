#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <memory>
#include <vector>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class ifValues_t : public kaitai::kstruct {

public:
    class code_t;

    ifValues_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, ifValues_t* p__root = nullptr);

private:
    void _read();

public:
    ~ifValues_t();

    class code_t : public kaitai::kstruct {

    public:

        code_t(kaitai::kstream* p__io, ifValues_t* p__parent = nullptr, ifValues_t* p__root = nullptr);

    private:
        void _read();

    public:
        ~code_t();

    private:
        bool f_half_opcode;
        int32_t m_half_opcode;
        bool n_half_opcode;

    public:
        bool _is_null_half_opcode() { half_opcode(); return n_half_opcode; };

    private:

    public:
        int32_t half_opcode();

    private:
        uint8_t m_opcode;
        ifValues_t* m__root;
        ifValues_t* m__parent;

    public:
        uint8_t opcode() const { return m_opcode; }
        ifValues_t* _root() const { return m__root; }
        ifValues_t* _parent() const { return m__parent; }
    };

private:
    std::unique_ptr<std::vector<std::unique_ptr<code_t>>> m_codes;
    ifValues_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::vector<std::unique_ptr<code_t>>* codes() const { return m_codes.get(); }
    ifValues_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};
