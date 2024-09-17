def bitwise(a: int, b: int) -> None:
    print(f"a and b: {a & b}")
    print(f"a or b: {a | b}")
    print(f"a xor b: {a ^ b}")
    print(f"not a: {~a}")
    print(f"a << n: {a << b}}")  # left shift
    print(f"a >> n: {a >> b}}")  # arithmetic right shift (in Python, it performs logical shift with the `<<` operator))
    c = a
    print(f"c >> b: {c >> b}}")  # logical right shift


# there are no rotation operators in C 
return