Sure, here's the equivalent Python code for your requirement.
```python
# Get two integers from the user
a = int(input('Enter first integer: '))
b = int(input('Enter second integer: '))

# Display a message if the first integer is:
  # - less than, 
  # - equal to, or 
  # - greater than the second integer.
if a < b:
    print(f'{a} is less than {b}')
elif a == b:
    print(f'{a} is equal to {b}')
else:
    print(f'{a} is greater than {b}')
```
In this Python code, we're using conditional expressions (an elegant way to perform multiple if statements in one line). The 'elif' keyword stands for else if statement and it stops running when one of the conditions returns true. The 'else' clause will run when none of the previous conditions have been met.
