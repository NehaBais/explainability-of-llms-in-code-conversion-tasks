def get_substring(s, n, m=None):
    if m is None:
        m = len(s) - n
    return s[n : n + m]


str = "abcdefgh"

n = 2
m = 3

#  * starting from n characters in and of m length;
print(get_substring(str, n, m))  # => "cde"

#  * starting from n characters in, up to the end of the string;
print(get_substring(str, n))  # => "cdefgh"

#  * whole string minus last character;
print(get_substring(str, 0, len(str) - 1))  # => "abcdefg"

#  * starting from a known character within the string and of m length;
print(get_substring(str, str.index("b"), m))  # => "bcd"

#  * starting from a known substring within the string and of m length.
print(get_substring(str, str.index("bc"), m))  # => "bcd"
