def substring(s, n, m):
    # check for null s
    if not s:
        return None

    # negative m means "up to the mth char from right"
    if m < 0:
        m = len(s) + m - n + 1

    # n and m cannot be negative, invalid case
    if n < 0 or m < 0:
        return None

    # make sure string does not end before n
    for i in range(n):
        if s[i] == "\x00":
            return None

    result = bytearray(m + 1)
    result[0] = ""

    strncat(result, s, m)
    # strncat adds a null terminator after reading m characters if string ends early
    return bytes(result[:-1]).decode("utf8")


def str_wholeless1(s):
    return substring(s, 0, len(s) - 1)


def str_fromch(s, ch, m):
    return substring(s, s.index(ch), m)


def str_fromstr(s, inp, m):
    return substring(s, s.find(inp), m)
