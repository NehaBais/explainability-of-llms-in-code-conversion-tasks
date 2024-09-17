The given Rust code reads two integers from the user, and then displays a message based on whether the first number is less than, equal to, or greater than the second number. Here's how you can convert this into Python:

```python
# importing input function to take input from user
A = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

if A < b:
    print("%d is less than %d"%(A , b))
elif A == b:
    print("%d equals %d"%(A , b))
else:
    print("%d is greater than %d"%(A , b))
```

In Python, you use the `input()` function to get input from the user. The input values are then converted into integers using `int()`, so that we can perform mathematical operations on them. Python automatically converts string inputs to int or float when needed using the `int()` or `float()` functions respectively.
