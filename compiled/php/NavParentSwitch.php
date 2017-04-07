<?php
// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

namespace Kaitai\Struct\Tests;

class NavParentSwitch extends \Kaitai\Struct\Struct {

    public function __construct(\Kaitai\Struct\Stream $io, \Kaitai\Struct\Struct $parent = null, \Kaitai\Struct\Tests\NavParentSwitch $root = null) {
        parent::__construct($io, $parent, $root);
        $this->_parse();
    }
    private function _parse() {
        $this->_m_category = $this->_io->readU1();
        switch ($this->category()) {
            case 1:
                $this->_m_content = new \Kaitai\Struct\Tests\NavParentSwitch\Element1($this->_io, $this, $this->_root);
                break;
        }
    }
    protected $_m_category;
    protected $_m_content;
    public function category() { return $this->_m_category; }
    public function content() { return $this->_m_content; }
}

namespace Kaitai\Struct\Tests\NavParentSwitch;

class Element1 extends \Kaitai\Struct\Struct {

    public function __construct(\Kaitai\Struct\Stream $io, \Kaitai\Struct\Tests\NavParentSwitch $parent = null, \Kaitai\Struct\Tests\NavParentSwitch $root = null) {
        parent::__construct($io, $parent, $root);
        $this->_parse();
    }
    private function _parse() {
        $this->_m_foo = $this->_io->readU1();
        $this->_m_subelement = new \Kaitai\Struct\Tests\NavParentSwitch\Subelement1($this->_io, $this, $this->_root);
    }
    protected $_m_foo;
    protected $_m_subelement;
    public function foo() { return $this->_m_foo; }
    public function subelement() { return $this->_m_subelement; }
}

namespace Kaitai\Struct\Tests\NavParentSwitch;

class Subelement1 extends \Kaitai\Struct\Struct {

    public function __construct(\Kaitai\Struct\Stream $io, \Kaitai\Struct\Tests\NavParentSwitch\Element1 $parent = null, \Kaitai\Struct\Tests\NavParentSwitch $root = null) {
        parent::__construct($io, $parent, $root);
        $this->_parse();
    }
    private function _parse() {
        if ($this->_parent()->foo() == 66) {
            $this->_m_bar = $this->_io->readU1();
        }
    }
    protected $_m_bar;
    public function bar() { return $this->_m_bar; }
}
