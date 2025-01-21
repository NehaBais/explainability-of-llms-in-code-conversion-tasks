def compare(A: str, B: str) -> None:
    print(
        f"'{A}' and '{B}' are {'lexically equal' if A == B else 'not lexically equal'}."
    )

    # Case-insensitive comparison.
    A_lower = A.lower()
    B_lower = B.lower()
    print(
        f"'{A}' and '{B}' are {'case-insensitively lexically equal' if A_lower == B_lower else 'not case-insensitively lexically equal'}."
    )

    # Lexical ordering.
    comparison_result = A.__lt__(B)
    print(
        f"'{A}' is {'lexically before' if comparison_result else 'not lexically before'} '{B}'"
    )

    comparison_result = A.__gt__(B)
    print(
        f"'{A}' is {'lexically after' if comparison_result else 'not lexically after'} '{B}'"
    )

    # Using in-built functions for lexical comparison.
    print("The lexical relationship is:", A.compare(B))
    print("The case-insensitive lexical relationship is:", A.lower().compare(B.lower()))


# Invoke function
compare("Hello", "Hello")
compare(
    "5", "5.0"
)  # Note: This will not work as expected in Python because '5' is a string and '5.0' is a float.
compare("java", "Java")
compare("ĴÃVÁ", "ĴÃVÁ")
compare("ĴÃVÁ", "ĵãvá")
