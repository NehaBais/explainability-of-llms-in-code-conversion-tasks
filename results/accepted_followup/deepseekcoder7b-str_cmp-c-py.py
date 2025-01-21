def compare(a, b):
    print("Comparing strings {0} and {1}:".format(a, b))

    # exact equality
    if a == b:
        print("- Exact Equality : True")
    else:
        print("- Exact Equality : False")

    # inequality (i.e., the inverse of exact equality)
    if a != b:
        print("- Inequality : True")
    else:
        print("- Inequality : False")

    # lexical order
    if a < b:
        print("- Lexically ordered before than the other : True")
    else:
        print("- Lexically ordered before than the other : False")

    if a > b:
        print("- Lexically ordered after than the other : True")
    else:
        print("- Lexically ordered after than the other : False")

    # case sensitive comparison
    if a.lower() == b.lower():
        print("- Case Sensitive Comparison : True")
    else:
        print("- Case Sensitive Comparison : False")

    # case insensitive comparison
    if a.upper() == b.upper():
        print("- Case Insensitive Comparison : True")
    else:
        print("- Case Insensitive Comparison : False")
    print("\n")


compare("ball", "bell")
compare("ball", "BALL")
compare("YUP", "YEP")
compare("ball", "BELL")
compare("ball", "BALL")
compare("YUP", "yep")
