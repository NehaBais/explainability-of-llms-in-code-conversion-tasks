def main():
    s = "hello"
    print(s)

    s1 = (
        s + " world"
    )  # In Python, strings are immutable and cannot be changed in-place.
    # A new string object is created with the concatenation.
    print(s1)
