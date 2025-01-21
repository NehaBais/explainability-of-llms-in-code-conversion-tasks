def substring(str, n, m=0):
    if 0 <= n < len(str) and 0 <= m <= (len(str) - n):
        return str[n : n + m]
    else:
        return ""


def substring_from_char(str, c, m=0):
    index = str.find(c)
    if index != -1 and index + m + 1 <= len(str):
        return str[index : index + m + 1]
    else:
        return ""


def substring_from_substring(str, sub, m=0):
    index = str.find(sub)
    if index != -1 and index + m + 1 <= len(str):
        return str[index : index + m + 1]
    else:
        return ""
