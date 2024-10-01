def bitwise(a, b):
    # Perform bitwise operations
    and_op = a & b
    or_op = a | b
    xor_op = a ^ b
    not_op = ~a & 0xffff  

    if b < 0:
        print("Right operand is negative, but all shifts require an unsigned right operand.")
        return

    ua = int(a)
    ub = int(b)

    # Perform logical shifts (unsigned left operand)
    shl_op = ua << ub
    shr_op = ua >> ub

    # Perform arithmetic shifts (signed left operand)
    las_op = a << ub
    ras_op = a >> ub 

    # Perform rotations
    rol_op = (ua<<ub | int(ua>>16 - ub)) & 0xffff
    ror_op = (int(ua>>ub) | ua << 16 - ub) & 0xffff

    print('and: ', bin(and_op))
    print('or:  ', bin(or_op))
    print('xor: ', bin(xor_op))
    print('not: ', bin(not_op))
    print('shl: ', bin(shl_op))
    print('shr: ', bin(shr_op))
    print('las: ', bin(las_op))
    print('ras: ', bin(ras_op))
    print('rol: ', bin(rol_op))
    print('ror: ', bin(ror_op))

if __name__ == "__main__":
    var a, b = -460, 6  # change as per your requirement
    bitwise(a, b)