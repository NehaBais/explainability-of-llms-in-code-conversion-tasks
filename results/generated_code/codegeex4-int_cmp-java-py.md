```python
try:
    nbr1 = int(input("Enter the first integer: "))
    nbr2 = int(input("Enter the second integer: "))

    if(nbr1<nbr2):
        print(str(nbr1) + " is less than " + str(nbr2))

    if(nbr1>nbr2):
        print(str(nbr1) + " is greater than " + str(nbr2))

    if(nbr1==nbr2):
        print(str(nbr1) + " is equal to " + str(nbr2))
except ValueError:
    pass
```
This Python code does the same thing as your Java code. It asks for two integers from the user and then displays a message based on their comparison. If an error occurs (such as when the user enters something that's not an integer), it simply ignores it.
