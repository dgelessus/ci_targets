// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import "github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"

type IfValues struct {
	Codes []*IfValues_Code
	_io *kaitai.Stream
	_root *IfValues
	_parent interface{}
}
func NewIfValues() *IfValues {
	return &IfValues{
	}
}

func (this *IfValues) Read(io *kaitai.Stream, parent interface{}, root *IfValues) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	this.Codes = make([]*IfValues_Code, 3)
	for i := range this.Codes {
		tmp1 := NewIfValues_Code()
		err = tmp1.Read(this._io, this, this._root)
		if err != nil {
			return err
		}
		this.Codes[i] = tmp1
	}
	return err
}
type IfValues_Code struct {
	Opcode uint8
	_io *kaitai.Stream
	_root *IfValues
	_parent *IfValues
	_f_halfOpcode bool
	halfOpcode int
}
func NewIfValues_Code() *IfValues_Code {
	return &IfValues_Code{
	}
}

func (this *IfValues_Code) Read(io *kaitai.Stream, parent *IfValues, root *IfValues) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp2, err := this._io.ReadU1()
	if err != nil {
		return err
	}
	this.Opcode = tmp2
	return err
}
func (this *IfValues_Code) HalfOpcode() (v int, err error) {
	if (this._f_halfOpcode) {
		return this.halfOpcode, nil
	}
	tmp3 := this.Opcode % 2
	if tmp3 < 0 {
		tmp3 += 2
	}
	if (tmp3 == 0) {
		this.halfOpcode = int((this.Opcode / 2))
	}
	this._f_halfOpcode = true
	return this.halfOpcode, nil
}
