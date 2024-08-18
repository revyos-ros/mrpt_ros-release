from typing import Any, ClassVar, List

from typing import overload

class CFileGZInputStream(CStream):
    @overload
    def __init__(self) -> None: ...
    @overload
    def __init__(self, fileName: str) -> None: ...
    def Read(self, Buffer: capsule, Count: int) -> int: ...
    @overload
    def Seek(self) -> int: ...
    @overload
    def Seek(self) -> int: ...
    @overload
    def Seek(int64_t, enummrpt) -> uint64_t: ...
    def Write(self, Buffer: capsule, Count: int) -> int: ...
    @overload
    def checkEOF(self) -> bool: ...
    @overload
    def checkEOF() -> bool: ...
    @overload
    def close(self) -> None: ...
    @overload
    def close() -> void: ...
    @overload
    def fileOpenCorrectly(self) -> bool: ...
    @overload
    def fileOpenCorrectly() -> bool: ...
    def filePathAtUse(self) -> str: ...
    @overload
    def getPosition(self) -> int: ...
    @overload
    def getPosition() -> uint64_t: ...
    def getStreamDescription(self) -> str: ...
    @overload
    def getTotalBytesCount(self) -> int: ...
    @overload
    def getTotalBytesCount() -> uint64_t: ...
    @overload
    def is_open(self) -> bool: ...
    @overload
    def is_open() -> bool: ...

class CFileGZOutputStream(CStream):
    @overload
    def __init__(self, arg0: str) -> None: ...
    @overload
    def __init__(self, arg0: str, arg1: OpenMode) -> None: ...
    @overload
    def __init__(self, fileName: str, mode: OpenMode, compressionLevel: int) -> None: ...
    @overload
    def __init__(self) -> None: ...
    def Read(self, Buffer: capsule, Count: int) -> int: ...
    @overload
    def Seek(self) -> int: ...
    @overload
    def Seek(self) -> int: ...
    @overload
    def Seek(int64_t, enummrpt) -> uint64_t: ...
    def Write(self, Buffer: capsule, Count: int) -> int: ...
    @overload
    def close(self) -> None: ...
    @overload
    def close() -> void: ...
    @overload
    def fileOpenCorrectly(self) -> bool: ...
    @overload
    def fileOpenCorrectly() -> bool: ...
    def filePathAtUse(self) -> str: ...
    @overload
    def getPosition(self) -> int: ...
    @overload
    def getPosition() -> uint64_t: ...
    def getStreamDescription(self) -> str: ...
    @overload
    def getTotalBytesCount(self) -> int: ...
    @overload
    def getTotalBytesCount() -> uint64_t: ...
    @overload
    def is_open(self) -> bool: ...
    @overload
    def is_open() -> bool: ...

class CFileInputStream(CStream):
    @overload
    def __init__(self, fileName: str) -> None: ...
    @overload
    def __init__(self) -> None: ...
    def Read(self, Buffer: capsule, Count: int) -> int: ...
    @overload
    def Seek(self, off: int) -> int: ...
    @overload
    def Seek(self, off: int, Origin: CStream.TSeekOrigin) -> int: ...
    @overload
    def Seek(int64_t, enummrpt) -> uint64_t: ...
    def Write(self, Buffer: capsule, Count: int) -> int: ...
    @overload
    def checkEOF(self) -> bool: ...
    @overload
    def checkEOF() -> bool: ...
    @overload
    def clearError(self) -> None: ...
    @overload
    def clearError() -> void: ...
    @overload
    def close(self) -> None: ...
    @overload
    def close() -> void: ...
    @overload
    def fileOpenCorrectly(self) -> bool: ...
    @overload
    def fileOpenCorrectly() -> bool: ...
    @overload
    def getPosition(self) -> int: ...
    @overload
    def getPosition() -> uint64_t: ...
    def getStreamDescription(self) -> str: ...
    @overload
    def getTotalBytesCount(self) -> int: ...
    @overload
    def getTotalBytesCount() -> uint64_t: ...
    @overload
    def is_open(self) -> bool: ...
    @overload
    def is_open() -> bool: ...
    @overload
    def open(self, fileName: str) -> bool: ...
    @overload
    def open(conststd) -> bool: ...
    @overload
    def readLine(self, str: str) -> bool: ...
    @overload
    def readLine(std) -> bool: ...

