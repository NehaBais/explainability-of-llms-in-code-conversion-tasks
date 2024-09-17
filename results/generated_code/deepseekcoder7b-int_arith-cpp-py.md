Here is the Python equivalent of your C++ code. Note that in python, you don't need to define data types while taking user input so I have removed int from stdin. Also, the operator for exponentiation is ** not ^. 

For division, Python rounds towards negative infinity when performing '//' operation (floor division). For remainder, it follows the standard modulus behavior of returning a remainder in range -n < r < n where n is the divisor and r is the remainder.

```python
a = int(input("Enter first number: "))  # Take input for a
b = int(input("Enter second number: "))  # Take input for b

print("a+b =", a + b)
print("a-b =", a - b)
print("a*b =", a * b)
print("a/b (floor division)=", a // b, ", remainder=", a % b)  # Floor division and modulus operation
print("a**b (exponentiation) =", a ** b)   # Exponentiation using ** operator. Python has no ^ operator to perform exponentiation.
```
In python, the '//' operator is called floor division which rounds towards negative infinity. It means that it always returns a result that is less than or equal to the exact mathematical value of the division operation in every direction. For example -9//4 will return -3 not -2 as Python follows rounded-towards-zero convention for division operations unlike C++ where it rounds towards negative infinity resulting in -2 in this case.

