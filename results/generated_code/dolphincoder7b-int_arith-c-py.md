Sure, here's the equivalent Python code:
```
import sys

def main():
    if len(sys.argv[1:]) < 2 or int(sys.argv[1]) == 0:
        print("Usage:", sys.argv[0], "operand1 operand2")
        return 1

    a = int(sys.argv[1])
    b = int(sys.argv[2])

    # calculate the sum, difference, product, quotient, and remainder
    s = a + b
    d = a - b
    p = a * b
    q = a // b  # integer division rounds towards zero
    r = a % b   # same sign as a

    print("a+b =", s)
    print("a-b =", d)
    print("a*b =", p)
    print("a/b =", q, "(rounded)")  # add note about rounding here
    print("a%%b =", r)    # same sign as a

    return 0

if __name__ == "__main__":
    main()
```
Please note that Python uses `//` for integer division. The `//` operator in Python returns the floor of the result, which is equivalent to the integer division in C.