class CFileOutputStream(CStream):
    @overload
    def __init__(self, arg0: str) -> None: ...
    @overload
    def __init__(self, fileName: str, mode: OpenMode) -> None: ...
    @overload
    def __init__(self) -> None: ...
    def Read(self, Buffer: capsule, Count: int) -> int: ...
    @overload
    def Seek(self, Offset: int) -> int: ...
    @overload
    def Seek(self, Offset: int, Origin: CStream.TSeekOrigin) -> int: ...
    @overload
    def Seek(int64_t, enummrpt) -> uint64_t: ...
    def Write(self, Buffer: capsule, Count: int) -> int: ...
    @overload
    def close(self) -> None: ...
    @overload
    def close() -> void: ...
    @overload
    def fileOpenCorrectly(self) -> bool: ...
    @overload
    def fileOpenCorrectly() -> bool: ...
    @overload
    def getPosition(self) -> int: ...
    @overload
    def getPosition() -> uint64_t: ...
    def getStreamDescription(self) -> str: ...
    @overload
    def getTotalBytesCount(self) -> int: ...
    @overload
    def getTotalBytesCount() -> uint64_t: ...
    @overload
    def is_open(self) -> bool: ...
    @overload
    def is_open() -> bool: ...
    @overload
    def open(self, fileName: str) -> bool: ...
    @overload
    def open(self, fileName: str, mode: OpenMode) -> bool: ...
    @overload
    def open(conststd, constenummrpt) -> bool: ...

class CFileStream(CStream):
    @overload
    def __init__(self, arg0: str) -> None: ...
    @overload
    def __init__(self, fileName: str, mode: int) -> None: ...
    @overload
    def __init__(self) -> None: ...
    def Read(self, Buffer: capsule, Count: int) -> int: ...
    @overload
    def Seek(self, off: int) -> int: ...
    @overload
    def Seek(self, off: int, org: CStream.TSeekOrigin) -> int: ...
    @overload
    def Seek(int64_t, enummrpt) -> uint64_t: ...
    def Write(self, Buffer: capsule, Count: int) -> int: ...
    @overload
    def checkEOF(self) -> bool: ...
    @overload
    def checkEOF() -> bool: ...
    @overload
    def clearError(self) -> None: ...
    @overload
    def clearError() -> void: ...
    @overload
    def close(self) -> None: ...
    @overload
    def close() -> void: ...
    @overload
    def fileOpenCorrectly(self) -> bool: ...
    @overload
    def fileOpenCorrectly() -> bool: ...
    @overload
    def getPosition(self) -> int: ...
    @overload
    def getPosition() -> uint64_t: ...
    @overload
    def getPositionI(self) -> int: ...
    @overload
    def getPositionI() -> uint64_t: ...
    @overload
    def getPositionO(self) -> int: ...
    @overload
    def getPositionO() -> uint64_t: ...
    @overload
    def getTotalBytesCount(self) -> int: ...
    @overload
    def getTotalBytesCount() -> uint64_t: ...
    @overload
    def is_open(self) -> bool: ...
    @overload
    def is_open() -> bool: ...
    @overload
    def open(self, fileName: str) -> bool: ...
    @overload
    def open(self, fileName: str, mode: int) -> bool: ...
    @overload
    def open(conststd, int) -> bool: ...
    @overload
    def readLine(self, str: str) -> bool: ...
    @overload
    def readLine(std) -> bool: ...

class CMemoryStream(CStream):
    @overload
    def __init__(self) -> None: ...
    @overload
    def __init__(self, data: capsule, nBytesInData: int) -> None: ...
    @overload
    def __init__(self, arg0: CMemoryStream) -> None: ...
    @overload
    def __init__(self, arg0: CMemoryStream) -> None: ...
    def Read(self, Buffer: capsule, Count: int) -> int: ...
    @overload
    def Seek(self, Offset: int) -> int: ...
    @overload
    def Seek(self, Offset: int, Origin: CStream.TSeekOrigin) -> int: ...
    @overload
    def Seek(int64_t, enummrpt) -> uint64_t: ...
    def Write(self, Buffer: capsule, Count: int) -> int: ...
    def assign(self) -> CMemoryStream: ...
    def assignMemoryNotOwn(self, data: capsule, nBytesInData: int) -> None: ...
    @overload
    def clear(self) -> None: ...
    @overload
    def clear() -> void: ...
    @overload
    def getPosition(self) -> int: ...
    @overload
    def getPosition() -> uint64_t: ...
    def getRawBufferData(self) -> capsule: ...
    def getStreamDescription(self) -> str: ...
    @overload
    def getTotalBytesCount(self) -> int: ...
    @overload
    def getTotalBytesCount() -> uint64_t: ...
    @overload
    def loadBufferFromFile(self, file_name: str) -> bool: ...
    @overload
    def loadBufferFromFile(conststd) -> bool: ...
    @overload
    def saveBufferToFile(self, file_name: str) -> bool: ...
    @overload
    def saveBufferToFile(conststd) -> bool: ...
    @overload
    def setAllocBlockSize(self, alloc_block_size: int) -> None: ...
    @overload
    def setAllocBlockSize(uint64_t) -> void: ...

