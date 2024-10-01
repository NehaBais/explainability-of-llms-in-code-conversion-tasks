The Python equivalent of the given Golang code is:

```python
a = int(input('Enter the first integer: '))
b = int(input('Enter the second integer: '))
print(f'{a} + {b} = {a+b}')
print(f'{a} - {b} = {a-b}')
print(f'{a} * {b} = {a*b}')
print(f'{a} / {b} = {a//b} (Rounds towards negative infinity)') # truncates towards 0 in Go, Python rounds towards -infinity
print(f'{a} % {b} = {a%b} (Same sign as the first operand)') # same sign as first operand in Go
# Python does not have a built-in exponentiation operator, but it has `pow` function for computing power
``` 
In Python, there is no integer division operator (`/`) like in Golang. Instead, we use `//` which will round the result towards negative infinity, similar to how Go's `/` operator truncates towards zero.
Also note that Python does not have an exponentiation operator (`**` for power) unlike Golang. Instead, it provides a built-in function called `pow()`.
