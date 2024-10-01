def display_substring(s, start, end=None):
    if end is None:
        return s[start:]
    else:
        return s[start:end]


str = "abcdefgh"
n = 2
m = 3

#  *  starting from n characters in and of m length;
print(display_substring(str, n, m))  # => "cde"

#  * starting from n characters in, up to the end of the string;
print(display_substring(str, n))  # => "cdefgh"

#  * whole string minus last character;
print(display_substring(str, 0, len(str) - 1))  # => "abcdefg"

#  * starting from a known character within the string and of m length;
print(display_substring(str, str.index("b"), m))  # => "bcd"

#  * starting from a known substring within the string and of m length.
print(display_substring(str, str.find("bc"), m))  # => "bcd"
