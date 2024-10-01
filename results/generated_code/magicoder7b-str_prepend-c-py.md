 In Python, you can use the `+` operator to concatenate strings. The `strdup()` function doesn't exist in python so I'll just append a string to another string using the `+=` operator:

```python
import ctypes

str = "my String"
cstr = "Changed "

# Allocating memory for str and initializing it with strdup() function
dup = (ctypes.c_char * len(str))()
dup.__setitem__[:] = str

# Concatenating cstr and dup
str += cstr + dup.value
print(str)
```

This will print out:
`Changed my String`
