## Solution:
```python
# -*- coding: utf-8 -*-
import re

if __name__ == "__main__":
    s = 'abcdefgh'
    n, m = 2, 3
    
    # * starting from n characters in and of m length;
    print(s[n : n + m])  # => "cde"
    
    # * starting from n characters in, up to the end of the string;
    print(s[n:])  # => "cdefgh"
    
    # * whole string minus last character;
    print(s[:-1])  # => "abcdefg"
    
    # * starting from a known character within the string and of m length;
    c = 'b'
    n = s.find(c) + 1  # n == 2
    if n < 0: raise ValueError('{!r} not found'.format(c))
    print(s[n : n+m])  # => "bcd"
    
    # * starting from a known substring within the string and of m length. 
    s2 = 'bc'
    n = s.find(s2) + len(s2)  # n == 2
    print(s[n : n+m])  # => "bcd"
```

