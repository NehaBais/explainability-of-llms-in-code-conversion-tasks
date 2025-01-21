print(
    "abcd" == "abcd",  # True
    123 == "123",  # True
    123 == str(123),  # False
    "ABCD" == "abcd",  # False
    "ABCD" != "abcd",  # True
    123 != "123",  # False
    123 is not "123",  # True
    "abcd" < "dcba",  # True
    "abcd" > "dcba",  # False
    "ABCD".lower() == "abcd".lower(),  # True (case insensitive)
)
