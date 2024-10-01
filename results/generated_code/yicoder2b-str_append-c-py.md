The equivalent Python code for the given C code would be:

```python
# Python program to demonstrate strings in python

myString = "Good Morning to all"
print(myString) # Outputs: Good Morning to all
```
Here, we've directly appended a string (cstr) to another string literal (cstr2) without having to explicitly calculate the length of the new string. This is in contrast with the C code which was creating a string variable that could not hold enough space if it was assigned a value larger than its current allocated size, and thus causing runtime errors.
