Sure, here's the equivalent Python code:
```
def print_logic(a, b):
    print(f"a and b is {a and b}")
    print(f"a or b is {a or b}")
    print(f"not a is {!a}")
```
In this code, we define a function called `print_logic` that takes two arguments `a` and `b`. Inside the function, we use f-strings to format the output of each logical operation. 

The `%d` in the printf statements has been replaced with `{}` for string formatting. The `!` operator is used to negate the value of `a`, yielding a boolean result. Finally, we print out the results using `print`. Note that you will need to pass in integer values when calling this function, as it does not handle boolean values.
