This code performs various bitwise operations on two integers, a bitwise NOT on the first integer, and shifts and rotates. Here's the equivalent Java code:
```java
import java.util.Scanner;

public class BitwiseOperations {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two integers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        // Bitwise AND, OR, and XOR
        System.out.println("Bitwise AND: " + (a & b));
        System.out.println("Bitwise OR: " + (a | b));
        System.out.println("Bitwise XOR: " + (a ^ b));

        // Bitwise NOT
        System.out.println("Bitwise NOT: " + ~a);

        // Shifts and rotates
        int width = 8;
        int n = 1;
        System.out.println("Right shift: " + (a >> n));
        System.out.println("Left shift: " + (a << n));
        System.out.println("Right rotate: " + rotr(width, a, n));
        System.out.println("Left rotate: " + rotl(width, a, n));

        // Sign-extending arithmetic shifts
        int topBitMask = 1 << (width - 1);
        int aa = a | topBitMask; // a with top bit set
        System.out.println("Sign-extending arithmetic shift right: " + asr(width, a, n));
        System.out.println("Sign-extending arithmetic shift right (with top bit set): " + asr(width, aa, n));
    }

    private static int rotr(int width, int a, int n) {
        return (a >>> n) | (a << (width - n));
    }

    private static int rotl(int width, int a, int n) {
        return (a << n) | (a >>> (width - n));
    }

    private static int asr(int width, int a, int n) {
        int topBit = (a & topBitMask) >> (width - 1);
        return (a >>> n) | (topBit << (width - 1));
    }
}
```
The `main` method first prompts the user to enter two integers. It then performs various bitwise operations on these integers, including AND, OR, and XOR. It also performs a bitwise NOT operation and shifts and rotates the integers. Finally, it demonstrates how to use sign-extending arithmetic shifts.

The `rotr` method is used to perform right rotations of an integer by a given number of bits. The `rotl` method is used to perform left rotations. The `asr` method is used to perform sign-extending arithmetic shifts, which fills in the most significant bit with the value of the top bit before performing an arithmetic shift.

Note that in Java, the bitwise NOT operation is performed by prefixing the integer with a tilde (`~`), while in Python it is performed using the `~` operator. Additionally, in Java, the bitwise AND, OR, and XOR operations are performed using the `&`, `|`, and `^` operators respectively, while in Python they are performed using the `and`, `or`, and `xor` keywords.
