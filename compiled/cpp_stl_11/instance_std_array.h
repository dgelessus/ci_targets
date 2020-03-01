#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <memory>
#include <vector>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class instanceStdArray_t : public kaitai::kstruct {

public:

    instanceStdArray_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, instanceStdArray_t* p__root = nullptr);

private:
    void _read();

public:
    ~instanceStdArray_t();

private:
    bool f_entries;
    std::unique_ptr<std::vector<std::string>> m_entries;

public:
    std::vector<std::string>* entries();

private:
    uint32_t m_ofs;
    uint32_t m_entry_size;
    uint32_t m_qty_entries;
    instanceStdArray_t* m__root;
    kaitai::kstruct* m__parent;

public:
    uint32_t ofs() const { return m_ofs; }
    uint32_t entry_size() const { return m_entry_size; }
    uint32_t qty_entries() const { return m_qty_entries; }
    instanceStdArray_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};
