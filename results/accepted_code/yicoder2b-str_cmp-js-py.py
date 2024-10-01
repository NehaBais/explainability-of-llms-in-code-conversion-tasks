# Python doesn't have a strict type system like JavaScript
# It automatically converts types to perform comparisons

print(
    "abcd" == "abcd",  # True
    123
    == "123",  # Type Error: cannot compare 'str' and 'int' in comparison (Python throws error if types are different)
    "ABCD".lower() != "abcd".lower(),  # False (case sensitive)
    "ABCD".upper() <= "abcd".upper(),  # True
)
