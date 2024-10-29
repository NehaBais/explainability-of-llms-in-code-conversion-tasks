The Python version of the code is as follows:

Python does not support Unicode directly in its string datatype, but has a separate 'character' data type for unicode characters that we will use here. However, it natively supports strings with arbitrary character encodings - no matter if they are ASCII, UTF-8 or any other encoding the code points are not treated differently.
```python
s = "0123456789"
n = 3
m = 4
c = '2'
sub = "456"

print(s[n:n+m])  # starting from n characters in and of m length;
print(s[n:])     # starting from n characters in, up to the end of the string;
print(s[:-1])    # whole string minus the last character;
                  
# In Python, finding a single character substring using str.find() is easy and straightforward
found = s.find(c) 
if found != -1:
    print(s[found : found + m])   # starting from known character within string of m length;

# Finding substrings in Python strings can be done directly using str.find() as well, but we need to find the first occurrence of substring and then extract substring from there
found = s.find(sub) 
if found != -1:
    print(s[found : found + m])   # starting from known substring within string of m length;
```

