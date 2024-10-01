def bitwise(a, b):
    print("a and b:", a & b)
    # Note: parentheses are needed because & has lower precedence than << in python
    print("a or b:", a | b)
    print("a xor b:", a ^ b)
    print("not a:", ~a if ~a >= 0 else -((~a) + 1))  # bitwise NOT

    # Note: the C/C++ shift operators are not guaranteed to work if the shift count is negative
    print("a shl b:", a << b)  # equivalent of left shift in python
    print("a shr b:", a >> b)  # equivalent of right shift in Python
    ua = a
    print("a lsr b:", ua >> b)
    # there are no rotation operators in Python, but as of Python 3.7 and beyond, the rotate function works for all rotation amounts
    print("a rol b:", "not supported")  # equivalent of left rotate
    print("a ror b:", "not supported")  # equivalent of right rotate
