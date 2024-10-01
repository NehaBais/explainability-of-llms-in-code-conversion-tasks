import sys


def substring(s: str, n: int, m: int) -> str:
    """
    Returns a substring of the given string.

    Args:
        s: The string to substring.
        n: The starting index of the substring.
        m: The length of the substring.

    Returns:
        A substring of the given string.
    """

    if n < 0 or m < 0:
        return None

    if n >= len(s):
        return None

    if n + m > len(s):
        m = len(s) - n

    return s[n : n + m]


def str_wholeless1(s: str) -> str:
    """
    Returns the whole string minus the last character.

    Args:
        s: The string to remove the last character from.

    Returns:
        The whole string minus the last character.
    """

    return s[:-1]


def str_fromch(s: str, ch: str, m: int) -> str:
    """
    Returns a substring starting from the given character.

    Args:
        s: The string to substring.
        ch: The starting character of the substring.
        m: The length of the substring.

    Returns:
        A substring starting from the given character.
    """

    index = s.find(ch)
    if index == -1:
        return None

    return s[index : index + m]


def str_fromstr(s: str, in_: str, m: int) -> str:
    """
    Returns a substring starting from the given substring.

    Args:
        s: The string to substring.
        in_: The starting substring of the substring.
        m: The length of the substring.

    Returns:
        A substring starting from the given substring.
    """

    index = s.find(in_)
    if index == -1:
        return None

    return s[index : index + m]
