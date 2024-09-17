#!/usr/bin/env python
# Get two integers from the user.
a = int(input('Enter value of a: '))
b = int(input('Enter value of b: '))

# Then, display a message if the first integer is:
# less than, equal to or greater than the second integer.
if a < b:
    print('a is less than b')
elif a > b:
    print('a is greater than b')
elif a == b:
    print('a is equal to b')
