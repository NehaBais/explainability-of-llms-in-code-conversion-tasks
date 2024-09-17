Here is the equivalent Java code for the given Python code:

```java
public class BitwiseOperations {

    public static void main(String[] args) {
        bitwiseBuiltIns(8, 27, 125);
        helperFuncs(8, 27);
    }

    private static void bitwiseBuiltIns(int width, int a, int b) {
        int mask = (1 << width) - 1;
        System.out.println("Bitwise AND: " + Integer.toBinaryString(a & b) & mask));
        System.out.println("Bitwise OR: " + Integer.toBinaryString(a | b) & mask));
        System.out.println("Bitwise XOR: " + Integer.toBinaryString(a ^ b) & mask));
    }

    private static void helperFuncs(int width, int a) {
        int top_bit_mask = 1 << (width - 1);
        int aa = a | top_bit_mask;
        System.out.println("Right Rotation: " + Integer.toBinaryString((a >> 1)) & ((1 << width) - 1))));
        System.out.println("Left Rotation: " + Integer.toBinaryString((a << 1) & ((1 << width) - 1)))));
    }

}
```

This Java code performs the same bitwise operations and shifts as the given Python code. The output is also printed in binary format for each operation.
