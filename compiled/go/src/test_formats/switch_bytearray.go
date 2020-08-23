// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import (
	"github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"
	"bytes"
)

type SwitchBytearray struct {
	Opcodes []*SwitchBytearray_Opcode
	_io *kaitai.Stream
	_root *SwitchBytearray
	_parent interface{}
}
func NewSwitchBytearray() *SwitchBytearray {
	return &SwitchBytearray{
	}
}

func (this *SwitchBytearray) Read(io *kaitai.Stream, parent interface{}, root *SwitchBytearray) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	for i := 1;; i++ {
		tmp1, err := this._io.EOF()
		if err != nil {
			return err
		}
		if tmp1 {
			break
		}
		tmp2 := NewSwitchBytearray_Opcode()
		err = tmp2.Read(this._io, this, this._root)
		if err != nil {
			return err
		}
		this.Opcodes = append(this.Opcodes, tmp2)
	}
	return err
}
type SwitchBytearray_Opcode struct {
	Code []byte
	Body interface{}
	_io *kaitai.Stream
	_root *SwitchBytearray
	_parent *SwitchBytearray
}
func NewSwitchBytearray_Opcode() *SwitchBytearray_Opcode {
	return &SwitchBytearray_Opcode{
	}
}

func (this *SwitchBytearray_Opcode) Read(io *kaitai.Stream, parent *SwitchBytearray, root *SwitchBytearray) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp3, err := this._io.ReadBytes(int(1))
	if err != nil {
		return err
	}
	tmp3 = tmp3
	this.Code = tmp3
	switch (true) {
	case bytes.Equal(this.Code, []uint8{73}):
		tmp4 := NewSwitchBytearray_Opcode_Intval()
		err = tmp4.Read(this._io, this, this._root)
		if err != nil {
			return err
		}
		this.Body = tmp4
	case bytes.Equal(this.Code, []uint8{83}):
		tmp5 := NewSwitchBytearray_Opcode_Strval()
		err = tmp5.Read(this._io, this, this._root)
		if err != nil {
			return err
		}
		this.Body = tmp5
	}
	return err
}
type SwitchBytearray_Opcode_Intval struct {
	Value uint8
	_io *kaitai.Stream
	_root *SwitchBytearray
	_parent *SwitchBytearray_Opcode
}
func NewSwitchBytearray_Opcode_Intval() *SwitchBytearray_Opcode_Intval {
	return &SwitchBytearray_Opcode_Intval{
	}
}

func (this *SwitchBytearray_Opcode_Intval) Read(io *kaitai.Stream, parent *SwitchBytearray_Opcode, root *SwitchBytearray) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp6, err := this._io.ReadU1()
	if err != nil {
		return err
	}
	this.Value = tmp6
	return err
}
type SwitchBytearray_Opcode_Strval struct {
	Value string
	_io *kaitai.Stream
	_root *SwitchBytearray
	_parent *SwitchBytearray_Opcode
}
func NewSwitchBytearray_Opcode_Strval() *SwitchBytearray_Opcode_Strval {
	return &SwitchBytearray_Opcode_Strval{
	}
}

func (this *SwitchBytearray_Opcode_Strval) Read(io *kaitai.Stream, parent *SwitchBytearray_Opcode, root *SwitchBytearray) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp7, err := this._io.ReadBytesTerm(0, false, true, true)
	if err != nil {
		return err
	}
	this.Value = string(tmp7)
	return err
}
