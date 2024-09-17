```java
public class BitwiseOperations {

    public static void bitwise(int a, int b) {
        System.out.printf("a:   %016b\n", a);
        System.out.printf("b:   %016b\n", b);

        // Bitwise logical operations
        System.out.printf("and: %016b\n", a & b);
        System.out.printf("or:  %016b\n", a | b);
        System.out.printf("xor: %016b\n", a ^ b);
        System.out.printf("not: %016b\n", ~a);

        if (b < 0) {
            System.out.println("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
            return;
        }

        // Logical shifts (unsigned left operand)
        System.out.printf("shl: %016b\n", (a << b));
        System.out.printf("shr: %016b\n", (a >> b));

        // Arithmetic shifts (signed left operand)
        System.out.printf("las: %016b\n", (a << b));
        System.out.printf("ras: %016b\n", (a >> b));

        // Rotations
        System.out.printf("rol: %016b\n", (a << b) | ((a >>> (32 - b)) & 0xffff));
        System.out.printf("ror: %016b\n", ((a >>> b) & 0xffff) | (a << (32 - b)));
    }

    public static void main(String[] args) {
        int a = -460, b = 6;
        bitwise(a, b);
    }
}
```
