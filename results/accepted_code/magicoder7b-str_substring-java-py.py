def Substring(str, n=None, m=None):
    if n != None and m != None:
        return str[n : n + m]
    elif n != None:
        return str[n:]
    else:
        return str[:-1]


def Substring(str, c, m=None):
    index = str.index(c)
    if m != None:
        return str[index : index + m]
    else:
        return str[index:]


def Substring(str, sub, m=None):
    index = str.index(sub)
    if m != None:
        return str[index : index + m]
    else:
        return str[index:]
