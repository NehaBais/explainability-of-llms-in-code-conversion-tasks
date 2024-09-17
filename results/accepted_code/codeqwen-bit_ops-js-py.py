def bitwise(A, b):
    print(f"A AND b: {A & b}")
    print(f"A OR b: {A | b}")
    print(f"A XOR b: {A ^ b}")
    print(f"NOT a: {~A}")
    print(f"A << b: {A << b}")  # left shift
    print(f"A >> b: {A >> b}")  # arithmetic right shift
    print(f"A >>> b: {A >> b}")  # logical right shift


# You can call the function with two integers as arguments like so:
bitwise(10, 2)
