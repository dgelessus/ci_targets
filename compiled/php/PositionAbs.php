<?php
// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

namespace Kaitai\Struct\Tests;

class PositionAbs extends \Kaitai\Struct\Struct {

    public function __construct(\Kaitai\Struct\Stream $io, \Kaitai\Struct\Struct $parent = null, \Kaitai\Struct\Tests\PositionAbs $root = null) {
        parent::__construct($io, $parent, $root);
        $this->_parse();
    }
    private function _parse() {
        $this->_m_indexOffset = $this->_io->readU4le();
    }
    protected $_m_index;
    public function index() {
        if ($this->_m_index !== null)
            return $this->_m_index;
        $_pos = $this->_io->pos();
        $this->_io->seek($this->indexOffset());
        $this->_m_index = new \Kaitai\Struct\Tests\PositionAbs\IndexObj($this->_io, $this, $this->_root);
        $this->_io->seek($_pos);
        return $this->_m_index;
    }
    protected $_m_indexOffset;
    public function indexOffset() { return $this->_m_indexOffset; }
}

namespace Kaitai\Struct\Tests\PositionAbs;

class IndexObj extends \Kaitai\Struct\Struct {

    public function __construct(\Kaitai\Struct\Stream $io, \Kaitai\Struct\Tests\PositionAbs $parent = null, \Kaitai\Struct\Tests\PositionAbs $root = null) {
        parent::__construct($io, $parent, $root);
        $this->_parse();
    }
    private function _parse() {
        $this->_m_entry = \Kaitai\Struct\Stream::bytesToStr($this->_io->readBytesTerm(0, false, true, true), "UTF-8");
    }
    protected $_m_entry;
    public function entry() { return $this->_m_entry; }
}
