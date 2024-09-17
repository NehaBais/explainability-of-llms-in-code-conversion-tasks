Sure! Here's the Python code that achieves the same result:
```
package main
import sys
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
This code uses the `input()` function to get user input for two numbers, and then uses a series of `if` statements to check which number is larger or smaller. The `elif` statement allows us to test multiple conditions in a single block of code.

