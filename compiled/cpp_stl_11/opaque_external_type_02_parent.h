#pragma once

// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "kaitai/kaitaistruct.h"
#include <stdint.h>
#include <memory>

#if KAITAI_STRUCT_VERSION < 9000L
#error "Incompatible Kaitai Struct C++/STL API: version 0.9 or later is required"
#endif
class opaqueExternalType02Child_t;

class opaqueExternalType02Parent_t : public kaitai::kstruct {

public:
    class parentObj_t;

    opaqueExternalType02Parent_t(kaitai::kstream* p__io, kaitai::kstruct* p__parent = nullptr, opaqueExternalType02Parent_t* p__root = nullptr);

private:
    void _read();

public:
    ~opaqueExternalType02Parent_t();

    class parentObj_t : public kaitai::kstruct {

    public:

        parentObj_t(kaitai::kstream* p__io, opaqueExternalType02Parent_t* p__parent = nullptr, opaqueExternalType02Parent_t* p__root = nullptr);

    private:
        void _read();

    public:
        ~parentObj_t();

    private:
        std::unique_ptr<opaqueExternalType02Child_t> m_child;
        opaqueExternalType02Parent_t* m__root;
        opaqueExternalType02Parent_t* m__parent;

    public:
        opaqueExternalType02Child_t* child() const { return m_child.get(); }
        opaqueExternalType02Parent_t* _root() const { return m__root; }
        opaqueExternalType02Parent_t* _parent() const { return m__parent; }
    };

private:
    std::unique_ptr<parentObj_t> m_parent;
    opaqueExternalType02Parent_t* m__root;
    kaitai::kstruct* m__parent;

public:
    parentObj_t* parent() const { return m_parent.get(); }
    opaqueExternalType02Parent_t* _root() const { return m__root; }
    kaitai::kstruct* _parent() const { return m__parent; }
};
