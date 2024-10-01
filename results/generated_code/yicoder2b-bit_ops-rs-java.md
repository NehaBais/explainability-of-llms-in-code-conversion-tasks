Sure, here is the equivalent Java code for the given requirements.
```java
public class Main {

    public static void main(String[] args) {
        byte a = (byte)105;
        byte b = (byte)91;

        System.out.println("a      = " + Integer.toBinaryString(a));
        System.out.println("b      = " + Integer.toBinaryString(b));
        System.out.println("a | b  = " + Integer.toBinaryString(a | b));
        System.out.println("a & b  = " + Integer.toBinaryString(a & b));
        System.out.println("a ^ b  = " + Integer.toBinaryString(a ^ b));
        System.out.println("!a     = " + Integer.toBinaryString(~a));
        int leftShift = a << 3;
        System.out.println("a << 3 = " + Integer.toBinaryString(leftShift));
        int rightShift = a >> 3;
        System.out.println("a >> 3 = " + Integer.toBinaryString(rightShift));
    }
}
```
This Java code achieves the same results as the Rust code provided. In the original Rust code, bitwise shift operators (`<<` and `>>`) were not available while in Java they are used for shifting operations. Similarly, bitwise NOT operator (`~`) is replaced with arithmetic negation operation in Java (`-a`) to achieve the same result. Note that `b << 3` gives a left rotation of bits by 3 places and `b >> 3` gives a right rotation of bits by 3 places.
