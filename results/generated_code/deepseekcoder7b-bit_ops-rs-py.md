In Python, bitwise operations are performed using the '&', '|' and '^' operators. However, there is no such thing as NOT operation in Python (unlike Rust), so we will use ~ operator to get binary complement of a number, which gives 2’s complement representation. 

For left shift, right shift, left rotate and right rotate operations on the first integer with a shift/rotate amount specified by the second integer, there are built-in functions in Python: '<<' is equivalent to bitwise left shift, '>>' is equivalent to signed right shift (also called arithmetic right shift), but for rotation we need to write our own methods. 

Here is a conversion of your Rust code into Python:
```python
def main():
    a = 105
    b = 91
    
    print(f"a      = {format(a, '08b')}")
    print(f"b      = {format(b, '08b')}")
    print(f"a | b  = {format(a | b, '08b')}")
    print(f"a & b  = {format(a & b, '08b')}")
    print(f"a ^ b  = {format(a ^ b, '08b')}")
    
    # Python does not have a built-in bitwise NOT operation. 
    # Hence we use ~ operator for binary complement of the number which gives 2’s complement representation of that number.
    print(f"~a + 1  = {format((~a + 1) & 0xff, '08b')}")  
    
    shift_amount = 3
    print(f"a << {shift_amount} = {format(a << shift_amount, '08b')}")
    print(f"a >> {shift_amount} = {format(a >> shift_amount, '08b')}")  # Right Shift
    
    # Rotate to the left and right can be implemented using slicing and concatenation.
    rotate_amount = 2
    print(f"Left rotate a by {rotate_amount}  = {format((a << rotate_amount) | (a >> (8 - rotate_amount)), '08b')}")   # Left Rotate
    print(f"Right rotate a by {rotate_amount} = {format((a >> rotate_amount) | (a << (8 - rotate<｜begin▁of▁sentence｜>-n>otate_amount)), '08b')}")  # Right Rotate
    
if __name__ == "__main__":
    main()
```
This Python code does the same bitwise operations as your Rust code, but with print statements using formatted strings. The binary representation is obtained by calling `format(number, '08b')`, which converts a number to its 8-bit binary string.

