This is how you can convert the given C++ code to Python:
```python
def main():
    # Get two integers from the user.
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))

    # Display their sum.
    print("Sum of", a, "and", b, "is", a+b)
    
    # Display their difference.
    print("Difference of", a, "and", b, "is", a-b)
    
    # Display their product.
    print("Product of", a, "and", b, "is", a*b)
    
    # Display their integer quotient and remainder.
    quotient = int(a/b)
    remainder = a%b
    print("Integer quotient of", a, "and", b, "is", quotient)
    print("Remainder of", a, "divided by", b, "is", remainder)

    # If exponentiation operator is not available in Python, implement it manually.
    if "^" in dir():
        # Display their exponentiation.
        print("Exponentiation of", a, "and", b, "is", a**b)
```
In the provided Python code, `int(input())` is used to get integer inputs from the user. The division operator `/` and modulo operator `%` are automatically applied on integers in Python. If exponentiation operation is required, you can use the caret operator `^`. It's not available in standard Python so you need to implement it manually. 

This code doesn't include error handling for invalid input or division by zero. For handling these situations, you would add a try-except block as per your requirements.
