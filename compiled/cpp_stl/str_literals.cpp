// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "str_literals.h"

#include <iostream>
#include <fstream>

str_literals_t::str_literals_t(kaitai::kstream *p_io, kaitai::kstruct *p_parent, str_literals_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = this;
    f_octal_eatup2 = false;
    f_backslashes = false;
    f_octal_eatup = false;
    f_double_quotes = false;
    f_complex_str = false;
}

str_literals_t::~str_literals_t() {
}

std::string str_literals_t::octal_eatup2() {
    if (f_octal_eatup2)
        return m_octal_eatup2;
    m_octal_eatup2 = std::string("\0022");
    f_octal_eatup2 = true;
    return m_octal_eatup2;
}

std::string str_literals_t::backslashes() {
    if (f_backslashes)
        return m_backslashes;
    m_backslashes = std::string("\\\\\\");
    f_backslashes = true;
    return m_backslashes;
}

std::string str_literals_t::octal_eatup() {
    if (f_octal_eatup)
        return m_octal_eatup;
    m_octal_eatup = std::string("\00022", 3);
    f_octal_eatup = true;
    return m_octal_eatup;
}

std::string str_literals_t::double_quotes() {
    if (f_double_quotes)
        return m_double_quotes;
    m_double_quotes = std::string("\"\"\"");
    f_double_quotes = true;
    return m_double_quotes;
}

std::string str_literals_t::complex_str() {
    if (f_complex_str)
        return m_complex_str;
    m_complex_str = std::string("\000\001\002\a\b\n\r\t\v\f\033=\a\n$\u263b", 18);
    f_complex_str = true;
    return m_complex_str;
}
