# JavaScript function to compare integers a and b
def compare(a, b):
    # Check if a equals b
    if a == b:
        print(str(a) + " equals " + str(b))
    # Check if a is less than b
    elif a < b:
        print(str(a) + " is less than " + str(b))
    # Check if a is greater than b
    else:
        print(str(a) + " is greater than " + str(b))
