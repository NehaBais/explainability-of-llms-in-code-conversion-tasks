The equivalent code in Python would look like this:

```python
def compare(a, b):
    if a < b:
        print(str(a) + " is less than " + str(b))
    elif a > b:
        print(str(a) + " is greater than " + str(b))
    else: 
        print(str(a) + " equals " + str(b))

# testing
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

compare(a, b)
```
The code above uses Python's built-in input function to take user input and convert it into integers. The compare function then checks if a is less than b, greater than b, or equal to b and prints the corresponding message.
