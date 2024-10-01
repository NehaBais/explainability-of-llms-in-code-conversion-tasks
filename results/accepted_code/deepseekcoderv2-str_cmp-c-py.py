def str_eq(str1: str, str2: str) -> bool:
    """Compare two strings for exact equality"""
    return str1 == str2


def str_ne(str1: str, str2: str) -> bool:
    """Compare two strings for inequality (i.e., the inverse of exact equality)"""
    return not str_eq(str1, str2)


def str_gt(str1: str, str2: str) -> bool:
    """Compare two strings to see if one is lexically ordered before than the other"""
    return str1 > str2


def str_lt(str1: str, str2: str) -> bool:
    """Compare two strings to see if one is lexically ordered after than the other"""
    return str1 < str2


def str_ge(str1: str, str2: str) -> bool:
    """Compare two strings to see if one is lexically ordered before or equal than the other"""
    return str1 >= str2


def str_le(str1: str, str2: str) -> bool:
    """Compare two strings to see if one is lexically ordered after or equal than the other"""
    return str1 <= str2


def str_casecmp(str1: str, str2: str) -> int:
    """Case-insensitive string comparison"""
    return (
        -1 if str1.lower() < str2.lower() else 1 if str1.lower() > str2.lower() else 0
    )
