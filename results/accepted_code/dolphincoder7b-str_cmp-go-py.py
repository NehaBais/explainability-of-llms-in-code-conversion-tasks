import string
from typing import Callable


# Python built-in string comparison operators:
def compare_strings(
    s1: str,
    s2: str,
    op: Callable[[str], bool] = lambda x: x,  # default function is id (identity)
) -> None:
    if op(s1) == op(s2):
        print(f"{s1} is bytewise identical to {s2}")
    else:
        print(f"{s1} is bytewise different from {s2}")

    # Python is strongly typed and will not directly compare a value of string type
    # to a value of numeric type. To perform lexical comparisons, we can use the built-in str.lexicographical_compare method:
    if s1.lexicographical_compare(s2) < 0:
        print(f"{s1} is lexically bytewise less than {s2}")

    elif s1.lexicographical_compare(s2) > 0:
        print(f"{s1} is lexically bytewise greater than {s2}")

    else:
        print(f"{s1} and {s2} are equal in their lexical order")


# Python's str.casefold method provides a case-insensitive comparison (with default locale):
def compare_strings_case_insensitive(
    s1: str,
    s2: str,
    op: Callable[
        [str], bool
    ] = lambda x: string.ascii_lowercase,  # default function is to lower-case
) -> None:
    if op(s1).lower() == op(s2).lower():
        print(f"{s1} equal to {s2} (case insensitive)")
    else:
        print(f"{s1} not equal to {s2} (case insensitive)")
