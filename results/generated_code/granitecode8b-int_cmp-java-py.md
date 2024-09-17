Here's the Python code that fulfills the requirement:
```
nbr1 = int(input("Enter the first integer: "))
nbr2 = int(input("Enter the second integer: "))
if nbr1 < nbr2:
 print(f"{nbr1} is less than {nbr2}")
elif nbr1 > nbr2:
 print(f"{nbr1} is greater than {nbr2}")
else:
 print(f"{nbr1} is equal to {nbr2}")
```
This code prompts the user to enter two integers and then uses an `if-elif-else` statement to compare them. The `input()` function is used to read input from the user, and the `print()` function is used to display the output message. The `f-string` formatting is used to insert the values of `nbr1` and `nbr2` into the output message.
To test the code, you can run it in a Python environment or editor that supports interactive input/output. Here's an example session:
```
Enter the first integer: 5
Enter the second integer: 3
5 is greater than 3
```

