def boolean_ops(a: bool, b: bool):
    print(f"{a} and {b} -> {a and b}")
    print(f"{a} or {b} -> {a or b}")
    print(f"{a} xor {b} -> {a ^ b}")
    print(f"not {a} -> {!a}")

def main():
    boolean_ops(True, True)
    boolean_ops(True, False)
    boolean_ops(False, True)
    boolean_ops(False, False)