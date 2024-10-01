def compare(a, b):
    if isinstance(a, int) and isinstance(b, int):
        if a == b:
            print(str(a) + " equals " + str(b))
        elif a < b:
            print(str(a) + " is less than " + str(b))
        else:
            print(str(a) + " is greater than " + str(b))
    else:
        print(
            str(a)
            + "{"
            + type(a).__name__
            + "} and "
            + str(b)
            + "{"
            + type(b).__name__
            + "} are not of the same type and cannot be compared."
        )
