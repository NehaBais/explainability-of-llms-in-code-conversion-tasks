def substring(s, n, m=-1):
    if s is None or len(s) == 0:
        return None

    # Negative m to mean 'up to the mth char from right'
    if m < 0:
        m = len(s) + m - n + 1

    # n < 0 or m < 0 is invalid
    if n < 0 or m < 0:
        return None

    # Make sure string does not end before n
    if n >= len(s):
        return None

    result = ""
    for i in range(n, min(n + m, len(s))):
        result += s[i]

    return result


def str_wholeless1(s):
    return substring(s, 0, len(s) - 1)


def str_fromch(s, ch, m):
    index = s.find(ch)
    if index == -1:
        return None
    return substring(s, index, m)


def str_fromstr(s, substr, m):
    index = s.find(substr)
    if index == -1:
        return None
    return substring(s, index, m)


# Test cases
s = "hello world shortest program"

print(substring(s, 12, 5))  # get "short"
print(substring(s, 6, -1))  # get "world shortest program"
print(str_wholeless1(s))  # "... progra"
print(str_fromch(s, "w", 5))  # "world"
print(str_fromstr(s, "ro", 3))  # "rog"
