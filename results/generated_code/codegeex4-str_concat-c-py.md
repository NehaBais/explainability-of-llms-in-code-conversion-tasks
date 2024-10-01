```python
def sconcat(s1, s2):
  return f'{s1}{s2}'

s = "hello"

print(f'{s} literal')
# or 
print(f'{s}" literal"')

s2 = sconcat(s, ' literal')
print(s2)
```

This python code does the same thing as your C code. It concatenates a string and prints it out. Note that in Python, we use f-strings to format strings, which is more efficient than using `str.format()` method or `%` operator. Also, there's no need to free memory in Python because Python has automatic garbage collection for managing memory.
