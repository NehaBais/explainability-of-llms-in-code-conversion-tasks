def match_string(s, t):
    if len(t) > len(s):
        return False
    for i in range(len(s)-len(t)+1):
        if s[i] == t[0]:
            j = 1
            while j < len(t) and s[i+j] == t[j]:
                j += 1
            if j == len(t):
                return True
    return False