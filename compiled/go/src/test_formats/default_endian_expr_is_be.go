// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import (
	"github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"
	"bytes"
	"io"
)

type DefaultEndianExprIsBe struct {
	Docs []*DefaultEndianExprIsBe_Doc
	_io *kaitai.Stream
	_root *DefaultEndianExprIsBe
	_parent interface{}
}

func (this *DefaultEndianExprIsBe) Read(io *kaitai.Stream, parent interface{}, root *DefaultEndianExprIsBe) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	for {
		tmp1, err := this._io.EOF()
		if err != nil {
			return err
		}
		if tmp1 {
			break
		}
		tmp2 := new(DefaultEndianExprIsBe_Doc)
		err = tmp2.Read(this._io, this, this._root)
		if err != nil {
			return err
		}
		this.Docs = append(this.Docs, tmp2)
	}
	return err
}
type DefaultEndianExprIsBe_Doc struct {
	Indicator []byte
	Main *DefaultEndianExprIsBe_Doc_MainObj
	_io *kaitai.Stream
	_root *DefaultEndianExprIsBe
	_parent *DefaultEndianExprIsBe
}

func (this *DefaultEndianExprIsBe_Doc) Read(io *kaitai.Stream, parent *DefaultEndianExprIsBe, root *DefaultEndianExprIsBe) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp3, err := this._io.ReadBytes(int(2))
	if err != nil {
		return err
	}
	tmp3 = tmp3
	this.Indicator = tmp3
	tmp4 := new(DefaultEndianExprIsBe_Doc_MainObj)
	err = tmp4.Read(this._io, this, this._root)
	if err != nil {
		return err
	}
	this.Main = tmp4
	return err
}
type DefaultEndianExprIsBe_Doc_MainObj struct {
	SomeInt uint32
	SomeIntBe uint16
	SomeIntLe uint16
	_io *kaitai.Stream
	_root *DefaultEndianExprIsBe
	_parent *DefaultEndianExprIsBe_Doc
	_f_instInt bool
	instInt uint32
	_f_instSub bool
	instSub *DefaultEndianExprIsBe_Doc_MainObj_SubMainObj
	_is_le int
}

func (this *DefaultEndianExprIsBe_Doc_MainObj) Read(io *kaitai.Stream, parent *DefaultEndianExprIsBe_Doc, root *DefaultEndianExprIsBe) (err error) {
	this._io = io
	this._parent = parent
	this._root = root
	this._is_le = -1

	switch (true) {
	case bytes.Equal(this._parent.Indicator, []uint8{77, 77}):
		this._is_le = int(0)
	default:
		this._is_le = int(1)
	}

	switch this._is_le {
	case 0:
		err = this._read_be()
	case 1:
		err = this._read_le()
	default:
		err = kaitai.UndecidedEndiannessError{}
	}
	return err
}

func (this *DefaultEndianExprIsBe_Doc_MainObj) _read_le() (err error) {
	tmp5, err := this._io.ReadU4le()
	if err != nil {
		return err
	}
	this.SomeInt = uint32(tmp5)
	tmp6, err := this._io.ReadU2be()
	if err != nil {
		return err
	}
	this.SomeIntBe = uint16(tmp6)
	tmp7, err := this._io.ReadU2le()
	if err != nil {
		return err
	}
	this.SomeIntLe = uint16(tmp7)
	return err
}

func (this *DefaultEndianExprIsBe_Doc_MainObj) _read_be() (err error) {
	tmp8, err := this._io.ReadU4be()
	if err != nil {
		return err
	}
	this.SomeInt = uint32(tmp8)
	tmp9, err := this._io.ReadU2be()
	if err != nil {
		return err
	}
	this.SomeIntBe = uint16(tmp9)
	tmp10, err := this._io.ReadU2le()
	if err != nil {
		return err
	}
	this.SomeIntLe = uint16(tmp10)
	return err
}
func (this *DefaultEndianExprIsBe_Doc_MainObj) InstInt() (v uint32, err error) {
	if (this._f_instInt) {
		return this.instInt, nil
	}
	_pos, err := this._io.Pos()
	if err != nil {
		return 0, err
	}
	_, err = this._io.Seek(int64(2), io.SeekStart)
	if err != nil {
		return 0, err
	}
	switch this._is_le {
	case 0:
		tmp11, err := this._io.ReadU4be()
		if err != nil {
			return 0, err
		}
		this.instInt = tmp11
	case 1:
		tmp12, err := this._io.ReadU4le()
		if err != nil {
			return 0, err
		}
		this.instInt = tmp12
	default:
		err = kaitai.UndecidedEndiannessError{}
	}
	_, err = this._io.Seek(_pos, io.SeekStart)
	if err != nil {
		return 0, err
	}
	this._f_instInt = true
	return this.instInt, nil
}
func (this *DefaultEndianExprIsBe_Doc_MainObj) InstSub() (v *DefaultEndianExprIsBe_Doc_MainObj_SubMainObj, err error) {
	if (this._f_instSub) {
		return this.instSub, nil
	}
	_pos, err := this._io.Pos()
	if err != nil {
		return nil, err
	}
	_, err = this._io.Seek(int64(2), io.SeekStart)
	if err != nil {
		return nil, err
	}
	switch this._is_le {
	case 0:
		tmp13 := new(DefaultEndianExprIsBe_Doc_MainObj_SubMainObj)
		err = tmp13.Read(this._io, this, this._root)
		if err != nil {
			return nil, err
		}
		this.instSub = tmp13
	case 1:
		tmp14 := new(DefaultEndianExprIsBe_Doc_MainObj_SubMainObj)
		err = tmp14.Read(this._io, this, this._root)
		if err != nil {
			return nil, err
		}
		this.instSub = tmp14
	default:
		err = kaitai.UndecidedEndiannessError{}
	}
	_, err = this._io.Seek(_pos, io.SeekStart)
	if err != nil {
		return nil, err
	}
	this._f_instSub = true
	return this.instSub, nil
}
type DefaultEndianExprIsBe_Doc_MainObj_SubMainObj struct {
	Foo uint32
	_io *kaitai.Stream
	_root *DefaultEndianExprIsBe
	_parent *DefaultEndianExprIsBe_Doc_MainObj
	_is_le int
}

func (this *DefaultEndianExprIsBe_Doc_MainObj_SubMainObj) Read(io *kaitai.Stream, parent *DefaultEndianExprIsBe_Doc_MainObj, root *DefaultEndianExprIsBe) (err error) {
	this._io = io
	this._parent = parent
	this._root = root
	this._is_le = this._parent._is_le


	switch this._is_le {
	case 0:
		err = this._read_be()
	case 1:
		err = this._read_le()
	default:
		err = kaitai.UndecidedEndiannessError{}
	}
	return err
}

func (this *DefaultEndianExprIsBe_Doc_MainObj_SubMainObj) _read_le() (err error) {
	tmp15, err := this._io.ReadU4le()
	if err != nil {
		return err
	}
	this.Foo = uint32(tmp15)
	return err
}

func (this *DefaultEndianExprIsBe_Doc_MainObj_SubMainObj) _read_be() (err error) {
	tmp16, err := this._io.ReadU4be()
	if err != nil {
		return err
	}
	this.Foo = uint32(tmp16)
	return err
}
