// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import "github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"

type ValidFailEqBytes struct {
	Foo []byte
	_io *kaitai.Stream
	_root *ValidFailEqBytes
	_parent interface{}
}
func NewValidFailEqBytes() *ValidFailEqBytes {
	return &ValidFailEqBytes{
	}
}

func (this *ValidFailEqBytes) Read(io *kaitai.Stream, parent interface{}, root *ValidFailEqBytes) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp1, err := this._io.ReadBytes(int(2))
	if err != nil {
		return err
	}
	tmp1 = tmp1
	this.Foo = tmp1
	return err
}
