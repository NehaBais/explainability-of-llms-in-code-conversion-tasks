Below is the equivalent Java code:

```java
public class Main {
  public static void main(String[] args) {
    byte a = 105;
    byte b = 91;

    System.out.println("a      = " + String.format("%8s", Integer.toBinaryString(a & 0xFF)).replace(' ', '0'));
    System.out.println("b      = " + String.format("%8s", Integer.toBinaryString(b & 0xFF)).replace(' ', '0'));
    System.out.println("a | b  = " + String.format("%8s", Integer.toBinaryString((a | b) & 0xFF)).replace(' ', '0'));
    System.out.println("a & b  = " + String.format("%8s", Integer.toBinaryString((a & b) & 0xFF)).replace(' ', '0'));
    System.out.println("a ^ b  = " + String.format("%8s", Integer.toBinaryString((a ^ b) & 0xFF)).replace(' ', '0'));
    System.out.println("!a     = " + String.format("%8s", Integer.toBinaryString(~a & 0xFF).replace('1', 'x').replace('-', '1')).replace('x', '0'));
    System.out.println("a << 3 = " + String.format("%8s", Integer.toBinaryString((a << 3) & 0xFF)).replace(' ', '0'));
    System.out.println("a >> 3 = " + String.format("%8s", Integer.toBinaryString(a >> 3 & 0xFF)).replace(' ', '0'));
    System.out.println("a >>> 3 = " + String.format("%8s", Integer.toBinaryString((a>>>3) & 0xFF)).replace(' ', '0'));

    // Rotate left
    byte tempA1 = (byte)((a << 3) | (a >> (8 - 3)));
    System.out.println("Left rotate a by 3 bits = " + String.format("%8s", Integer.toBinaryString(tempA1 & 0xFF)).replace(' ', '0'));
    
    // Rotate right
    byte tempA2 = (byte)((a >> 3) | (a << (8 - 3)));
    System.out.println("Right rotate a by 3 bits = " + String.format("%8s", Integer.toBinaryString(tempA2 & 0xFF)).replace(' ', '0'));
  }
}
```

Some notes:

1. The bitwise NOT operator in Java is "~" while in Rust it's "!". However, "~a" will give you a negative value for `byte` or `short`, which may not be what we want when dealing with bitwise operations. For this reason, I used `~a & 0xFF`.

2. Java doesn't have built-in operators to perform a left rotate or right rotate on byte/integers.

3. To get the same behavior as Rust's println! for unsigned integers, we format the binary string to be 8 bits wide, padding with leading zeros if necessary using `String.format("%8s", Integer.toBinaryString(a & 0xFF))`.

4. We use `Integer.toBinaryString((a >>> 3) & 0xFF)` for a logical right shift (also known as zero fill right shift), which is equivalent to the Rust code `a >> 3` when dealing with unsigned integers.

5. The bitwise operations (`|`, `&`, `^`) in Java behave exactly like those in Rust, so we can just use them directly.
