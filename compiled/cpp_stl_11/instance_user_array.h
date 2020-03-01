#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <memory>
#include <vector>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class instanceUserArray_t : public kaitai::kstruct {

public:
    class entry_t;

    instanceUserArray_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, instanceUserArray_t* p__root = nullptr);

private:
    void _read();

public:
    ~instanceUserArray_t();

    class entry_t : public kaitai::kstruct {

    public:

        entry_t(kaitai::kstream* p__io, instanceUserArray_t* p__parent = nullptr, instanceUserArray_t* p__root = nullptr);

    private:
        void _read();

    public:
        ~entry_t();

    private:
        uint16_t m_word1;
        uint16_t m_word2;
        instanceUserArray_t* m__root;
        instanceUserArray_t* m__parent;

    public:
        uint16_t word1() const { return m_word1; }
        uint16_t word2() const { return m_word2; }
        instanceUserArray_t* _root() const { return m__root; }
        instanceUserArray_t* _parent() const { return m__parent; }
    };

private:
    bool f_user_entries;
    std::unique_ptr<std::vector<std::unique_ptr<entry_t>>> m_user_entries;
    bool n_user_entries;

public:
    bool _is_null_user_entries() { user_entries(); return n_user_entries; };

private:

public:
    std::vector<std::unique_ptr<entry_t>>* user_entries();

private:
    uint32_t m_ofs;
    uint32_t m_entry_size;
    uint32_t m_qty_entries;
    instanceUserArray_t* m__root;
    kaitai::kstruct* m__parent;
    std::unique_ptr<std::vector<std::string>> m__raw_user_entries;
    bool n__raw_user_entries;

public:
    bool _is_null__raw_user_entries() { _raw_user_entries(); return n__raw_user_entries; };

private:
    std::unique_ptr<std::vector<kaitai::kstream*>> m__io__raw_user_entries;

public:
    uint32_t ofs() const { return m_ofs; }
    uint32_t entry_size() const { return m_entry_size; }
    uint32_t qty_entries() const { return m_qty_entries; }
    instanceUserArray_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    std::vector<std::string>* _raw_user_entries() const { return m__raw_user_entries.get(); }
    std::vector<kaitai::kstream*>* _io__raw_user_entries() const { return m__io__raw_user_entries.get(); }
};
