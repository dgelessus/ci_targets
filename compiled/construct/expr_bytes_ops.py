from construct import *
from construct.lib import *

expr_bytes_ops = Struct(
	'one' / FixedSized(3, GreedyBytes),
	'two_last' / Computed(lambda this: this.two[-1]),
	'two_max' / Computed(lambda this: max(this.two)),
	'one_min' / Computed(lambda this: min(this.one)),
	'one_first' / Computed(lambda this: this.one[0]),
	'one_mid' / Computed(lambda this: this.one[1]),
	'two' / Computed(lambda this: b"\x41\x43\x4B"),
	'two_min' / Computed(lambda this: min(this.two)),
	'two_mid' / Computed(lambda this: this.two[1]),
	'one_size' / Computed(lambda this: len(this.one)),
	'one_last' / Computed(lambda this: this.one[-1]),
	'two_size' / Computed(lambda this: len(this.two)),
	'one_max' / Computed(lambda this: max(this.one)),
	'two_first' / Computed(lambda this: this.two[0]),
)

_schema = expr_bytes_ops
