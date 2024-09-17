Below is the Java equivalent of your Golang code:

```java
import java.util.*;

public class Main {

    public static void bitwise(short a, short b) {
        System.out.printf("a:   %016x\n", Integer.parseUnsignedInt(String.format("%04X", (int)a)));
        System.out.printf("b:   %016x\n", Integer.parseUnsignedInt(String.format("%04X", (int)b)));

        // Bitwise logical operations
        System.out.printf("and: %016x\n", Integer.parseUnsignedInt(String.format("%04X", a & b)));
        System.out.printf("or:  %016x\n", Integer.parseUnsignedInt(String.format("%04X", a | b)));
        System.out.printf("xor: %016x\n", Integer.parseUnsignedInt(String.format("%04X", a ^ b)));
        System.out.printf("not: %016x\n", Integer.parseUnsignedInt(String.format("%04X", ~a)));

        if(b < 0) {
            System.out.println("Right operand is negative, but all shifts require an unsigned right operand (shift distance).");
            return;
        }
        int ua = a & 0xffff; // convert to unsigned
        int ub = b & 0xffffffff;

        // Logical shifts (unsigned left operand)
        System.out.printf("shl: %016x\n", Integer.parseUnsignedInt(String.format("%04X", ua << ub)));
        System.out.printf("shr: %016x\n", Integer.parseUnsignedInt(String.format("%04X", ua >> ub)));

        // Arithmetic shifts (signed left operand)
        System.out.printf("las: %016x\n", Integer.parseUnsignedInt(String.format("%04X", a << ub)));
        System.out.printf("ras: %016x\n", Integer.parseUnsignedInt(String.format("%04X", a >> ub)));

        // Rotations
        int rol = (a << ub) | (a >>> (16 - ub));
        int ror = (ua >>> ub) | (ua << (16 - ub));
        System.out.printf("rol: %016x\n", Integer.parseUnsignedInt(String.format("%04X", rol)));
        System.out.printf("ror: %016x\n", Integer.parseUnsignedInt(String.format("%04X", ror)));
    }

    public static void main(String[] args) {
        short a = -460, b = 6;
        bitwise(a, b);
    }
}
```

In Java, the bitwise operations are mostly similar to those in Golang. However, there is no equivalent operator for XOR rotation in Java standard library so you have to implement it manually like in `rol` and `ror`. Also note that the sign of the operand can be important for left shifts as well, so we need to cast them appropriately.
