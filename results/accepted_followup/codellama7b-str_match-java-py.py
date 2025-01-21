# Python code:
str1 = "abcd"
str2 = "ab"
print(str1.startswith(str2))  # returns True
print(str1.endswith(str2))  # returns False

str3 = "abab"
str4 = "bb"
print(str3.contains(str4))  # returns False

str5 = "abab"
str6 = "ab"
loc = str3.index(str6)  # returns 0
loc = str3.index(str6, loc + 1)  # returns 2
