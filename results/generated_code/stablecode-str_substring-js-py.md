Here is the Python equivalent for your JavaScript code:

```python
str = "abcdefgh"
n = 2
m = 3

#  * starting from n characters in and of m length;
print(str[n:n+m]))  # ====> "cde"

#  * starting from n characters in, up to the end of the string;
print(str[n:])))  # ====> "cdefgh"

#  * whole string minus last character;
print(str[:-1]]))  # ====> "abcdefg"

#  * starting from a known character within the string and of m length;
print(str[n:n+m]]))  # ====> "bcd"

#  * starting from a known substring within the string and of m length. 
print(str[n:n+m]]))  # ====> "bcd"
```
In Python, you can use slicing to get a substring. The syntax for slicing in Python is `s[start:stop]`, where `s` is the string and `start` is the index of the first character in the substring. The `stop` parameter indicates the index of the last character in the substring.
For example, to get a substring starting from the 3rd character and ending at the 6th character, you can use the following code:

s = "abcdefgh"
start = 2
stop = 6
sub_str = s[start:stop]
print(sub_str)  # ====> "cde"

Note that in Python, string indices start from 0 and go up to `n-1`, where `n` is the length of the string. Therefore, to get a substring starting from the 3rd character (`start=2`) and ending at the 6th character (`stop=6`)), you can use the following code:

s = "abcdefgh"
start = 2
stop = 6
sub_str = s[start:stop]
print(sub_str)  # ====> "cde"
