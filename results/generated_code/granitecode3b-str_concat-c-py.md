Here's the Python code that accomplishes the same task:
```python
def sconcat(s1, s2):
 return s1 + s2
 
s = "hello"
s2 = sconcat(s, " literal")
print(s) # or print("hello literal")
print(s2)
```
The output will be:

hello literal
helloworld literal

This Python code defines a function `sconcat` that takes two string arguments and returns their concatenation. In the main program, we create a string variable `s` with the value "hello" and concatenate it with the string literal "literal". We then print both `s` and `s2`, which will be the same because they contain the same string data.

