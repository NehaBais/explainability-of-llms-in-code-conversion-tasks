 Here is the equivalent Python code:
```
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
print("a+b =", a+b)
print("a-b =", a-b)
print("a*b =", a*b)
print("a/b =", a//b, ", remainder", a%b)
```
Note that in Python 3.x, the `input()` function returns a string object, so we need to convert it to an integer using the `int()` function before performing arithmetic operations on it. Also, in Python 2.x, the division operator (`/`) performs floating-point division, which means that the result may have a decimal part. To get the integer quotient without a decimal part, we can use the floor division operator (`//`), which rounds the result towards zero.
Also note that the remainder has the same sign as the second operand (b).
