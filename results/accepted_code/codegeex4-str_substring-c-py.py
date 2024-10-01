def substring(s, n, m):
    # check for null s
    if not s:
        return None
    # negative m to mean 'up to the mth char from right'
    if m < 0:
        m = len(s) + m - n + 1

    # n < 0 or m < 0 is invalid
    if n < 0 or m < 0:
        return None

    # make sure string does not end before n
    # and advance the "s" pointer to beginning of substring
    for i in range(n):
        if not s[i]:
            # string ends before n: invalid
            return None

    result = s[n : n + m]
    return result


def str_wholeless1(s):
    return substring(s, 0, len(s) - 1)


def str_fromch(s, ch, m):
    start_index = s.index(ch)
    if start_index == -1:
        return None
    return substring(s, start_index, m)


def str_fromstr(s, in_str, m):
    start_index = s.find(in_str)
    if start_index == -1:
        return None
    return substring(s, start_index, m)


def test(substring_func):
    s = "hello world shortest program"
    result = substring_func(s)
    if result is None:
        print("--error--")
    else:
        print(result)


if __name__ == "__main__":
    test(lambda: substring("hello world shortest program", 12, 5))  # get "short"
    test(
        lambda: substring("hello world shortest program", 6, -1)
    )  # get "world shortest program"
    test(str_wholeless1)  # "... progra"
    test(lambda: str_fromch("hello world shortest program", "w", 5))  # "world"
    test(lambda: str_fromstr("hello world shortest program", "ro", 3))  # "rog"
