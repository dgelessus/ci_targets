// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import "github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"

type ParamsPassUsertype struct {
	First *ParamsPassUsertype_Block
	One *ParamsPassUsertype_ParamType
	_io *kaitai.Stream
	_root *ParamsPassUsertype
	_parent interface{}
}
func NewParamsPassUsertype() *ParamsPassUsertype {
	return &ParamsPassUsertype{
	}
}

func (this *ParamsPassUsertype) Read(io *kaitai.Stream, parent interface{}, root *ParamsPassUsertype) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp1 := NewParamsPassUsertype_Block()
	err = tmp1.Read(this._io, this, this._root)
	if err != nil {
		return err
	}
	this.First = tmp1
	tmp2 := NewParamsPassUsertype_ParamType(this.First)
	err = tmp2.Read(this._io, this, this._root)
	if err != nil {
		return err
	}
	this.One = tmp2
	return err
}
type ParamsPassUsertype_Block struct {
	Foo uint8
	_io *kaitai.Stream
	_root *ParamsPassUsertype
	_parent *ParamsPassUsertype
}
func NewParamsPassUsertype_Block() *ParamsPassUsertype_Block {
	return &ParamsPassUsertype_Block{
	}
}

func (this *ParamsPassUsertype_Block) Read(io *kaitai.Stream, parent *ParamsPassUsertype, root *ParamsPassUsertype) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp3, err := this._io.ReadU1()
	if err != nil {
		return err
	}
	this.Foo = tmp3
	return err
}
type ParamsPassUsertype_ParamType struct {
	Buf []byte
	Foo *ParamsPassUsertype_Block
	_io *kaitai.Stream
	_root *ParamsPassUsertype
	_parent *ParamsPassUsertype
}
func NewParamsPassUsertype_ParamType(foo *ParamsPassUsertype_Block) *ParamsPassUsertype_ParamType {
	return &ParamsPassUsertype_ParamType{
		Foo: foo,
	}
}

func (this *ParamsPassUsertype_ParamType) Read(io *kaitai.Stream, parent *ParamsPassUsertype, root *ParamsPassUsertype) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp4, err := this._io.ReadBytes(int(this.Foo.Foo))
	if err != nil {
		return err
	}
	tmp4 = tmp4
	this.Buf = tmp4
	return err
}
