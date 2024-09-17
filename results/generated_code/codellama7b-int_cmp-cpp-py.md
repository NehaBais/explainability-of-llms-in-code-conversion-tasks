 Here's the equivalent code in Python:
```
a = input("Enter first number: ")
b = input("Enter second number: ")

try:
  a = int(a)
  b = int(b)
except ValueError:
  print("Invalid input. Try again.")
  return

# test for less-than
if a < b:
  print(f"{a} is less than {b}")

# test for equality
if a == b:
  print(f"{a} is equal to {b}")

# test for greater-than
if a > b:
  print(f"{a} is greater than {b}")
```
Note that in Python, the input function returns a string by default. To convert it to an integer, we use the `int()` function. Additionally, we used the f-string notation to display the output message.
