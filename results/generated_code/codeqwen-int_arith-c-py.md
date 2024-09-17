The given C code is already in Python. It takes two integer inputs and prints out their sum, difference, product, quotient, remainder and exponentiation. Here's the equivalent Python code:

```python
def main():
    A = int(input("Enter first number: "))
    b = int(input("Enter second number: "))
    
    sum = A + b
    difference = A - b
    product = A * b
    quotient = A // b  # Truncates towards 0 (in Python 3)
    remainder = A % b   # Same sign as first operand (in Python 3)
    power = A ** b

    print("A+b =", sum)
    print("A-b =", difference)
    print("A*b =", product)
    print("A//b =", quotient)  # Truncates towards zero (in Python 2/3)
    print("A%b =", remainder)   # Same sign as first operand (in Python 2/3)
    print("A**b =", power)

if __name__ == "__main__":
    main()
```

Note: The Python code is designed to run in a terminal or console. When you run it, you are asked to enter two integers. Then it computes and prints out their sum, difference, product, quotient, remainder and exponentiation.
