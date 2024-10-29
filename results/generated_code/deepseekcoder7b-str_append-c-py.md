The equivalent Python code for the given C program would be:

```python
# Python doesn't require to specify length of strings. You can append as many characters as you want.
str = "Good Morning"
cstr = " to all"
cstr2 = " !!!"

# Append using '+=' operator, it's equivalent of strcat in C.
str += cstr

# Python string formatting can be used to append any other strings as well (equivalent of sprintf).
str = "%s%s" %(str,cstr2)

print(str)
```
In this code the '+=' operator is equivalent to strcat in C. And Python string formatting can be used to append any other strings as well (equivalent of sprintf). The size checking for insufficient space isn’t needed since Python handles dynamic allocation on its own and no specific memory size needs to be allocated.

