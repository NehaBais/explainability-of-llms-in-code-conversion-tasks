Here is the Java version of your C++ code:

```java
public class Main {
    void bitwise(int A, int b) {
        System.out.println("A and b: " + (A & B)); // Note: parentheses are needed because & has lower precedence than <<
        System.out.println("A or b:  " + (A | B));
        System.out.println("A xor b: " + (A ^ B));
        System.out.println("not A: " + ~A);

        // Note: The C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
        // Is negative, or is greater or equal to the number of bits in the integer being shifted.
        System.out.println("A shl b: " + (A << B)); // Note: "<<" is used both for output and for left shift
        System.out.println("A shr b: " + (A >> B)); // typically arithmetic right shift, but not guaranteed
        int ua = A;
        System.out.println("A lsr b: " + (ua >>> B)); // logical right shift (guaranteed)

        // there are no rotation operators in Java, but as of Java 8 there is a standard-library rotate function.
        // The rotate function works for all rotation amounts, but the integer being rotated must always be an
        // unsigned integer.
        System.out.println("A rol b: " + Integer.rotateLeft(ua, B));
        System.out.println("A ror b: " + Integer.rotateRight(ua, B));
    }
}
```

Note that Java does not have an unsigned right shift operator (>>>), so we use the right rotate operator instead. Also, Java's `Integer` class provides the rotate functions `rotateLeft` and `rotateRight`.
