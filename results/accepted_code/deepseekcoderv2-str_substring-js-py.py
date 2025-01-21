# Original JavaScript code
str = "abcdefgh"

n = 2
m = 3

# starting from n characters in and of m length;
print(str[n : n + m])  # => "cde"

# starting from n characters in, up to the end of the string;
print(str[n:])  # => "cdefgh"

# whole string minus last character;
print(str[:-1])  # => "abcdefg"

# starting from a known character within the string and of m length;
print(str.find("b"))  # Assuming you want to find 'b' and then use its index
print(str[str.find("b") : n + m])  # => "bcd" (adjusting based on your requirement)

# starting from a known substring within the string and of m length.
substring_index = str.find("bc")
if substring_index != -1:
    print(str[substring_index : substring_index + m])  # => "bcd"
