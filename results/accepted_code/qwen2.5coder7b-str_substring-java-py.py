def substring_from_n_to_m(s: str, n: int, m: int) -> str:
    return s[n : n + m]


def substring_from_n_to_end(s: str, n: int) -> str:
    return s[n:]


def substring_except_last_char(s: str) -> str:
    return s[:-1]


def substring_from_char_to_m_chars(c: str, m: int, s: str) -> str:
    start = s.find(c)
    if start == -1:
        raise ValueError(f"Character '{c}' not found in string")
    return s[start : start + m + 1]


def substring_from_substring_to_m_chars(sub: str, m: int, s: str) -> str:
    start = s.find(sub)
    if start == -1:
        raise ValueError(f"Substring '{sub}' not found in string")
    return s[start : start + m + 1]
