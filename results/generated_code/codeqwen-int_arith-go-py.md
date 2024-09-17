Here is the Python equivalent of your Golang code:

```python
A = int(input("enter two integers: "))
b = int(input())

print(f"{A} + {b} = {A+b}")
print(f"{A} - {b} = {A-b}")
print(f"{A} * {b} = {A*b}")
print(f"{A} // {b} = {A//b}")  # truncates towards 0
print(f"{A} %% {b} = {A%b}") # same sign as first operand
```

In Python, we use the `input()` function to get input from the user. The `int()` function is used to convert user input into integers. The `//` operator performs floor division in python and `%` operator performs modulus operation in python which are similar to their corresponding integer operations in Golang.
