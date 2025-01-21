The error is caused by missing semicolons at the end of each `println` statement.

Fix: Add semicolons after each `println` statement to fix the syntax error.

Corrected code:
```java
import java.util.stream.IntStream;

public class BitwiseOperations {

    public static void main(String[] args) {
        int a = 5, b = 3;
        bitwise(a, b);
    }

    public static void bitwise(int a, int b) {
        System.out.println("a and b: " + (a & b)));
        System.out.println("a or b:  " + (a | b)));
        System.out.println("a xor b: " + (a ^ b))));

        int notA = ~a;
        System.out.println("not a:   " + notA));

        int aShiftL = a << b;
        System.out.println("a shl b: " + aShiftL));

        int aShiftR = a >> b;
        System.out.println("a shr b:  " + aShiftR));

        int arithmeticRightShift = (int) Math.round(a * Math.pow(2, -b))));
        System.out.println("a ror b: " + arithmeticRightShift));
    }
}
```
