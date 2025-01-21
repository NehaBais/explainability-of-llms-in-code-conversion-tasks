def str_fromstr(s, 'in', m):
    """
    Extract a substring starting with the first occurrence of 'in' and of length m.
    """
    start = s.find('in')
    if start == -1:
        return None
    end = min(start + m, len(s))
    return s[start:end]