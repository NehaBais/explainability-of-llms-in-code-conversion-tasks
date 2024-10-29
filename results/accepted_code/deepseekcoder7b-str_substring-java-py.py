def Substring(str, n, m):
    return str[n : n + m]


def Substring(str, n):
    return str[n:]


def Substring(str):
    return str[:-1]


def Substring(str, c, m):
    idx = str.index(c) if c in str else -1
    if idx != -1:  # character found
        return str[idx : idx + m]
    else:  # character not found
        raise ValueError("Character not found in string")


def Substring(str, sub, m):
    idx = str.find(sub) if sub in str else -1
    if idx != -1:  # substring found
        return str[idx : idx + len(sub) + m]
    else:  # substring not found
        raise ValueError("Substring not found in string")
