def compare(A, B):
    if A == B:
        print(f"'{A}' and '{B}' are lexically equal.")
    else:
        print(f"'{A}' and '{B}' are not lexically equal.")

    if A.lower() == B.lower():
        print(f"'{A}' and '{B}' are case-insensitive lexically equal.")
    else:
        print(f"'{A}' and '{B}' are not case-insensitive lexically equal.")

    if A < B:
        print(f"'{A}' is lexically before '{B}'.")
    elif A > B:
        print(f"'{A}' is lexically after '{B}'.")
    else:
        print(f"'{A}' and '{B}' are lexically equal in terms of order.")

    if A <= B:
        print(f"'{A}' is not lexically after '{B}'.")
    elif A >= B:
        print(f"'{A}' is not lexically before '{B}'.")

    comparison = (A > B) - (A < B)
    print(f"The lexical relationship is: {comparison}")

    case_insensitive_comparison = (A.lower() > B.lower()) - (A.lower() < B.lower())
    print(
        f"The case-insensitive lexical relationship is: {case_insensitive_comparison}"
    )


# Test cases
compare("Hello", "Hello")
compare("5", "5.0")
compare("java", "Java")
compare("ĴÃVÁ", "ĴÃVÁ")
compare("ĴÃVÁ", "ĵãvá")
