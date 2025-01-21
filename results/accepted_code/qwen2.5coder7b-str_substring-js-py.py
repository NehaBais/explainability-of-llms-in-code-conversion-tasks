# Define the string
str = "abcdefgh"

# Define the indices and lengths
n = 2
m = 3

# * Starting from n characters in and of m length
print(str[n : n + m])  # => "cde"

# * Starting from n characters in, up to the end of the string
print(str[n:])  # => "cdefgh"

# * Whole string minus last character
print(str[:-1])  # => "abcdefg"

# * Starting from a known character within the string and of m length
start_index = str.index("b")
print(str[start_index : start_index + m])  # => "bcd"

# * Starting from a known substring within the string and of m length
start_index = str.index("bc")
print(str[start_index : start_index + m])  # => "bcd"
