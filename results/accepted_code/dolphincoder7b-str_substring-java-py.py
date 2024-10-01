def substring(str, n, m):
    return str[n : n + m]


def substring(str, n):
    return str[n:]


def substring(str):
    return str[:-1]


def substring(str, c, m):
    index = str.find(c)
    if index == -1:
        raise ValueError("Character not found in the string")
    else:
        return str[index : index + m + 1]


def substring(str, sub, m):
    index = str.find(sub)
    if index == -1:
        raise ValueError("Substring not found in the string")
    else:
        return str[index : index + m + 1]
