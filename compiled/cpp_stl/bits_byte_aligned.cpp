// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "bits_byte_aligned.h"

#include <iostream>
#include <fstream>

bits_byte_aligned_t::bits_byte_aligned_t(kaitai::kstream *p_io, kaitai::kstruct *p_parent, bits_byte_aligned_t *p_root) : kaitai::kstruct(p_io) {
    m__parent = p_parent;
    m__root = this;
    m_one = m__io->read_bits_int(6);
    m__io->align_to_byte();
    m_byte_1 = m__io->read_u1();
    m_two = m__io->read_bits_int(3);
    m_three = m__io->read_bits_int(1);
    m__io->align_to_byte();
    m_byte_2 = m__io->read_u1();
    m_four = m__io->read_bits_int(14);
    m__io->align_to_byte();
    m_byte_3 = m__io->read_bytes(1);
    m_full_byte = m__io->read_bits_int(8);
    m__io->align_to_byte();
    m_byte_4 = m__io->read_u1();
}

bits_byte_aligned_t::~bits_byte_aligned_t() {
}
