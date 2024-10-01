# Python code equivalent to the given Java code:

str_1 = "abcd"
str_2 = "ab"

print(str_1.startswith(str_2))  # returns True

str_1 = "abcd"
str_2 = "zn"

print(str_1.endswith(str_2))  # returns False

str_1 = "abab"
str_2 = "bb"

print(str_1.find(str_2))  # returns -1

str_1 = "abab"
str_2 = "ab"

loc = str_1.find(str_2)  # returns 0
print(loc)

loc = str_1.find(str_2, loc + 1)  # returns 2
print(loc)
