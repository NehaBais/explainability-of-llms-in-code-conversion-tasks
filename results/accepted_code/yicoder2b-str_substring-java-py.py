def Substring(str, n, m):
    return str[n : n + m]


def Substring(str, n):
    return str[n:]


def Substring(str):
    return str[:-1]


def Substring(str, c, m):
    return str[str.index(c) : str.index(c) + m + 1]


def Substring(str, sub, m):
    return str[str.index(sub) : str.index(sub) + m + 1]
