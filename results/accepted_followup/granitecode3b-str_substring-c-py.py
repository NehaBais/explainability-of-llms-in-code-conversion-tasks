def substring(string, start, length):
 if not string or length < 0:
 return None
 
 end = min(start + length, len(string))
 return string[slice(start, end)]
 
def str_wholeless1(string):
 return substring(string, 0, -1)
 
def str_fromch(string, ch, length=None):
 index = string.find(ch)
 if index == -1:
 return None
 
 return substring(string, index, length)
 
def str_fromstr(string, sub, length=None):
 index = string.find(sub)
 if index == -1:
 return None
 
 return substring(string, index, length)
 


if __name__ == '__main__':
 import doctest
 doctest.testmod()
 

 const_string = "hello world shortest program"
 

 print(substring(const_string, 12, 5))	# get "short"
 print(substring(const_string, 6, -1))	# get "world shortest program"
 print(str_wholeless1(const_string))		# "... progra"
 print(str_fromch(const_string, 'w', 5))	# "world"
 print(str_fromstr(const_string, "ro", 3))	# "rog"