print(
    "abcd" == "abcd", # True
    "abcd" === "abcd", # False (Python's version of '==='))
     # True
    "ABCD" == "abcd", # False
    "ABCD" != "abcd", # True
    123 != "123", # True (Python can compare numeric strings, but they are not treated lexically by default)
    '123' < 'dcba', # True ('<' operator compares two strings lexicographically by default)
    'abcd' > 'dcba',  # False
    "ABCD".lower() == "abcd".lower(),  # True (the lower method in Python returns a string where all uppercase characters have been converted to lowercase))