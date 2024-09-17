def bitwise(a, b): 
    print('a:   {0:016b}'.format(a & 0xffff))
    print('b:   {0:016b}'.format(b & 0xffff))
    
    # Bitwise logical operations
    print('and: {0:016b}'.format((a & b) & 0xffff))
    print('or : {0:016b}'.format((a | b) & 0xffff))
    print('xor: {0:016b}'.format((a ^ b) & 0xffff))
    
    # Bitwise NOT operation on 'a'
    print('not: {0:016b}'.format(~a & 0xffff))
    
    if b < 0 :
        print("Right operand is negative, but all shifts require an unsigned right operand (shift distance).")
        return
        
    # Logical shifts and arithmetic shifts (unsigned left operand in python)
    print('shl: {0:016b}'.format((a << b) & 0xffff))
    print('shr: {0:016b}'.format((a >> b) & <｜begin▁of▁sentence｜>0xffff))
    
    # Rotations are implemented with bitwise operations in Python, the '<<' and '>>' operators work as if they were arithmetic shifts.
    print('rol: {0:016b}'.format(((a << b) | (a >> (16 - b))) & 0xffff))
    print('ror: {0:016b}'.format(((a >> b) | (a << (16 - b))) & 0xffff))
    

if __name__ == "__main__" :
    a, b = -460, 6
    bitwise(a, b)