Here is the Python equivalent of your Golang code:

```python
# Get two integers from the user
n1 = int(input("Enter first number: "))
n2 = int(input("Enter second number: "))

# Display a message if the first integer is:
# - less than,
# - equal to, or
# - greater than the second integer.

if n1 < n2:
    print(n1, "is less than", n2)
elif n1 == n2:
    print(n1, "is equal to", n2)
else:
    print(n1, "is greater than", n2)
```
This Python code does the same thing as your Golang code but in a more straightforward way. It first gets two integers from the user, then compares them using if-elif-else statements and prints appropriate messages based on the comparison result.