class CPipeBaseEndPoint(CStream):
    timeout_read_between_us: int
    timeout_read_start_us: int
    @overload
    def __init__(self) -> None: ...
    @overload
    def __init__(self, serialized: str) -> None: ...
    def Read(self, Buffer: capsule, Count: int) -> int: ...
    @overload
    def Seek(self, of: int) -> int: ...
    @overload
    def Seek(self, of: int, o: CStream.TSeekOrigin) -> int: ...
    @overload
    def Seek(int64_t, enummrpt) -> uint64_t: ...
    def Write(self, Buffer: capsule, Count: int) -> int: ...
    @overload
    def close(self) -> None: ...
    @overload
    def close() -> void: ...
    @overload
    def getPosition(self) -> int: ...
    @overload
    def getPosition() -> uint64_t: ...
    @overload
    def getTotalBytesCount(self) -> int: ...
    @overload
    def getTotalBytesCount() -> uint64_t: ...
    @overload
    def isOpen(self) -> bool: ...
    @overload
    def isOpen() -> bool: ...
    def serialize(self) -> str: ...

class CPipeReadEndPoint(CPipeBaseEndPoint):
    def __init__(self, serialized: str) -> None: ...
    def Write(self, Buffer: capsule, Count: int) -> int: ...

class CPipeWriteEndPoint(CPipeBaseEndPoint):
    def __init__(self, serialized: str) -> None: ...
    def Read(self, Buffer: capsule, Count: int) -> int: ...

class CStream:
    class TSeekOrigin:
        __doc__: ClassVar[str] = ...  # read-only
        __members__: ClassVar[dict] = ...  # read-only
        __entries: ClassVar[dict] = ...
        sFromBeginning: ClassVar[CStream.TSeekOrigin] = ...
        sFromCurrent: ClassVar[CStream.TSeekOrigin] = ...
        sFromEnd: ClassVar[CStream.TSeekOrigin] = ...
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
    sFromBeginning: ClassVar[CStream.TSeekOrigin] = ...
    sFromCurrent: ClassVar[CStream.TSeekOrigin] = ...
    sFromEnd: ClassVar[CStream.TSeekOrigin] = ...
    @overload
    def __init__(self) -> None: ...
    @overload
    def __init__(self, arg0: CStream) -> None: ...
    def Read(self, Buffer: capsule, Count: int) -> int: ...
    def ReadBufferImmediate(self, Buffer: capsule, Count: int) -> int: ...
    @overload
    def Seek(self, Offset: int) -> int: ...
    @overload
    def Seek(self, Offset: int, Origin: CStream.TSeekOrigin) -> int: ...
    @overload
    def Seek(int64_t, enummrpt) -> uint64_t: ...
    def Write(self, *args, **kwargs) -> Any: ...
    def assign(self) -> CStream: ...
    @overload
    def getPosition(self) -> int: ...
    @overload
    def getPosition() -> uint64_t: ...
    def getStreamDescription(self) -> str: ...
    @overload
    def getTotalBytesCount(self) -> int: ...
    @overload
    def getTotalBytesCount() -> uint64_t: ...
    @overload
    def getline(self, out_str: str) -> bool: ...
    @overload
    def getline(std) -> bool: ...

class CTextFileLinesParser:
    @overload
    def __init__(self) -> None: ...
    @overload
    def __init__(self, filename: str) -> None: ...
    @overload
    def __init__(self, arg0: CTextFileLinesParser) -> None: ...
    def assign(self) -> CTextFileLinesParser: ...
    @overload
    def close(self) -> None: ...
    @overload
    def close() -> void: ...
    def enableCommentFilters(self, filter_MATLAB_comments: bool, filter_C_comments: bool, filter_SH_comments: bool) -> None: ...
    @overload
    def getCurrentLineNumber(self) -> int: ...
    @overload
    def getCurrentLineNumber() -> size_t: ...
    @overload
    def getNextLine(self, out_str: str) -> bool: ...
    @overload
    def getNextLine(std) -> bool: ...
    @overload
    def open(self, fil: str) -> None: ...
    @overload
    def open(conststd) -> void: ...
    @overload
    def rewind(self) -> None: ...
    @overload
    def rewind() -> void: ...

class OpenMode:
    __doc__: ClassVar[str] = ...  # read-only
    __members__: ClassVar[dict] = ...  # read-only
    APPEND: ClassVar[OpenMode] = ...
    TRUNCATE: ClassVar[OpenMode] = ...
    __entries: ClassVar[dict] = ...
    def __init__(self, value: int) -> None: ...
    def __eq__(self, other: object) -> bool: ...
    def __getstate__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __index__(self) -> int: ...
    def __int__(self) -> int: ...
    def __ne__(self, other: object) -> bool: ...
    def __setstate__(self, state: int) -> None: ...
    @property
    def name(self) -> str: ...
    @property
    def value(self) -> int: ...

def file_get_contents(fileName: str) -> str: ...
def getLazyLoadPathBase() -> str: ...
def lazy_load_absolute_path(relativeOrAbsolutePath: str) -> str: ...
@overload
def loadTextFile(o: List[str], fileName: str) -> bool: ...
@overload
def loadTextFile(classstd, conststd) -> bool: ...
@overload
def setLazyLoadPathBase(path: str) -> None: ...
@overload
def setLazyLoadPathBase(conststd) -> void: ...
