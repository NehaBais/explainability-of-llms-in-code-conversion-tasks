Here's the Python code that meets the requirements:
```python
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
sum = a + b
difference = a - b
product = a * b
division = a // b  # integer division, rounds towards zero
remainder = a % b  # modulo operator, returns the remainder of division
exponentiation = pow(a, b) if b >= 0 else None
print("a + b =", sum)
print("a - b =", difference)
print("a * b =", product)
print("quotient of a / b =", division)
print("remainder of a / b =", remainder)
if exponentiation is not None:
 print("a ^ b =", exponentiation)
```
In this code, we use the `input()` function to get two integers from the user. We then perform integer arithmetic operations on these values and display the results. The `//` operator performs integer division, which rounds towards zero, while the `%` operator returns the remainder of division. The `pow()` function is used for exponentiation if the second operand is non-negative, otherwise we set the value to `None`. Finally, we print out the results using string formatting.

