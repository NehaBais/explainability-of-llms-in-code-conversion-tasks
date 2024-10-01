def substring(s, n, m=None):
 if m is not None:
 return s[n:n+m]
 else:
 return s[n:]
 
def substring_last(s):
 return s[:-1]
 
def substring_char(s, c, m):
 i = s.index(c)
 j = i + m + 1
 return s[i:j]
 
def substring_sub(s, sub, m):
 i = s.index(sub)
 j = i + m + 1
 return s[i:j]