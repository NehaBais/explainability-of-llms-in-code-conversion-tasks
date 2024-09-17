In Java, you can perform bitwise operations on integers using the following operators:

* `|` for a bitwise OR
* `&` for a bitwise AND
* `^` for a bitwise XOR
* `~` for a bitwise NOT
* `<<` for a left shift
* `>>` for a right shift
* `>>>` for a right arithmetic shift
* `rotateLeft()` and `rotateRight()` for a left rotate and a right rotate, respectively.

Here's an example of how you could implement the code in Java:
```
public class Main {
    public static void main(String[] args) {
        byte a = 105;
        byte b = 91;
        System.out.println("a      = " + String.format("%08b", a));
        System.out.println("b      = " + String.format("%08b", b));
        System.out.println("a | b  = " + String.format("%08b", (byte)(a | b)));
        System.out.println("a & b  = " + String.format("%08b", (byte)(a & b)));
        System.out.println("a ^ b  = " + String.format("%08b", (byte)(a ^ b)));
        System.out.println("!a     = " + String.format("%08b", ~a));
        System.out.println("a << 3 = " + String.format("%08b", (byte)(a << 3)));
        System.out.println("a >> 3 = " + String.format("%08b", (byte)(a >> 3)));
        System.out.println("a >>> 3 = " + String.format("%08b", (byte)(a >>> 3)));
        System.out.println("a.rotateLeft(3) = " + String.format("%08b", a.rotateLeft(3)));
        System.out.println("a.rotateRight(3) = " + String.format("%08b", a.rotateRight(3)));
    }
}
```
Note that in Java, the `byte` type is used to represent an 8-bit signed integer value. The `String.format()` method is used to format the output as binary numbers with 8 digits (i.e., 0b1010101).
