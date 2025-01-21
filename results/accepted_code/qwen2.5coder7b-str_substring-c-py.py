def substring(s: str, n: int, m: int) -> str:
    # Check for null s
    if not s:
        return None

    # Negative m to mean 'up to the mth char from right'
    if m < 0:
        m = len(s) + m - n + 1

    # n < 0 or m < 0 is invalid
    if n < 0 or m < 0:
        return None

    # Make sure string does not end before n and advance the "s" pointer to beginning of substring
    if len(s[:n]) != n:
        # String ends before n: invalid
        return None

    result = s[n : n + m]
    return result


def str_wholeless1(s: str) -> str:
    return substring(s, 0, len(s) - 1)


def str_fromch(s: str, ch: int) -> str:
    return substring(s, s.find(chr(ch)), 5)


def str_fromstr(s: str, in_str: str) -> str:
    return substring(s, s.find(in_str), 3)


def test(A):
    r = A()
    if r is None:
        print("--error--")
    else:
        print(r)
        del r


if __name__ == "__main__":
    s = "hello world shortest program"

    test(lambda: substring(s, 12, 5))  # get "short"
    test(lambda: substring(s, 6, -1))  # get "world shortest program"
    test(str_wholeless1)  # "... progra"
    test(lambda: str_fromch(s, ord("w")))  # "world"
    test(lambda: str_fromstr(s, "ro"))  # "rog"
