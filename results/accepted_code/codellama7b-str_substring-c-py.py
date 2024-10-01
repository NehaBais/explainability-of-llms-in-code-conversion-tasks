def substring(s, n, m):
    """
    Extract a substring from s, starting at index n and of length m.
    """
    if n < 0 or m < 0:
        return None
    start = n
    end = min(start + m, len(s))
    return s[start:end]

def str_wholeless1(s):
    """
    Extract the substring of s from the first character up to the penultimate.
    """
    return substring(s, 0, -1)

def str_fromch(s, ch, m):
    """
    Extract a substring starting with the first occurrence of ch and of length m.
    """
    start = s.find(ch)
    if start == -1:
        return None
    end = min(start + m, len(s))
    return s[start:end]

def str_fromstr(s, in, m):
    """
    Extract a substring starting with the first occurrence of in and of length m.
    """
    start = s.find(in)
    if start == -1:
        return None
    end = min(start + m, len(s))
    return s[start:end]

if __name__ == '__main__':
    s = "hello world shortest program"

    print(substring(s, 12, 5))	# get "short"
    print(substring(s, 6, -1))	# get "world shortest program"
    print(str_wholeless1(s))	# "... progra"
    print(str_fromch(s, 'w', 5))	# "world"
    print(str_fromstr(s, "ro", 3))	# "rog"