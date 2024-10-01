Here is the equivalent Python code for the given Rust program: 
Please note that Python's slicing works differently than Rust's, as it includes the starting index and excludes the end index in a range. Also, Python uses Unicode transparently which ensures UTF-8 and other multi-byte character encodings work correctly with string operations.
```python
s = "abc文字化けdef"
n = 2
m = 3

# Print 3 characters starting at index 2 (c文字)
print("".join(list(s)[n:n+m]))

# Print all characters starting at index 2 (c文字化けdef)
print("".join(list(s)[n:]))

# Print all characters except the last (abc文字化けde)
print("".join(list(s)[:-1]))

# Print 3 characters starting with 'b' (bc文)
cpos = s.find('b')
print("".join(list(s)[cpos:cpos+m]))

# Print 3 characters starting with "けd" (けde)
spos = s.find("けd")
print("".join(list(s)[spos:spos+m]))
```
The `join` function is used to convert a list of characters back into a string in the print statements, because slicing a string returns a list of individual characters. 
Please note that indexing in Python starts from 0 and it will count Unicode code points transparently, ensuring it works with any valid Unicode character regardless if it's in the Basic Multilingual Plane or above it.
