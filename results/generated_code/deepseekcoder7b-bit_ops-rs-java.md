In Java, bitwise operations are performed using the `~` (Bitwise NOT), `<<` (left shift), and `>>` (right shift) operators. Bitwise AND is done with `&`, OR with `|`, XOR with `^`. These work in a similar manner to their counterparts in Rust.

The equivalent Java code for your given Rust code would be:
```java
public class Main {
    public static void main(String[] args) {
        byte a = 105;  // In java, u8 is replaced by byte
        byte b = 91;  
        
        System.out.println("a      = " + Integer.toBinaryString(a & 0xFF));
        System.out.println("b      = " + Integer.toBinaryString(b & 0xFF));
        System.out.println("a | b  = " + Integer.toBinaryString((a | b) & 0xFF));
        System.out.println("a & b  = " + Integer.toBinaryString((a & b) & 0xFF));
        System.out.println("a ^ b  = " + Integer.toBinaryString((a ^ b) & 0xFF));
        System.out.println("~a     = " + Integer.toBinaryString((~a) & 0xFF)); // bitwise not
        
        byte shift = 3;  // The amount of shift/rotate is done with a second byte variable in java, not integer
        System.out.println("a << 3  = " + Integer.toBinaryString((a << shift) & 0xFF));  
        System.out.println("a >> 3  = " + Integer.toBinaryString((a >> shift) & <｜begin▁of▁sentence｜>0xFF));  
    }
}
```
Note: In Java, there is no Bitwise NOT operator (`!`). We have to use `~` for bitwise NOT and we should apply it on integer type values only. And also note that, Java's Integer.toBinaryString() method doesn’t pad the leading zeroes of binary representation so we used `& 0xFF` with left shift and right shift operations as well to get a 8-bit string for output.

