def compare(A: str, B: str):
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
        print(
            f"'{A}' and '{B}' are not ordered."
        )  # This should never be printed, A == B was caught first


compare("Hello", "Hello")
compare("5", "5.0")
compare("java", "Java")
compare("ĴÃVÁ", "ĴÃVÁ")
compare("ĴÃVÁ", "ĵãvá")
