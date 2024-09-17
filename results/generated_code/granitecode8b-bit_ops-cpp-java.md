Here is the Java code that performs bitwise operations on two integers:
```java
public class BitwiseOperation {
 public static void main(String[] args) {
 int a = 10;
 int b = 5;
 
 System.out.println("a and b: " + (a & b));
 System.out.println("a or b:  " + (a | b));
 System.out.println("a xor b: " + (a ^ b));
 System.out.println("not a:   " + (~a));
 
 System.out.println("a shl b: " + (a << b));
 System.out.println("a shr b: " + (a >> b));
 System.out.println("a lsr b: " + (a >>> b));
 
 // Note: there is no bitwise rotate operator in Java, so we need to use a workaround using the Math.floorMod() method.
 int c = 15;
 int d = 3;
 System.out.println("c rol d: " + ((c << d) | (c >>> (32 - d))));
 System.out.println("c ror d: " + ((c >>> d) | (c << (32 - d))));
 }
}
```
In this code, we first define two integers `a` and `b`. We then perform bitwise AND, OR, XOR, and NOT operations on these two integers using the corresponding Java operators.
Next, we perform left shift (`<<`), right shift (`>>`), and logical right shift (`>>>`) operations on integer `a` with a shift amount of integer `b`. The left shift operator shifts the bits of `a` to the left by `b` positions, while the right shift operator shifts the bits of `a` to the right by `b` positions. The logical right shift operator performs an arithmetic shift, which discards the least significant bit (LSB) and fills in zeros as the most significant bit (MSB).
Finally, we perform left rotate (`rol`) and right rotate (`ror`) operations on integer `a` with a rotation amount of integer `b`. We use a workaround to achieve this using the `Math.floorMod()` method. In the `rol` operation, we first shift `a` left by `d` bits, then shift it right by `32 - d` bits to ensure that the resulting value is within the range of an integer. Similarly, in the `ror` operation, we first shift `a` right by `d` bits, then shift it left by `32 - d` bits to ensure that the resulting value is within the range of an integer.

