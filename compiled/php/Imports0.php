<?php
// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

namespace Kaitai\Struct\Tests;

class Imports0 extends \Kaitai\Struct\Struct {
    public function __construct(\Kaitai\Struct\Stream $io, \Kaitai\Struct\Struct $parent = null, \Kaitai\Struct\Tests\Imports0 $root = null) {
        parent::__construct($io, $parent, $root);
        $this->_read();
    }

    private function _read() {
        $this->_m_two = $this->_io->readU1();
        $this->_m_hw = new \Kaitai\Struct\Tests\HelloWorld($this->_io);
    }
    protected $_m_hwOne;
    public function hwOne() {
        if ($this->_m_hwOne !== null)
            return $this->_m_hwOne;
        $this->_m_hwOne = $this->hw()->one();
        return $this->_m_hwOne;
    }
    protected $_m_two;
    protected $_m_hw;
    public function two() { return $this->_m_two; }
    public function hw() { return $this->_m_hw; }
}
