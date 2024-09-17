Sure, here's the Java code that performs the same operations as the Rust code:
```java
public class BitwiseOperations {
 public static void main(String[] args) {
 int a = 105;
 int b = 91;
 
 System.out.println("a      = " + Integer.toBinaryString(a));
 System.out.println("b      = " + Integer.toBinaryString(b));
 System.out.println("a | b  = " + Integer.toBinaryString(a | b));
 System.out.println("a & b  = " + Integer.toBinaryString(a & b));
 System.out.println("a ^ b  = " + Integer.toBinaryString(a ^ b));
 System.out.println("!a     = " + Integer.toBinaryString(!a));
 System.out.println("a << 3 = " + Integer.toBinaryString(a << 3));
 System.out.println("a >> 3 = " + Integer.toBinaryString(a >> 3));
 
 int c = ~a;
 System.out.println("~a     = " + Integer.toBinaryString(c));
 
 int d = a << b;
 System.out.println("a << b = " + Integer.toBinaryString(d));
 
 d >>= b;
 System.out.println("a >> b = " + Integer.toBinaryString(d));
 
 d >>>= b;
 System.out.println("a >>> b = " + Integer.toBinaryString(d));
 
 d <<= b;
 System.out.println("a << b = " + Integer.toBinaryString(d));
 
 d >>= b;
 System.out.println("a >> b = " + Integer.toBinaryString(d));
 }
}
``` 
This code performs the same operations as the Rust code, but in Java instead of using `u8` and shifting by a fixed amount (3), it uses integers to represent bits and performs bitwise operations on them. The output will be the same, but the implementation may differ slightly due to differences in how Java handles unsigned numbers and left/right shift operators.

