from construct import *
from construct.lib import *

expr_2__mod_str = Struct(
	'len_orig' / Int16ul,
	'str' / FixedSized(this.len_mod, GreedyString(encoding='UTF-8')),
	'rest' / FixedSized(3, LazyBound(lambda: expr_2__tuple)),
	'len_mod' / Computed((this.len_orig - 3)),
	'char5' / Pointer(5, FixedSized(1, GreedyString(encoding='ASCII'))),
	'tuple5' / Pointer(5, LazyBound(lambda: expr_2__tuple)),
)

expr_2__tuple = Struct(
	'byte0' / Int8ub,
	'byte1' / Int8ub,
	'byte2' / Int8ub,
	'avg' / Computed((this.byte1 + this.byte2) // 2),
)

expr_2 = Struct(
	'str1' / LazyBound(lambda: expr_2__mod_str),
	'str2' / LazyBound(lambda: expr_2__mod_str),
	'str1_len_mod' / Computed(this.str1.len_mod),
	'str1_len' / Computed(len(this.str1.str)),
	'str1_tuple5' / Computed(this.str1.tuple5),
	'str2_tuple5' / Computed(this.str2.tuple5),
	'str1_avg' / Computed(this.str1.rest.avg),
	'str1_byte1' / Computed(this.str1.rest.byte1),
	'str1_char5' / Computed(this.str1.char5),
)

_schema = expr_2
