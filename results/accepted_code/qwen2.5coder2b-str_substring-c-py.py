def substring(s: str, n: int, m: int):
    if not s:
        return None

    if m < 0:
        m = len(s) + m - n + 1

    if n < 0 or m < 0:
        return None

    if n > len(s):
        return None

    result = []

    if n == 0:
        result.append("")

    else:
        for i in range(n, min(len(s), n + m)):
            result.append(s[i])

    return "".join(result)


def str_wholeless1(s: str) -> str:
    return substring(s, 0, len(s) - 1)


def str_fromch(s: str, ch: str, m: int) -> str:
    return substring(s, s.index(ch), m)


def str_fromstr(s: str, in_str: str, m: int) -> str:
    return substring(s, s.index(in_str), m)


if __name__ == "__main__":
    s = "hello world shortest program"

    print(substring(s, 12, 5))  # get 'short'
    print(substring(s, 6, -1))  # get 'world shortest program'
    print(str_wholeless1(s))  # '... progra'
    print(str_fromch(s, "w", 5))  # 'world'
    print(str_fromstr(s, "ro", 3))  # 'rog'
