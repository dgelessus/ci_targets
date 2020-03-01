#ifndef BYTES_PAD_TERM_H_
#define BYTES_PAD_TERM_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class bytesPadTerm_t : public kaitai::kstruct {

public:

    bytesPadTerm_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, bytesPadTerm_t* p__root = 0);

private:
    void _read();

public:
    ~bytesPadTerm_t();

private:
    std::string m_str_pad;
    std::string m_str_term;
    std::string m_str_term_and_pad;
    std::string m_str_term_include;
    bytesPadTerm_t* m__root;
    kaitai::kstruct* m__parent;

public:
    std::string str_pad() const { return m_str_pad; }
    std::string str_term() const { return m_str_term; }
    std::string str_term_and_pad() const { return m_str_term_and_pad; }
    std::string str_term_include() const { return m_str_term_include; }
    bytesPadTerm_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};

#endif  // BYTES_PAD_TERM_H_
