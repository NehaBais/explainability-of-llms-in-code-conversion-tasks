s = "abcdefgh"
n = 2
m = 3

# starting from n characters in and of m length;
print(s[n : n + m])  # => 'cde'

# starting from n characters in, up to the end of string;
print(s[n:])  # => "cdefgh"

# whole string minus last character;
print(s[:-1])  # => "abcdefg"

# starting from a known character within the string and of m length;
b_index = s.find("b")
if b_index != -1:
    print(s[b_index : b_index + m])  # => 'bcd'
else:
    print("character not found in the string")

# starting from a known substring within the string and of m length.
bc_index = s.find("bc")
if bc_index != -1:
    print(s[bc_index : bc_index + m])  # => 'bcd'
else:
    print("substring not found in the string")
