Here is the equivalent Python code:

```python
import math
import sys

def print_factors(nr):
    if nr < 1:
        print("\nFactors of {} not computed".format(nr))
        return
    print("\nFactors of {} : ".format(nr), end="")
    fs = [1]
    apf = lambda p, e: [f*p for f in fs for _ in range(e)]
    e = 0
    while nr % 2 == 0:
        nr //= 2
        e += 1
    fs = apf(2, e)
    for d in range(3, int(math.sqrt(nr)) + 1, 2):
        if d * d > nr:
            d = nr
        e = 0
        while nr % d == 0:
            nr //= d
            e += 1
        if e > 0:
            fs = apf(d, e)
    print(sorted(fs))
    print("Number of factors =", len(fs))

print_factors(-1)
print_factors(0)
print_factors(1)
print_factors(2)
print_factors(3)
print_factors(53)
print_factors(45)
print_factors(64)
print_factors(600851475143)
print_factors(999999999999999989)
```

Some notes: 

- In Python, instead of `append()`, we use the list comprehension syntax to add elements to a list.
- The `range()` function generates a sequence of numbers in a given range.
- In Python, variables can be declared without assigning them an initial value and they get automatically assigned `None`. 
- Also note that when it's necessary to declare data types like `int64` in Golang, we use `int` type in Python as it is dynamically typed language.
- Python has a built-in function `print()` which can print different arguments with a comma separating them and an optional end string parameter. The `end=""` argument ensures that the output of each call to `print_factors()` is printed on the same line.
