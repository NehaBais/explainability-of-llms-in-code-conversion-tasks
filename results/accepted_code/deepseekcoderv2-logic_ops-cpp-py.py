def logic(bool1, bool2):
    if type(bool1) != bool or type(bool2) != bool:
        return "Type of argument must be a boolean"
    print("a and b is ", (bool1 and bool2))  # same for or and not


logic()
