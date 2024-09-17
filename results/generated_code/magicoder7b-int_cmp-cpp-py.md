 Here's how you can convert the C++ code to Python:

```python
def compare_integers():
    try:
        a = int(input("Enter first integer: "))
        b = int(input("Enter second integer: "))

        # test for less-than
        if a < b:
            print(str(a) + " is less than " + str(b))

        # test for equality
        elif a == b:
            print(str(a) + " is equal to " + str(b))

        # test for greater-than
        else:
            print(str(a) + " is greater than " + str(b))
    except ValueError:
        print("Please enter valid integers")

compare_integers()
```

In this Python script, we prompt the user to input two numbers. Then, based on each number's comparison to another, it prints out an appropriate message. If a `ValueError` is raised (which usually happens if the user inputs something other than a number), it simply informs the user they need to enter valid integers.
