Here is the Java code equivalent to your Rust code. I'm assuming that you want to use `long` data type instead of `u8` because `long` can hold more bits than `u8`.

```java
public class Main {
    public static void main(String[] args) {
        long A = 105;
        long b = 91;
        System.out.printf("a      = %08d%n", A);
        System.out.printf("b      = %08d%n", b);
        System.out.printf("A | b  = %08d%n", A | b);
        System.out.printf("A & b  = %08d%n", A & b);
        System.out.printf("A ^ b  = %08d%n", A ^ b);
        System.out.printf("!A     = %08d%n", ~A);
        System.out.printf("A << 3 = %08d%n", A << 3);
        System.out.printf("A >> 3 = %08d%n", A >> 3);
        System.out.printf("A >>> 3 = %08d%n", A >>> 3);
        System.out.printf("A <<< 1 = %08d%n", A <<< 1);
        System.out.printf("A >>> 1 = %08d%n", A >>> 1);
    }
}
```

Here `System.out.printf` is used to print the binary representation of numbers with leading zeros up to 8 bits.

The following operations are used:

- Bitwise OR (`|`) - It will perform a bitwise OR operation on each pair of bits from both operands and return the result as a binary number.
   
- Bitwise AND (`&`) - It will perform a bitwise AND operation on each pair of bits from both operands and return the result as a binary number.

- Bitwise XOR (`^`) - It will perform a bitwise XOR operation on each pair of bits from both operands and return the result as a binary number.

- Bitwise NOT (`~`) - It is a unary operator which performs a bitwise NOT on its operand, which means it flips all the bits in its operand.

- Left shift (`<<`) - This operator shifts the bits of the number to the left by a specified number of places, and moves zeros into empty spaces at the right.

- Right shift (`>>`) - this operator shifts the bits of the number to the right by a specified number of places, and fills the vacated positions with sign bit (for signed numbers) or zero (for unsigned numbers).

- Unsigned right shift (`>>>`) - This is a zero-fill right shift operation. It performs a right shift on an integer and fills the empty spaces with zeros instead of adding extra bits from the sign bit.

- Left rotate (`<<<`) - This is left rotation of bits where the first bit moved to the last position of the number and other bits are shifted towards right.

- Right rotate (`>>>`) - this is a right rotation operation on an integer. Here, the first bit of the number moves to the first position of the number and the rest of the bits move towards left.
