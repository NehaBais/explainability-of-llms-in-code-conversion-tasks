def compare(a, b):
    if a == b:
        print(f"{a} equals {b}")
    elif a < b:
        print(f"{a} is less than {b}")
    elif a > b:
        print(f"{a} is greater than {b}")
    else:
        # "1" and 1 are an example of this as the first is type string and the second is type number
        print(
            f"{a} (type {type(a)}) and {b} (type {type(b)}) are not of the same type and cannot be compared."
        )
