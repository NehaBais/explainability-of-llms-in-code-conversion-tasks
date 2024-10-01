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
        print(f"'{A}' and '{B}' are not lexically ordered.")

    if A <= B:
        print(f"'{A}' is not lexically before '{B}'.")
    if A >= B:
        print(f"'{A}' is not lexically after '{B}'.")

    print(f"The lexical relationship is: {ord(A[0])-ord(B[0])}")

    print(
        f"The case-insensitive lexical relationship is: {ord(A.lower()[0])-ord(B.lower()[0])}"
    )
