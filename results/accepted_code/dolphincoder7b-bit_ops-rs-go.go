BITWISE_AND(a, b)
    return a & b;

BITWISE_OR(a, b)
    return a | b;

BITWISE_XOR(a, b)
    return a ^ b;

NOT(a)
    return ~a;

LEFT_SHIFT(a, shift_amount)
    return a << shift_amount;

RIGHT_SHIFT(a, shift_amount)
    return a >> shift_amount;

ARITHMETIC_RIGHT_SHIFT(a, shift_amount)
    return a >>> shift_amount;

LEFT_ROTATE(a, rotate_amount)
    return (a << rotate_amount) | (a >> (8 * sizeof(a) - rotate_amount));

RIGHT_ROTATE(a, rotate_amount)
    return ((a & ~0) << (8 * sizeof(a) - rotate_amount)) | a;