In Python, the bitwise operations are performed using the `&` for AND, `|` for OR, and `^` for XOR. The `~` operator is used for NOT operation. The bit shifting operations are performed using `<<` for left shift and `>>` for right shift. Python also includes a third type of right shift known as arithmetic right shift.

Python's `int` type automatically handles overflow and underflow, so it can be used to perform shifts and rotates on numbers of any size. Here is the conversion of your JavaScript code:

```python
def bitwise(a, b):
    print("a AND b: ", a & b)
    print("a OR b: ", a | b)
    print("a XOR b: ", a ^ b)
    print("NOT a: ", ~a)
    print("a << b: ", a << b)  # left shift
    print("a >> b: ", a >> b)  # arithmetic right shift
```

Remember to pass two integers as the arguments when calling this function. Also, note that Python uses zero-based indexing and doesn't use the concept of bitwise rotate operation like C/C++. But it provides bit shifting operations.

Also, please be aware that the output from `~a` will be a negative number because Python's integers are not limited in size. The sign of `~a` is determined by whether its two's complement representation has a one as its most significant bit. If it does, `~a` will be negative; otherwise, it'll be positive.
