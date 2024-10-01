class Compare:
    @staticmethod
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

        if A >= B:
            print(f"'{A}' is not lexically before '{B}'.")
        if A <= B:
            print(f"'{A}' is not lexically after '{B}'.")

        print(f"The lexical relationship is: {A.compare(B)}")
        print(
            f"The case-insensitive lexical relationship is: {A.lower().compare(B.lower())}"
        )


Compare.compare("Hello", "Hello")
Compare.compare("5", "5.0")
Compare.compare("java", "Java")
Compare.compare("ĴÃVÁ", "ĴÃVÁ")
Compare.compare("ĴÃVÁ", "ĵãvá")
