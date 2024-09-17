 Here is the code in Python:
```
a, b = int(input("Enter two integers: "))
print(f"{a} + {b} = {a+b}")
print(f"{a} - {b} = {a-b}")
print(f"{a} * {b} = {a*b}")
print(f"{a} / {b} = {a//b}") # truncates towards 0
print(f"{a} % {b} = {a%b}") # same sign as first operand
```
Note that in Python, the `/` operator performs floating-point division and the `//` operator performs integer division. The `%` operator returns the remainder of an integer division operation.

Also note that there is no exponentiation operator in Python like in Go. If you want to perform exponential calculations, you can use the `**` operator.
