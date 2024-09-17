Here is the equivalent Python code for your C code:

```python
def bitwise(A, b):
    print("a and b:", A & b)
    print("A or b:", A | b)
    print("A xor b:", A ^ b)
    print("not A:", ~A)
    print("A << n:", A << b)  # left shift
    print("A >> n:", A >> b)  # arithmetic right shift

    # convert the signed integer into unsigned, so it will perform logical shift
    c = A
    print("c >> b:", c >> b) # logical right shift

    return 0

def rotate_left(num, d):
    """Function for left rotation of a number with a given shift value"""
    result = num << d
    if result & (1<<31) != 0:  # Checking if the sign bit is set
        result |= ((1<<32)-1) ^ ((1<<31)-1) # Applying two's complement

    return result

def rotate_right(num, d):
    """Function for right rotation of a number with a given shift value"""
    result = num >> d

    if (num < 0 and d > 31):  # Checking if the sign bit is set
        result |= ((1<<32)-1) ^ ((1<<31)-1) # Applying two's complement

    return result
```

This code includes two functions, `rotate_left(num, d)` and `rotate_right(num, d)`, which perform left and right rotation of the given number with a shift value respectively. In case if a number after rotation has negative value we are applying Two's complement to it.
