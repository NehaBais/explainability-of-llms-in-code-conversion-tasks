Below is your requested Java code:

```java
public class BitwiseExample {
    public static void bitwise(int a, int b) {

        System.out.println("a and b: " + (a & b));
        System.out.println("a or b: " + (a | b));
        System.out.println("a xor b: " + (a ^ b));

        System.out.println("~a: " + (~a));

        System.out.println("a << n: " + (a << b)); // left shift
        System.out.println("a >> n: " + (a >> b)); // on most platforms: arithmetic right shift

        // convert the signed integer into unsigned, so it will perform logical shift
        int c = a;
        System.out.println("(unsigned)c >> b: " + ((c & 0xFFFFFFFFL) >>> b)); // logical right shift

        // left rotation
        c <<= b;
        c >>>= Integer.SIZE - b;
        System.out.println("a << rotate n: " + c);

        // right rotation
        c = a;
        c >>>= b;
        c <<= Integer.SIZE - b;
        System.out.println("a >> rotate n: " + c);
    }

    public static void main(String[] args) {
        bitwise(10, 2);
    }
}
```

Please note that Java does not have built-in functions for left and right rotation. To perform this operation we need to use a combination of shifts.

Also, keep in mind that the bitwise NOT (~a) operator inverts all bits in an integer, which can lead to unexpected results if a is a negative number because Java uses two's complement representation for signed integers. 

For this reason, the logical right shift (unsigned) is implemented using bitwise AND with 0xFFFFFFFFL before the operation. This masks off the upper 32-bits of the long integer, effectively treating the input as an unsigned 32-bit integer.

The rotation operations have been performed manually by shifting and then wrapping around to the beginning when necessary, in both left and right directions.

Remember to always be careful with bitwise operations and understand how they can lead to unexpected results if not handled properly.
