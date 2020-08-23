// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import "github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"

type DebugArrayUser struct {
	OneCat *DebugArrayUser_Cat
	ArrayOfCats []*DebugArrayUser_Cat
	_io *kaitai.Stream
	_root *DebugArrayUser
	_parent interface{}
}
func NewDebugArrayUser() *DebugArrayUser {
	return &DebugArrayUser{
	}
}

func (this *DebugArrayUser) Read(io *kaitai.Stream, parent interface{}, root *DebugArrayUser) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp1 := NewDebugArrayUser_Cat()
	err = tmp1.Read(this._io, this, this._root)
	if err != nil {
		return err
	}
	this.OneCat = tmp1
	this.ArrayOfCats = make([]*DebugArrayUser_Cat, 3)
	for i := range this.ArrayOfCats {
		tmp2 := NewDebugArrayUser_Cat()
		err = tmp2.Read(this._io, this, this._root)
		if err != nil {
			return err
		}
		this.ArrayOfCats[i] = tmp2
	}
	return err
}
type DebugArrayUser_Cat struct {
	Meow uint8
	_io *kaitai.Stream
	_root *DebugArrayUser
	_parent *DebugArrayUser
}
func NewDebugArrayUser_Cat() *DebugArrayUser_Cat {
	return &DebugArrayUser_Cat{
	}
}

func (this *DebugArrayUser_Cat) Read(io *kaitai.Stream, parent *DebugArrayUser, root *DebugArrayUser) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp3, err := this._io.ReadU1()
	if err != nil {
		return err
	}
	this.Meow = tmp3
	return err
}
