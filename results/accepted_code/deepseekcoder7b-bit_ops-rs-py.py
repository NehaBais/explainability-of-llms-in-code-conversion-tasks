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