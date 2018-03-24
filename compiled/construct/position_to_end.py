from construct import *
from construct.lib import *

position_to_end__index_obj = Struct(
	'foo' / Int32ul,
	'bar' / Int32ul,
)

position_to_end = Struct(
	'index' / Pointer((this._io.size() - 8), LazyBound(lambda: position_to_end__index_obj)),
)

_schema = position_to_end
