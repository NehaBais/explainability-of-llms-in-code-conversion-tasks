Here is the converted code from C to Python:
```
import os
def substring(s, n, m):
 if n < 0 or m < 0:
 return None
 if s[n] == '�': # check for null s
 return None
 if n + m > len(s):
 m = len(s) - n - 1
 result = s[n:n+m].encode('utf-8')
 return result.decode('utf-8', errors='ignore')
 
def str_wholeless1(s):
 return substring(s, 0, len(s)-1)
 
def str_fromch(s, ch, m):
 index = s.find(ch)
 if index == -1:
 return None
 return substring(s, index, m)
 
def str_fromstr(s, in, m):
 index = s.find(in)
 if index == -1:
 return None
 return substring(s, index, m)
 
if __name__ == '__main__':
 s = "hello world shortest program"
 
 print(substring(s, 12, 5))	# get "short"
 print(substring(s, 6, -1))		# get "world shortest program"
 print(str_wholeless1(s))		# "... progra"
 print(str_fromch(s, 'w', 5))		# "world"
 print(str_fromstr(s, "ro", 3))		# "rog"
 
```
Note: The code uses Python's built-in `encode` and `decode` methods to handle UTF-8 encoding and decoding. It also uses the `find` method to find the index of a character or substring within the string. The `substring` function takes in a string, a starting position `n`, and a length `m`, and returns the corresponding substring. If `n < 0` or `m < 0`, it returns None. If the string ends before `n`, it also returns None. The `str_wholeless1` function is a helper function that takes in a string and returns the whole string minus the last character. The `str_fromch` function takes in a string, a character `ch`, and a length `m`, and returns the substring starting from the index of the character `ch`. If the character `ch` does not exist in the string, it returns None. The `str_fromstr` function takes in a string, a substring `in`, and a length `m`, and returns the substring starting from the index of the substring `in`. If the substring `in` does not exist in the string, it returns None.

