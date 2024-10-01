Here's the equivalent Python code:

```python
# This will handle incorrect input gracefully. It will keep asking for an integer until it gets one.
def get_integer():
    while True:
        try:
            return int(input('Please enter an integer: ')) 
        except ValueError:
            print('This was not a valid integer. Please try again.')

a = get_integer()
b = get_integer()

# test for less-than
if (a < b):
    print(str(a) + " is less than " + str(b)) 

# test for equality
if (a == b):
    print(str(a) + " is equal to " + str(b))

# test for greater-than
if (a > b):
    print(str(a) + " is greater than " + str(b)) 
```
