// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

package test_formats

import (
	"github.com/kaitai-io/kaitai_struct_go_runtime/kaitai"
	"io"
)


/**
 * One-liner description of a type.
 */
type Docstrings struct {
	One uint8
	_io *kaitai.Stream
	_root *Docstrings
	_parent interface{}
	_f_two bool
	two uint8
	_f_three bool
	three int8
}
func NewDocstrings() *Docstrings {
	return &Docstrings{
	}
}

func (this *Docstrings) Read(io *kaitai.Stream, parent interface{}, root *Docstrings) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	tmp1, err := this._io.ReadU1()
	if err != nil {
		return err
	}
	this.One = tmp1
	return err
}

/**
 * Another description for parse instance "two"
 */
func (this *Docstrings) Two() (v uint8, err error) {
	if (this._f_two) {
		return this.two, nil
	}
	_pos, err := this._io.Pos()
	if err != nil {
		return 0, err
	}
	_, err = this._io.Seek(int64(0), io.SeekStart)
	if err != nil {
		return 0, err
	}
	tmp2, err := this._io.ReadU1()
	if err != nil {
		return 0, err
	}
	this.two = tmp2
	_, err = this._io.Seek(_pos, io.SeekStart)
	if err != nil {
		return 0, err
	}
	this._f_two = true
	this._f_two = true
	return this.two, nil
}

/**
 * And yet another one for value instance "three"
 */
func (this *Docstrings) Three() (v int8, err error) {
	if (this._f_three) {
		return this.three, nil
	}
	this.three = int8(66)
	this._f_three = true
	return this.three, nil
}

/**
 * A pretty verbose description for sequence attribute "one"
 */

/**
 * This subtype is never used, yet has a very long description
 * that spans multiple lines. It should be formatted accordingly,
 * even in languages that have single-line comments for
 * docstrings. Actually, there's even a MarkDown-style list here
 * with several bullets:
 * 
 * * one
 * * two
 * * three
 * 
 * And the text continues after that. Here's a MarkDown-style link:
 * [woohoo](http://example.com) - one day it will be supported as
 * well.
 */
type Docstrings_ComplexSubtype struct {
	_io *kaitai.Stream
	_root *Docstrings
	_parent interface{}
}
func NewDocstrings_ComplexSubtype() *Docstrings_ComplexSubtype {
	return &Docstrings_ComplexSubtype{
	}
}

func (this *Docstrings_ComplexSubtype) Read(io *kaitai.Stream, parent interface{}, root *Docstrings) (err error) {
	this._io = io
	this._parent = parent
	this._root = root

	return err
}
