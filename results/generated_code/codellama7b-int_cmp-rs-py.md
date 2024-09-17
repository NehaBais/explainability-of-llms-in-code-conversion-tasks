 Here's the equivalent Python code:
```
import sys

def main():
    reader = sys.stdin
    buffer = ""
    lines = reader.readline()
    nums = [int(line.strip()) for line in lines]
    a = nums[0]
    b = nums[1]
    if a < b:
        print(f"{a} is less than {b}")
    elif a == b:
        print(f"{a} equals {b}")
    else:
        print(f"{a} is greater than {b}")

if __name__ == "__main__":
    main()
```
Note that in Python, we can use the `print()` function to display messages on the console. The `sys.stdin` object provides a way to read input from the standard input stream. We use the `readline()` method of the `reader` object to read two lines of input from the user.

We then convert each line into an integer using the `int()` function and store them in the `nums` list. Finally, we compare the values of `a` and `b` and print the appropriate message using the `print()` function.
