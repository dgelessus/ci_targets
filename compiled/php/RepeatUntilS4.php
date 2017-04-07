<?php
// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

namespace Kaitai\Struct\Tests;

class RepeatUntilS4 extends \Kaitai\Struct\Struct {

    public function __construct(\Kaitai\Struct\Stream $io, \Kaitai\Struct\Struct $parent = null, \Kaitai\Struct\Tests\RepeatUntilS4 $root = null) {
        parent::__construct($io, $parent, $root);
        $this->_parse();
    }
    private function _parse() {
        $this->_m_entries = [];
        do {
            $_ = $this->_io->readS4le();
            $this->_m_entries[] = $_;
        } while (!($_ == -1));
        $this->_m_afterall = \Kaitai\Struct\Stream::bytesToStr($this->_io->readBytesTerm(0, false, true, true), "ASCII");
    }
    protected $_m_entries;
    protected $_m_afterall;
    public function entries() { return $this->_m_entries; }
    public function afterall() { return $this->_m_afterall; }
}
