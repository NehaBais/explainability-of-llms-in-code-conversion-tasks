The equivalent code in Java would look like this:

```java
public class Main {
    public static void bitwise(int a, int b) {
        System.out.println("a:   " + Integer.toBinaryString(a));
        System.out.println("b:   " + Integer.toBinaryString(b));

        // Bitwise logical operations
        System.out.println("and: " + Integer.toBinaryString(a & b));
        System.out.println("or:  " + Integer.toBinaryString(a | b));
        System.out.println("xor: " + Integer.toBinaryString(a ^ b));
        System.out.println("not: " + Integer.toBinaryString(~a));

        if (b < 0) {
            System.out.println("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
            return;
        }

        int ua = a & 0xFFFF; // Extract the high 16 bits of 'a'
        int ub = b;          // The second integer in this case

        // Logical shifts (unsigned left operand)
        System.out.println("shl: " + Integer.toBinaryString(ua << ub));
        System.out.println("shr: " + Integer.toBinaryString(ua >>> ub));

        // Arithmetic shifts (signed left operand)
        System.out.println("las: " + Integer.toBinaryString(a << ub));
        System.out.println("ras: " + Integer.toBinaryString(a >>> ub));

        // Rotations
        System.out.println("rol: " + Integer.toBinaryString(ua << ub | (a >> 16 - ub)));
        System.out.println("ror: " + Integer.toBinaryString((int)((long)a) >> ub | a << 16 - ub));
    }

    public static void main(String[] args) {
        int a = -460;
        int b = 6;
        bitwise(a, b);
    }
}
```

This code uses the `Integer.toBinaryString` function to convert integers to their binary representation. Bitwise operations in Java can be performed using the corresponding bitwise operators such as `&`, `|`, `^`, `~`. For right shifts and rotations, Java provides the `>>` (unsigned) and `<<` (signed) operators, as well as the right shift operator (`>>>`) for unsigned left shift.
