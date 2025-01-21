Here is the equivalent Python code for your Rust code:

```python
# Get two integers from user
a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

# Calculate and print their sum, difference, product, quotient, remainder
print(f"sum:              {a + b}")
print(f"difference:       {a - b}")
print(f"product:          {a * b}")
print(f"integer quotient: {a // b}") # truncates towards zero (floor division)
print(f"remainder:        {a % b}") # same sign as first operand
```

This Python code does the same thing as your Rust code. However, one important difference is that Python's floor division operator `//` truncates toward negative infinity for negative numbers, which is different from how Rust's `/` operator works (truncating towards zero). The `%` operator in both languages has the same sign behavior as Rust.
