# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

use strict;
use warnings;
use IO::KaitaiStruct 0.007_000;
use Compress::Zlib;
use Encode;
use List::Util;

########################################################################
package OptionalId;

our @ISA = 'IO::KaitaiStruct::Struct';

sub from_file {
    my ($class, $filename) = @_;
    my $fd;

    open($fd, '<', $filename) or return undef;
    binmode($fd);
    return new($class, IO::KaitaiStruct::Stream->new($fd));
}

sub new {
    my ($class, $_io, $_parent, $_root) = @_;
    my $self = IO::KaitaiStruct::Struct->new($_io);

    bless $self, $class;
    $self->{_parent} = $_parent;
    $self->{_root} = $_root || $self;

    $self->{_unnamed0} = $self->{_io}->read_u1();
    $self->{_unnamed1} = $self->{_io}->read_u1();
    $self->{_unnamed2} = $self->{_io}->read_bytes(5);

    return $self;
}

sub _unnamed0 {
    my ($self) = @_;
    return $self->{_unnamed0};
}

sub _unnamed1 {
    my ($self) = @_;
    return $self->{_unnamed1};
}

sub _unnamed2 {
    my ($self) = @_;
    return $self->{_unnamed2};
}

1;
