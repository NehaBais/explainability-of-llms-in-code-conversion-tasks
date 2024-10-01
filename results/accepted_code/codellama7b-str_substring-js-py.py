str = "abcdefgh"
n = 2
m = 3
print(str[n : n + m])  # => "cde"

str = "abcdefgh"
n = 2
print(str[n:])  # => "cdefgh"

str = "abcdefgh"
print(str[:-1])  # => "abcdefg"

str = "abcdefgh"
known_char = "b"
m = 3
print(str[str.index(known_char) : str.index(known_char) + m])  # => "bcd"

str = "abcdefgh"
known_substring = "bc"
m = 3
print(str[str.index(known_substring) : str.index(known_substring) + m])  # => "bcd"
