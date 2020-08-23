// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import "github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"

type ParamsPassArrayStruct struct {
	One *ParamsPassArrayStruct_Foo
	Two *ParamsPassArrayStruct_Bar
	PassStructs *ParamsPassArrayStruct_StructType
	_io *kaitai.Stream
	_root *ParamsPassArrayStruct
	_parent interface{}
	_f_oneTwo bool
	oneTwo []interface{}
}
func NewParamsPassArrayStruct() *ParamsPassArrayStruct {
	return &ParamsPassArrayStruct{
	}
}

func (this *ParamsPassArrayStruct) Read(io *kaitai.Stream, parent interface{}, root *ParamsPassArrayStruct) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp1 := NewParamsPassArrayStruct_Foo()
	err = tmp1.Read(this._io, this, this._root)
	if err != nil {
		return err
	}
	this.One = tmp1
	tmp2 := NewParamsPassArrayStruct_Bar()
	err = tmp2.Read(this._io, this, this._root)
	if err != nil {
		return err
	}
	this.Two = tmp2
	tmp4, err := this.OneTwo()
	if err != nil {
		return err
	}
	tmp3 := NewParamsPassArrayStruct_StructType(tmp4)
	err = tmp3.Read(this._io, this, this._root)
	if err != nil {
		return err
	}
	this.PassStructs = tmp3
	return err
}
func (this *ParamsPassArrayStruct) OneTwo() (v []interface{}, err error) {
	if (this._f_oneTwo) {
		return this.oneTwo, nil
	}
	this.oneTwo = []interface{}([]interface{}{this.One, this.Two})
	this._f_oneTwo = true
	return this.oneTwo, nil
}
type ParamsPassArrayStruct_Foo struct {
	F uint8
	_io *kaitai.Stream
	_root *ParamsPassArrayStruct
	_parent *ParamsPassArrayStruct
}
func NewParamsPassArrayStruct_Foo() *ParamsPassArrayStruct_Foo {
	return &ParamsPassArrayStruct_Foo{
	}
}

func (this *ParamsPassArrayStruct_Foo) Read(io *kaitai.Stream, parent *ParamsPassArrayStruct, root *ParamsPassArrayStruct) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp5, err := this._io.ReadU1()
	if err != nil {
		return err
	}
	this.F = tmp5
	return err
}
type ParamsPassArrayStruct_Bar struct {
	B uint8
	_io *kaitai.Stream
	_root *ParamsPassArrayStruct
	_parent *ParamsPassArrayStruct
}
func NewParamsPassArrayStruct_Bar() *ParamsPassArrayStruct_Bar {
	return &ParamsPassArrayStruct_Bar{
	}
}

func (this *ParamsPassArrayStruct_Bar) Read(io *kaitai.Stream, parent *ParamsPassArrayStruct, root *ParamsPassArrayStruct) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp6, err := this._io.ReadU1()
	if err != nil {
		return err
	}
	this.B = tmp6
	return err
}
type ParamsPassArrayStruct_StructType struct {
	Structs []interface{}
	_io *kaitai.Stream
	_root *ParamsPassArrayStruct
	_parent *ParamsPassArrayStruct
}
func NewParamsPassArrayStruct_StructType(structs []interface{}) *ParamsPassArrayStruct_StructType {
	return &ParamsPassArrayStruct_StructType{
		Structs: structs,
	}
}

func (this *ParamsPassArrayStruct_StructType) Read(io *kaitai.Stream, parent *ParamsPassArrayStruct, root *ParamsPassArrayStruct) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	return err
}
