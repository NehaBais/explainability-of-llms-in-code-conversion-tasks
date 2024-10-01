def sconcat(s1, s2):
    return s1 + s2


if __name__ == "__main__":
    s = "hello"

    print(f"{s} literal")  # or
    print(s + " literal")

    s2 = sconcat(s, " literal")
    print(s2)
