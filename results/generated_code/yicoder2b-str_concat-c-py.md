The equivalent Python code for the given C code is:
```python
#include <stdio.h>
#include <stdlib.h>

def sconcat(s1, s2):
  s0 = bytes(s1+s2, 'utf-8')
  return str(s0, 'utf-8')

if __name__ == "__main__":
   s = "hello"
   print(s) # or print(s + " literal") 
   s2 = sconcat(s, " literal")
   print(s2)
   free(s2)
```
This code does the following:
1. It includes necessary libraries for string operations and memory allocation/deallocation.
2. Defines a function `sconcat` to concatenate two strings into one.
3. Mainly, in this Python program, we're using the built-in `str.join()` function to concatenate the variables `s1` and `s2`, instead of using strcat or similar C functions. We also convert bytes back to strings using utf-8 as Python doesn't have a direct equivalent for C's 'const char *'.
4. The `__name__ == "__main__":` condition is used in the Python interpreter to indicate that this module is being run directly, which is often the case when testing or running the script from a terminal.
