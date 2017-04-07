# This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

use strict;
use warnings;
use IO::KaitaiStruct 0.007_000;
use Compress::Zlib;
use Encode;
use List::Util;

########################################################################
package NavParent;

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

    $self->{header} = NavParent::HeaderObj->new($self->{_io}, $self, $self->{_root});
    $self->{index} = NavParent::IndexObj->new($self->{_io}, $self, $self->{_root});

    return $self;
}

sub header {
    my ($self) = @_;
    return $self->{header};
}

sub index {
    my ($self) = @_;
    return $self->{index};
}

########################################################################
package NavParent::HeaderObj;

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

    $self->{qty_entries} = $self->{_io}->read_u4le();
    $self->{filename_len} = $self->{_io}->read_u4le();

    return $self;
}

sub qty_entries {
    my ($self) = @_;
    return $self->{qty_entries};
}

sub filename_len {
    my ($self) = @_;
    return $self->{filename_len};
}

########################################################################
package NavParent::IndexObj;

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

    $self->{magic} = $self->{_io}->read_bytes(4);
    $self->{entries} = ();
    my $n_entries = $self->_parent()->header()->qty_entries();
    for (my $i = 0; $i < $n_entries; $i++) {
        $self->{entries}[$i] = NavParent::Entry->new($self->{_io}, $self, $self->{_root});
    }

    return $self;
}

sub magic {
    my ($self) = @_;
    return $self->{magic};
}

sub entries {
    my ($self) = @_;
    return $self->{entries};
}

########################################################################
package NavParent::Entry;

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

    $self->{filename} = Encode::decode("UTF-8", $self->{_io}->read_bytes($self->_parent()->_parent()->header()->filename_len()));

    return $self;
}

sub filename {
    my ($self) = @_;
    return $self->{filename};
}

1;
