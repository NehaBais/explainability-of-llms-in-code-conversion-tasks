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