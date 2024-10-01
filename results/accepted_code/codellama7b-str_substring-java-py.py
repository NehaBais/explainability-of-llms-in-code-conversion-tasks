def substring(str, n, m=None):
    if m is None:
        return str[n:]
    else:
        return str[n : n + m]


def substring(str, n=0):
    return str[n:]


def substring(str, exclude_last_char=True):
    return str[:-1] if exclude_last_char else str


def substring(str, char, m=None):
    index = str.index(char)
    if m is None:
        return str[index:]
    else:
        return str[index : index + m + 1]


def substring(str, sub, m=None):
    index = str.index(sub)
    if m is None:
        return str[index:]
    else:
        return str[index : index + m + 1]
