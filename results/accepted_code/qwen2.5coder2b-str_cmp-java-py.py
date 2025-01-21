def compare(a, b):
    if a == b:
        print(f"'{a}' and '{b}' are lexically equal.")
    else:
        print(f"'{a}' and '{b}' are not lexically equal.")

    if a.lower() == b.lower():
        print(f"'{a}' and '{b}' are case-insensitive lexically equal.")
    else:
        print(f"'{a}' and '{b}' are not case-insensitive lexically equal.")

    if a < b:
        print(f"'{a}' is lexically before '{b}'.")
    elif a > b:
        print(f"'{a}' is lexically after '{b}'.")

    if a >= b:
        print(f"'{a}' is not lexically before '{b}'.")
    if a <= b:
        print(f"'{a}' is not lexically after '{b}'.")

    print(f"The lexical relationship is: {a.lower() > b.lower()}")


if __name__ == "__main__":
    compare("Hello", "Hello")
    compare("5", "5.0")
    compare("java", "Java")
    compare("ĴÃVÁ", "ĴÃVÁ")
    compare("ĴÃVÁ", "ĵãvá")
