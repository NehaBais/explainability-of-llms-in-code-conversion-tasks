Sure, here's the Python code that performs the same task as the given C++ code:
```
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
 
if a < b:
    print(f"{a} is less than {b}")
elif a == b:
    print(f"{a} is equal to {b}")
else:
    print(f"{a} is greater than {b}")
```
This Python code uses the `input()` function to get user input for the two integers, and then uses conditional statements (`if`, `elif`, and `else`) to test if the first integer is less than, equal to, or greater than the second integer. The output messages are printed using string formatting with f-strings.

