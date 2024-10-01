import ctypes

str = "my String"
cstr = "Changed "

# Allocating memory for str and initializing it with strdup() function
dup = (ctypes.c_char * len(str))()
dup.__setitem__[:] = str

# Concatenating cstr and dup
str += cstr + dup.value
print(str)
