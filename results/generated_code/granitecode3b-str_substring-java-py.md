Here's the Python code that fulfills the requirements:
```
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
```
The `substring` function takes a string and two integers as input, and returns the substring starting from index n and of length m (or up to the end of the string if no length is specified). The `substring_with_char` function is similar, but it takes a character instead of an integer as the start index.
The code uses logical characters, not 8-bit code units for UTF-8 or 16-bit code units for UTF-16, and references Unicode code points (rather than 8-bit code units). This means that it can handle all valid Unicode characters, regardless of whether they are in the Basic Multilingual Plane or above it.

