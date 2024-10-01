Here is the equivalent Java code for your Golang program. Java does not support bitwise rotate operations directly like in GoLang. So additional logic to handle that has been added:

```java
public class Main {
    static void bitwise(int a, int b) {
        System.out.printf("a:   %032b\n", Integer.toBinaryString(a));
        System.out.printf("b:   %032b\n", Integer.toBinaryString(b));

        // Bitwise logical operations
        System.out.printf("and: %032b\n", a&b);
        System.out.printf("or:  %032b\n", a|b);
        System.out.printf("xor: %032b\n", a^b);
        System.out.printf("not: %032b\n", ~a);

        if (b < 0) {
            System.out.println("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
            return;
        }

        // Logical shifts (unsigned left operand)
        System.out.printf("shl: %032b\n", a<<b);
        System.out.printf("shr: %032b\n", a>>>b); // >>> is logical shift in Java

        // Rotations
        int size = Integer.SIZE;  // get the number of bits used to represent an int in two's complement binary format.
        System.out.printf("rol: %032b\n", (a<<b | a >>> (size - b)));
        System.out.printf("ror: %032b\n", (a >>> b | a << (size - b))); 
    }

    public static void main(String[] args) {
        int a = -460, b = 6;
        bitwise(a, b);
    }
}
```
