#ifndef REPEAT_N_STRZ_DOUBLE_H_
#define REPEAT_N_STRZ_DOUBLE_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <vector>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class repeatNStrzDouble_t : public kaitai::kstruct {

public:

    repeatNStrzDouble_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, repeatNStrzDouble_t* p__root = 0);

private:
    void _read();

public:
    ~repeatNStrzDouble_t();

private:
    uint32_t m_qty;
    std::vector<std::string>* m_lines1;
    std::vector<std::string>* m_lines2;
    repeatNStrzDouble_t* m__root;
    kaitai::kstruct* m__parent;

public:
    uint32_t qty() const { return m_qty; }
    std::vector<std::string>* lines1() const { return m_lines1; }
    std::vector<std::string>* lines2() const { return m_lines2; }
    repeatNStrzDouble_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // REPEAT_N_STRZ_DOUBLE_H_
