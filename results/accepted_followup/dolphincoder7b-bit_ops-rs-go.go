package main

BITWISE_AND(a, b) int {
    return a & b;
}

BITWISE_OR(a, b) int {
    return a | b;
}

BITWISE_XOR(a, b) int {
    return a ^ b;
}

NOT(a) int {
    return ~a;
}

LEFT_SHIFT(a, shift_amount) int {
    return a  << shift_amount;
}

RIGHT_SHIFT(a, shift_amount) int {
    return a  >> shift_amount;
}

ARITHMETIC_RIGHT_SHIFT(a, shift_amount) int {
    return a  >>> shift_amount;
}

LEFT_ROTATE(a, rotate_amount) int {
    return (a << rotate_amount) | (a >> (8 * sizeof(a) - rotate_amount));
}

RIGHT_ROTATE(a, rotate_amount) int {
    return ((a & ^0) << (8 * sizeof(a) - rotate_amount)) | a;
}