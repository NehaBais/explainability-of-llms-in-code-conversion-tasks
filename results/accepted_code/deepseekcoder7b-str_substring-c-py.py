def substring(s, n, m):
    if s is None or n < 0 or m < 0:
        return None

    # negative m to mean 'up to the mth char from right'
    if m < 0:
        m = len(s) + m - n + 1

    # make sure string does not end before n
    try:
        s[n]
    except IndexError:
        return None

    # Python provides slicing for substrings
    return s[n:m] if m > 0 else ""


def str_wholeless1(s):
    return substring(s, 0, len(s) - 1)


def str_fromch(s, ch, m=None):
    try:
        n = s.index(ch)
    except ValueError:
        return None

    if m is not None:
        return substring(s, n, m)
    else:
        return s[n:]


def str_fromstr(s, substr, m=None):
    try:
        n = s.index(substr)
    except ValueError:
        return None

    if m is not None:
        return substring(s, n, m + n)
    else:
        return s[n:]


# testing functions with sample string 'hello world shortest program'
s = "hello world shortest program"
print(substring(s, 12, 5))  # get  "short"
print(substring(s, 6, -1))  # get  "world shortest program"
print(str_wholeless1(s))  # get "hello world shortest progra"
print(str_fromch(s, "w"))  # get "world"
print(str_fromstr(s, "or"))  # get "orld"
