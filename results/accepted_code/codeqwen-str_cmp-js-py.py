print(
    "abcd" == "abcd",  # True
    "abcd" != "abcd",  # False
    "ABCD" != "abcd",  # True
    "123" < "123",  # False (numeric strings are not treated lexically in Python)
    "123" > "123",  # False
    "abcd".lower() == "abcd".lower(),  # True (case insensitive comparison)
)
