def compare(A, B):
    if A == B:
        print("'{}' and '{}' are lexically equal.".format(A, B))
    else:
        print("'{}' and '{}' are not lexically equal.".format(A, B))

    if A.lower() == B.lower():
        print("'{}' and '{}' are case-insensitive lexically equal.".format(A, B))
    else:
        print("'{}' and '{}' are not case-insensitive lexically equal.".format(A, B))

    if A < B:
        print("'{}' is lexically before '{}'. ".format(A, B))
    elif A > B:
        print("'{}' is lexically after '{}'. ".format(A, B))
    else:
        print("The lexical relationship is not well defined. ")

    if A <= B:
        print("'{}' is not lexically before '{}'. ".format(A, B))
    elif A >= B:
        print("'{}' is not lexically after '{}'. ".format(A, B))
    else:
        print("The relationship is not well defined. ")

    print("The lexical relationship is: {}".format(A < B))
    print(
        "The case-insensitive lexical relationship is: {}\n".format(
            (A.lower()) < (B.lower())
        )
    )


compare("Hello", "Hello")
compare("5", "5.0")
compare("java", "Java")
compare("ĴÃVÁ", "ĴÃVÁ")
compare("ĴÃVÁ", "ĵãvá")
