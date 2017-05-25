# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

use strict;
use warnings;
use IO::KaitaiStruct 0.007_000;

########################################################################
package ExprMod;

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
    $self->{_root} = $_root || $self;;

    $self->_read();

    return $self;
}

sub _read {
    my ($self) = @_;

    $self->{int_u} = $self->{_io}->read_u4le();
    $self->{int_s} = $self->{_io}->read_s4le();
}

sub mod_pos_const {
    my ($self) = @_;
    return $self->{mod_pos_const} if ($self->{mod_pos_const});
    $self->{mod_pos_const} = (9837 % 13);
    return $self->{mod_pos_const};
}

sub mod_neg_const {
    my ($self) = @_;
    return $self->{mod_neg_const} if ($self->{mod_neg_const});
    $self->{mod_neg_const} = (-(9837) % 13);
    return $self->{mod_neg_const};
}

sub mod_pos_seq {
    my ($self) = @_;
    return $self->{mod_pos_seq} if ($self->{mod_pos_seq});
    $self->{mod_pos_seq} = ($self->int_u() % 13);
    return $self->{mod_pos_seq};
}

sub mod_neg_seq {
    my ($self) = @_;
    return $self->{mod_neg_seq} if ($self->{mod_neg_seq});
    $self->{mod_neg_seq} = ($self->int_s() % 13);
    return $self->{mod_neg_seq};
}

sub int_u {
    my ($self) = @_;
    return $self->{int_u};
}

sub int_s {
    my ($self) = @_;
    return $self->{int_s};
}

1;
