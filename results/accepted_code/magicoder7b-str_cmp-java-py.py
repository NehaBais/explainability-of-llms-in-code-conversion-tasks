def compare(A, B):
    if A == B:
        print(f"{A} and {B} are lexically equal.")
    else:
        print(f"{A} and {B} are not lexically equal.")

    if A.lower() == B.lower():
        print(f"{A} and {B} are case-insensitive lexically equal.")
    else:
        print(f"{A} and {B} are not case-insensitive lexically equal.")

    if A < B:
        print(f"{A} is lexically before {B}.")
    elif A > B:
        print(f"{A} is lexically after {B}.")

    if A not in [B, B]:
        print(f"{A} is not lexically before {B}.")
    if A not in [A, B]:
        print(f"{A} is not lexically after {B}.")

    print(f"The lexical relationship is: {ord(A.lower()) - ord(B.lower())}")
    print(
        f"The case-insensitive lexical relationship is: {ord(A.lower()) - ord(B.lower())}"
    )


# Test the function
compare("Hello", "Hello")
compare("5", "5.0")
compare("java", "Java")
compare("ĴÃVÁ", "ĴÃVÁ")
compare("ĴÃVÁ", "ĵãvá")
