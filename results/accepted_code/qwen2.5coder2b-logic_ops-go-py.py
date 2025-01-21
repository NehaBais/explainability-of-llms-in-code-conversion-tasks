def print_logic(a, b):
    print("a and b is", a and b)
    print("a or b is", a or b)
    print("not a is", not a)


# Test the function with some data points
print_logic(True, True)  # Should print "a and b is True" and "not a is False"
print_logic(False, True)  # Should print "a and b is False" and "not a is True"
print_logic(True, False)  # Should print "a and b is False" and "not a is False"
print_logic(False, False)  # Should print "a and b is False" and "not a is True"
