Here is the equivalent Java code for your Golang code:
```java
public class Main {
    public static void bitwise(int A, int B) {
        System.out.printf("A: %016X\n", A);
        System.out.printf("B: %016X\n", B);

        // Bitwise logical operations
        System.out.printf("and: %016X\n", A & B);
        System.out.printf("or:  %016X\n", A | B);
        System.out.printf("xor: %016X\n", A ^ B);
        System.out.printf("not: %016X\n", ~A);

        if (B < 0) {
            System.out.println("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
            return;
        }
        int ua = A >>> 0;
        int ub = B >>> 0;

        // Logical shifts (unsigned left operand)
        System.out.printf("shl: %016X\n", ua << ub);
        System.out.printf("shr: %016X\n", ua >> ub);

        // Arithmetic shifts (signed left operand)
        System.out.printf("las: %016X\n", A << ub);
        System.out.printf("ras: %016X\n", A >>> ub);

        // Rotations
        System.out.printf("rol: %016X\n", (A << ub | Integer.rotateLeft(A, 16 - ub)));
        System.out.printf("ror: %016X\n", (Integer.rotateRight(A, ub) | A >>> (16 - ub)));
    }

    public static void main(String[] args) {
        int A = -460;
        int B = 6;
        bitwise(A, B);
    }
}
```
