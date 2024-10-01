Here's the Python code that performs the same operations as the C code you provided:
```python
str = "Good Morning"
cstr = " to all"
cstr2 = " !!!"
if len(str) + len(cstr) + len(cstr2) <= len(str):
 str += cstr + cstr2
 print(str)
else:
 print("Error: Insufficient space allocated for the string")
```
In this Python code, we first define the three string literals as variables. We then check if the total length of the strings combined is less than or equal to the length of the original string. If it is, we use the `strcat` function to concatenate the two string literals into the original string. Finally, we print the contents of the string variable.

