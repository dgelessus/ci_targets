<?php
// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

namespace Kaitai\Struct\Tests;

class Debug0 extends \Kaitai\Struct\Struct {

    public function __construct(\Kaitai\Struct\Stream $io, \Kaitai\Struct\Struct $parent = null, \Kaitai\Struct\Tests\Debug0 $root = null) {
        parent::__construct($io, $parent, $root);
        $this->_parse();
    }
    private function _parse() {
        $this->_m_one = $this->_io->readU1();
        $this->_m_arrayOfInts = [];
        $n = 3;
        for ($i = 0; $i < $n; $i++) {
            $this->_m_arrayOfInts[] = $this->_io->readU1();
        }
        $this->_m__unnamed2 = $this->_io->readU1();
    }
    protected $_m_one;
    protected $_m_arrayOfInts;
    protected $_m__unnamed2;
    public function one() { return $this->_m_one; }
    public function arrayOfInts() { return $this->_m_arrayOfInts; }
    public function _unnamed2() { return $this->_m__unnamed2; }
}
