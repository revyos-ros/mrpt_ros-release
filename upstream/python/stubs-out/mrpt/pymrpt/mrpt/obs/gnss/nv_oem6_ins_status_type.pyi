from typing import ClassVar

DETERMINING_ORIENTATION: nv_ins_status_type_t
INS_ALIGNING: nv_ins_status_type_t
INS_ALIGNMENT_COMPLETE: nv_ins_status_type_t
INS_HIGH_VARIANCE: nv_ins_status_type_t
INS_INACTIVE: nv_ins_status_type_t
INS_SOLUTION_FREE: nv_ins_status_type_t
INS_SOLUTION_GOOD: nv_ins_status_type_t
WAITING_INITIALPOS: nv_ins_status_type_t

class nv_ins_status_type_t:
    __doc__: ClassVar[str] = ...  # read-only
    __members__: ClassVar[dict] = ...  # read-only
    DETERMINING_ORIENTATION: ClassVar[nv_ins_status_type_t] = ...
    INS_ALIGNING: ClassVar[nv_ins_status_type_t] = ...
    INS_ALIGNMENT_COMPLETE: ClassVar[nv_ins_status_type_t] = ...
    INS_HIGH_VARIANCE: ClassVar[nv_ins_status_type_t] = ...
    INS_INACTIVE: ClassVar[nv_ins_status_type_t] = ...
    INS_SOLUTION_FREE: ClassVar[nv_ins_status_type_t] = ...
    INS_SOLUTION_GOOD: ClassVar[nv_ins_status_type_t] = ...
    WAITING_INITIALPOS: ClassVar[nv_ins_status_type_t] = ...
    __entries: ClassVar[dict] = ...
    def __init__(self, value: int) -> None: ...
    def __and__(self, other: object) -> object: ...
    def __eq__(self, other: object) -> bool: ...
    def __ge__(self, other: object) -> bool: ...
    def __getstate__(self) -> int: ...
    def __gt__(self, other: object) -> bool: ...
    def __hash__(self) -> int: ...
    def __index__(self) -> int: ...
    def __int__(self) -> int: ...
    def __invert__(self) -> object: ...
    def __le__(self, other: object) -> bool: ...
    def __lt__(self, other: object) -> bool: ...
    def __ne__(self, other: object) -> bool: ...
    def __or__(self, other: object) -> object: ...
    def __rand__(self, other: object) -> object: ...
    def __ror__(self, other: object) -> object: ...
    def __rxor__(self, other: object) -> object: ...
    def __setstate__(self, state: int) -> None: ...
    def __xor__(self, other: object) -> object: ...
    @property
    def name(self) -> str: ...
    @property
    def value(self) -> int: ...

def enum2str(val: int) -> str: ...
