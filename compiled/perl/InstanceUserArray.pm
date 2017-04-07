# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

use strict;
use warnings;
use IO::KaitaiStruct 0.007_000;
use Compress::Zlib;
use Encode;
use List::Util;

########################################################################
package InstanceUserArray;

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

    $self->{ofs} = $self->{_io}->read_u4le();
    $self->{entry_size} = $self->{_io}->read_u4le();
    $self->{qty_entries} = $self->{_io}->read_u4le();

    return $self;
}

sub user_entries {
    my ($self) = @_;
    return $self->{user_entries} if ($self->{user_entries});
    if ($self->ofs() > 0) {
        my $_pos = $self->{_io}->pos();
        $self->{_io}->seek($self->ofs());
        $self->{_raw_user_entries} = ();
        $self->{user_entries} = ();
        my $n_user_entries = $self->qty_entries();
        for (my $i = 0; $i < $n_user_entries; $i++) {
            $self->{_raw_user_entries}[$i] = $self->{_io}->read_bytes($self->entry_size());
            my $io__raw_user_entries = IO::KaitaiStruct::Stream->new($self->{_raw_user_entries}[$i]);
            $self->{user_entries}[$i] = InstanceUserArray::Entry->new($io__raw_user_entries, $self, $self->{_root});
        }
        $self->{_io}->seek($_pos);
    }
    return $self->{user_entries};
}

sub ofs {
    my ($self) = @_;
    return $self->{ofs};
}

sub entry_size {
    my ($self) = @_;
    return $self->{entry_size};
}

sub qty_entries {
    my ($self) = @_;
    return $self->{qty_entries};
}

sub _raw_user_entries {
    my ($self) = @_;
    return $self->{_raw_user_entries};
}

########################################################################
package InstanceUserArray::Entry;

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

    $self->{word1} = $self->{_io}->read_u2le();
    $self->{word2} = $self->{_io}->read_u2le();

    return $self;
}

sub word1 {
    my ($self) = @_;
    return $self->{word1};
}

sub word2 {
    my ($self) = @_;
    return $self->{word2};
}

1;
