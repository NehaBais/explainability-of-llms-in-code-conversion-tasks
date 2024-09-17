package com.example;

import java.util.Arrays;

public class Main {
    static void bitwise(short a, int b) {

        System.out.format("a:   %016b" + "\n", Short.toUnsignedInt(a)));
        System.out.format("b:   %016b" + "\n", Integer.toUnsignedLong(b))));

        // Bitwise logical operations
        System.out.format("and: %016b" + "\n", Short.toUnsignedInt(a & b)));
        System.out.format("or:  %016b" + "\n", Short.toUnsignedInt(a | b)));
        System.out.format("xor: %016b" + "\n", Short.toUnsignedInt(a ^ b))));

        if (b < 0) {
            System.out.println("Right operand is negative, but all shifts require an unsigned right operand (shift distance)).");
            return;
        }
        short ua = Short.parseShort(String.format("%8s", Integer.toBinaryString(Short.toUnsignedInt(a))))));

        int ub = Integer.parseInt(String.format("%8s", Integer.toBinaryString(b))))));

        // Logical shifts (unsigned left operand)
        System.out.format("shl: %016b" + "\n", Short.toUnsignedInt(ua << ub))));
        System.out.format("shr: %016b" + "\n", Short.toUnsignedInt(ua >> ub))));

        // Arithmetic shifts (signed left operand)
        System.out.format("las: %016b" + "\n", Short.toUnsignedInt(a << ub))));
        System.out.format("ras: %016b" + "\n", Short.toUnsignedInt(a >> ub))));

        // Rotations
        System.out.format("rol: %016b" + "\n", Short.toUnsignedInt(a << ub | int16(uint16(a) >> (16 - ub)))))));
        System.out.format("ror: %016b" + "\n", Short.toUnsignedInt(int16(uint16(a) >> ub)) | a << (16 - ub)))));

    }

    public static void main(String[] args) {
        short varA = -460;
        int varB = 6;
        bitwise(varA, varB);
    }
}