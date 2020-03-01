#ifndef IO_LOCAL_VAR_H_
#define IO_LOCAL_VAR_H_

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif

class ioLocalVar_t : public kaitai::kstruct {

public:
    class dummy_t;

    ioLocalVar_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = 0, ioLocalVar_t* p__root = 0);

private:
    void _read();

public:
    ~ioLocalVar_t();

    class dummy_t : public kaitai::kstruct {

    public:

        dummy_t(kaitai::kstream* p__io, ioLocalVar_t* p__parent = 0, ioLocalVar_t* p__root = 0);

    private:
        void _read();

    public:
        ~dummy_t();

    private:
        ioLocalVar_t* m__root;
        ioLocalVar_t* m__parent;

    public:
        ioLocalVar_t* _root() const { return m__root; }
        ioLocalVar_t* _parent() const { return m__parent; }
    };

private:
    bool f_mess_up;
    dummy_t* m_mess_up;
    bool n_mess_up;

public:
    bool _is_null_mess_up() { mess_up(); return n_mess_up; };

private:

public:
    dummy_t* mess_up();

private:
    std::string m_skip;
    uint8_t m_always_null;
    bool n_always_null;

public:
    bool _is_null_always_null() { always_null(); return n_always_null; };

private:
    uint8_t m_followup;
    ioLocalVar_t* m__root;
    kaitai::kstruct* m__parent;
    std::string m__raw_mess_up;
    kaitai::kstream* m__io__raw_mess_up;

public:
    std::string skip() const { return m_skip; }
    uint8_t always_null() const { return m_always_null; }
    uint8_t followup() const { return m_followup; }
    ioLocalVar_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
    std::string _raw_mess_up() const { return m__raw_mess_up; }
    kaitai::kstream* _io__raw_mess_up() const { return m__io__raw_mess_up; }
};

#endif  // IO_LOCAL_VAR_H_
