def compare_strings(s1: str, s2: str) -> bool:
    return (s1 == s2) or (s1.lower() == s2.lower())


print(compare_strings("abcd", "abcd"))  # True
print(compare_strings("abcd", "dcba"))  # False
print(compare_strings("ABCD", "abcd"))  # False
print(compare_strings("123", "123"))  # True
print(compare_strings("123", "abc"))  # False
print(compare_strings("123", "123"))  # False
print(compare_strings("abcd".lower(), "abcd".lower()))  # True
