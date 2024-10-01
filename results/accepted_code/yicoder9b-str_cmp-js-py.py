print(
    "abcd" == "abcd",  # True
    "abcd" == "abcd",  # True
    123 == 123,  # True
    123 == "123",  # False
    "ABCD" == "abcd",  # False
    "ABCD" != "abcd",  # True
    123 != 123,  # False
    123 != "123",  # True
    "abcd" < "dcba",  # True
    "abcd" > "dcba",  # False
    "ABCD".casefold() == "abcd".casefold(),  # True (case insensitive)
)
