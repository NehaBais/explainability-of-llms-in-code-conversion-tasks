# Python string comparison operators:

c = "cat"
d = "dog"

if c == d:
    print(c, "is bytewise identical to", d)
if c != d:
    print(c, "is bytewise different from", d)
if c > d:
    print(c, "is lexically bytewise greater than", d)
if c < d:
    print(c, "is lexically bytewise less than", d)
if c >= d:
    print(c, "is lexically bytewise greater than or equal to", d)
if c <= d:
    print(c, "is lexically bytewise less than or equal to", d)

# Python is dynamically typed and will not directly compare a value of string type
# with a value of numeric type.

# A case insensitive comparison can be done with the lower() method in python

c_lower = c.lower()
d_lower = d.lower()

if c_lower == d_lower:
    print(c, "equal to", d, "when compared without considering case")
else:
    print(c, "not equal to", d, "when compared without considering case")

# Comparing numeric strings using int() function
num_str1 = "123"
num_str2 = "456"

if int(num_str1) > int(num_str2):
    print(num_str1, "is greater than", num_str2)
elif int(num_str1) < int(num_str2):
    print(num_str1, "is less than", num_str2)
else:
    print(num_str1, "and", num_str2, "are equal")

# Demonstrating other string comparisons
str_list = ["apple", "banana", "cherry"]
print("Index of 'banana' in the list:", str_list.index("banana"))
if "apple" in str_list:
    print("'apple' is present in the list")
else:
    print("'apple' is not present in the list")

# Demonstrating string concatenation
str_concat = c + d
print(str_concat)

# Demonstrating string formatting
name = "John"
age = 25
formatted_str = f"My name is {name} and I am {age} years old."
print(formatted_str)
