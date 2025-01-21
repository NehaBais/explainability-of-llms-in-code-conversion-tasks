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
    for i in range(n):
        if s[i] == "\0":
            # string ends before n: invalid
            return None

    result = s[n : n + m]
    return result


def str_wholeless1(s):
    return substring(s, 0, len(s) - 1)


def str_fromch(s, ch, m):
    pos = s.find(ch)
    if pos == -1:  # character not found in string
        return None
    return substring(s, pos, m)


def str_fromstr(s, inStr, m):
    pos = s.find(InStr)
    if pos == -1:  # substring not found in string
        return None
    return substring(s, pos, m)


TEST = lambda f: (print(f()) if f() else print("--error--"))

TEST(lambda: substring("hello world shortest program", 12, 5))  # get "short"
TEST(
    lambda: substring("hello world shortest program", 6, -1)
)  # get "world shortest program"
TEST(lambda: str_wholeless1("hello world shortest program"))  # "... progra"
TEST(lambda: str_fromch("hello world shortest program", "w", 5))  # "world"
TEST(lambda: str_fromstr("hello world shortest program", "ro", 3))  # "rog"
