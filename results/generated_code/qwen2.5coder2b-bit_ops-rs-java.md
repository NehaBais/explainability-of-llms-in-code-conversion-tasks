In Java, the bitwise operations are performed using `&`, `|`, `^`, `~`, `<<`, and `>>` operators respectively. Here is your code converted to Java:

```java
public class Main {
    public static void main(String[] args) {
        int a = 105;
        int b = 91;

        System.out.println("a      = " + Integer.toBinaryString(a));
        System.out.println("b      = " + Integer.toBinaryString(b));

        int orResult = a | b;
        int andResult = a & b;
        int xorResult = a ^ b;

        System.out.println("a | b  = " + Integer.toBinaryString(orResult));
        System.out.println("a & b  = " + Integer.toBinaryString(andResult));
        System.out.println("a ^ b  = " + Integer.toBinaryString(xorResult));

        int notA = ~a;

        System.out.println("!a     = " + Integer.toBinaryString(notA));

        int leftShift = a << 3;
        int rightShift = a >> 3;
        int leftRotate = (a * 0x1) % 256; // Assuming shift by 3 bits
        int rightRotate = ((a & 0xff) << 8) | (a >>> 8); // Assuming rotation by 3 bits

        System.out.println("a << 3 = " + Integer.toBinaryString(leftShift));
        System.out.println("a >> 3 = " + Integer.toBinaryString(rightShift));
        System.out.println("Left rotate: " + Integer.toBinaryString(leftRotate));
        System.out.println("Right rotate: " + Integer.toBinaryString(rightRotate));
    }
}
```

Please note that the Java code does not have direct equivalents for a left and right shift by a certain amount. The above codes use bitwise shifting as per your requirement, but they are not direct conversions of your Rust code.

Also, `a * 0x1 % 256` represents a left rotate by 3 bits and `(a & 0xff) << 8 | (a >>> 8)` represents a right rotate by 3 bits. These are assumptions as Java does not have direct equivalents for such operations.

Remember that the shift count must be an integer within the range of -128 to 127, otherwise it will throw an `ArithmeticException`.

Also, remember that Java's bitwise and arithmetic shifts are based on two's complement representation. The shift by `-3` would be equivalent to a right shift of `3` bits in Java, but note the difference.
