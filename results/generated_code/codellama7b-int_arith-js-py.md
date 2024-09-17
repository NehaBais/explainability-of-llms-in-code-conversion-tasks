```
#!/usr/bin/env python3

import sys

a = int(sys.argv[2])  # the first command-line argument is at index 1
b = int(sys.argv[3])  # the second command-line argument is at index 2

sum = a + b
difference = a - b
product = a * b
division = a / b
remainder = a % b  # This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator

print('a + b =', sum)  # The print function automatically formats the data according to the type of the argument. In this case, it will format the integer as a decimal number with no decimal places.
print('a - b =', difference)
print('a * b =', product)
print('a / b =', division)
print('a % b =', remainder)
```
Note that in Python 3, the `print` function is used to print data to the console, while in JavaScript, the `console.log` method is used. Also, in Python, you don't need to specify the format of the output like you do in JavaScript with the `%d` syntax.
Also, in Python, you don't need to use the `parseInt` function to convert strings to integers, you can simply use the built-in `int` function.
