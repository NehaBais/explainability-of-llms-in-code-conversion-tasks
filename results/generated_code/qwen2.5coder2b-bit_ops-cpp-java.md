```java
public class BitwiseOperations {
    public static void main(String[] args) {
        int a = 15; // binary: 1111
        int b = 2;  // binary: 0010

        bitwise(a, b);

    }

    private static void bitwise(int a, int b) {
        System.out.println("a & b: " + (a & b));
        System.out.println("a | b: " + (a | b));
        System.out.println("a ^ b: " + (a ^ b));
        System.out.println("not a:   " + (~a));

        // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
        // is negative, or is greater or equal to the number of bits in the integer being shifted.
        System.out.println("a << b: " + (a << b));
        System.out.println("a >> b: " + (a >> b)); // typically arithmetic right shift, but not guaranteed
        int ua = a;
        System.out.println("a lsr b: " + (ua >>> b));

        // there are no rotation operators in Java, but as of Java 8 there is a standard-library rotate function.
        // The rotate function works for all rotation amounts, but the integer being rotated must always be an
        // unsigned integer.
        System.out.println("a rol b: " + (ua.rotateLeft(b)));
        System.out.println("a ror b: " + (ua.rotateRight(b)));
    }
}
```
