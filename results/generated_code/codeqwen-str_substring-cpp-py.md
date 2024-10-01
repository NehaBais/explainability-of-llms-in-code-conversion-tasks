Here is the equivalent Python code:

```python
import re

s = "0123456789"

n = 3
m = 4
c = '2'
sub = "456"

print(s[n:n+m])
print(s[n:])
print(s[:-1])
print(s[s.find(c):n+m])
print(re.search(sub, s).start())  # We use re.search to get the index of the substring in the string and then slice from n to that index + m
```

Please note that Python uses 0-based indexing like C++ but unlike C++, it does not have a built-in substr function unlike C++. Instead, it has slicing feature which is similar to C++. The substring in Python can be defined by specifying start and end indices separated by a colon. The slicing goes up to but doesn't include the end index.

In the second print statement, `s[:-1]` denotes the whole string except the last character. 

As for finding substrings and their indices in python, we can use `find()` method for single characters or strings and `re` module for regular expressions. The `start()` method of match object returns starting index of matched substring. For the third print statement, I used regular expression because Python doesn't have a built-in function to find a substring in string directly. It uses re.search to get the match object and then use start() method to get the start index of matched substring.
