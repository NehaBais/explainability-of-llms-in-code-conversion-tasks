def substring(str, n=None, m=None, c=None, sub=None):
    if n and m:
        return str[n : n + m]
    elif n:
        return str[n:]
    else:
        return str[:-1]


def substring_with_char(str, c, m):
    index = str.index(c)
    return str[index : index + m + 1]


def substring_with_substring(str, sub, m):
    index = str.index(sub)
    return str[index : index + m + 1]
