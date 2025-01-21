def substring(string, n, m=None):
 if m is not None:
 return string[n:n+m]
 elif n == 0:
 return string[:-1]
 else:
 return string[string.index(n):string.index(n)+m+1]
 
def substring_with_char(string, char, m=None):
 if m is not None:
 return string[string.find(char):string.find(char)+m+1]
 else:
 return string[:string.rfind(char)]