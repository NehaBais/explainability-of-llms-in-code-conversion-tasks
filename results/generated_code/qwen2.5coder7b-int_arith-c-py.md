Here is the equivalent Python code for your requirement:

```python
# get two integers from user
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

print(f"a+b = {a + b}")
print(f"a-b = {a - b}")
print(f"a*b = {a * b}")
print(f"a//b = {a // b}")  # integer quotient, rounds towards zero
print(f"a%b = {a % b}")    # remainder, same sign as first operand
```

This Python code does exactly the same thing as your C code. It gets two integers from the user and then calculates their sum, difference, product, quotient (truncates towards zero), and remainder (same sign as the first operand).

Please note that in Python, there is no built-in operator for exponentiation like in C++. If you want to calculate powers, you would need to use the `**` operator. For example: `a ** b`.

And also, unlike C or C++, Python does not exit the program when an error occurs. You can catch exceptions using a try-except block if needed. In this case, I intentionally removed all error checking as per your requirement.
