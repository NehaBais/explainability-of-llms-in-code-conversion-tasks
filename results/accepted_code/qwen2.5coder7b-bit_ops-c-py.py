def bitwise(a, b):
    print(f"a and b: {a & b}")
    print(f"a or b: {a | b}")
    print(f"a xor b: {a ^ b}")
    print(f"not a: {~a}")
    print(f"a << n: {a << b}")  # left shift
    print(f"a >> n: {a >> b}")  # on most platforms: arithmetic right shift
    c = a  # convert the signed integer into unsigned, so it will perform logical shift
    print(f"c >> b: {c >> b}")  # logical right shift

    # there are no rotation operators in Python, but we can simulate them using bitwise operations
    def left_rotate(n, d):
        return (n << d) | (n >> (32 - d)) if d <= 31 else n

    def right_rotate(n, d):
        return (n >> d) | (n << (32 - d)) if d <= 31 else n

    print(f"a left rotate by {b}: {left_rotate(a, b)}")
    print(f"a right rotate by {b}: {right_rotate(a, b)}")


# Example usage:
bitwise(5, 2)
