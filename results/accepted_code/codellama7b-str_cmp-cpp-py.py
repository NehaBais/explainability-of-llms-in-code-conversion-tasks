# import the necessary modules
import re

# define the two strings to be compared
a = "1.2.Foo"
b = "1.3.Bar"

# perform case-sensitive comparison
if a == b:
    print("The strings are exactly equal.")
else:
    print("The strings are not exactly equal.")

# perform case-insensitive comparison by converting both strings to lowercase before comparing them
a = re.sub(r"\W+", "", a.lower())
b = re.sub(r"\W+", "", b.lower())
if a == b:
    print("The strings are exactly equal.")
else:
    print("The strings are not exactly equal.")

# perform numerical comparison by converting both strings to numbers using the float() function
a = float(a)
b = float(b)
if a == b:
    print("The numbers are numerically equal.")
else:
    print("The numbers are not numerically equal.")
