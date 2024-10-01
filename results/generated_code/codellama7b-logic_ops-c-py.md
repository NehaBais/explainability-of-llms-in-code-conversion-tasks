To convert this code from C to Python, you can use the following equivalent code:
```
def print_logic(a, b):
    print(f"a and b is {a and b}")
    print(f"a or b is {a or b}")
    print(f"not a is {not a}")
```
Explanation:

* In Python, there is no need to explicitly specify the data type of variables when declaring them. The data types are inferred automatically based on the values assigned to them.
* The `print()` function in Python is used to print output to the console, whereas in C, the `printf()` function is used for printing output.
* In Python, you can use the bitwise operators like `&`, `|`, and `~` to perform logical operations on booleans.
* The `not` operator is used to return the opposite value of a boolean.
