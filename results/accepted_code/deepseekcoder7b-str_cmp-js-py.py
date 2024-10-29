print(
    "abcd" == "abcd",  # true
    "abcd" is "abcd",  # true
    123 == "123",  # false (Python compares type with value, while JavaScript does not)
    123 != "123",  # true
    "ABCD" == "abcd",  # false
    "ABCD" != "abcd",  # true
    123 != "123",  # true (Python compares type with value, while JavaScript does not)
    123
    is not "123",  # true (In Python, `is not` checks if the values do not point to the same object in memory.)
    "abcd" < "dcba",  # false
    "abcd" > "dcba",  # true
    "ABCD".lower() == "abcd".lower(),  # true  (case insensitive)
)
