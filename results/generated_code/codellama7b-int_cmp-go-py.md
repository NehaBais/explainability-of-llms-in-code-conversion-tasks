Sure, I can help you with that! Here's the Python code equivalent of the given Go code:
```
# Python code
print("Enter first number: ")
num1 = int(input())
print("Enter second number: ")
num2 = int(input())
if num1 < num2:
    print(f"{num1} is less than {num2}")
elif num1 == num2:
    print(f"{num1} is equal to {num2}")
else:
    print(f"{num1} is greater than {num2}")
```
Note that in Python, we use the `input()` function to read input from the user and convert it to an integer using the `int()` constructor. We also use the `print()` function to display messages to the user. Finally, we use the `if-elif-else` construct to check for different comparison conditions and print the appropriate message.
