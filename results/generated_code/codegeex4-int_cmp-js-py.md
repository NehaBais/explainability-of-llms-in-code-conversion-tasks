```python
def compare():
    # Get two integers from user
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))

    # Check conditions using comparison operators
    if a == b:
        print(a, "equals", b)
    if a < b:
        print(a, "is less than", b)
    if a > b:
        print(a, "is greater than", b)

compare()
```
This Python script will prompt the user to enter two integers and then it will compare them using the comparison operators. It will print out a message depending on whether the first integer is equal to, less than or greater than the second integer.

Please make sure that you run this in an environment where input() function can be used (like a Python interpreter). If you are running it in an interactive Python shell or Jupyter notebook, you should be fine.
