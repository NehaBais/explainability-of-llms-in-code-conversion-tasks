The error message is "bad operand type int for unary operator '!'". This indicates that the Java compiler is having trouble with the use of the "!" (NOT) operator on an integer value, which can't be done directly in Java. The solution is to add a cast operation before performing the NOT operation. Casting an integer to a boolean or byte type will perform a bitwise NOT on the integer value.

The corrected code block will look like this:
```java
public class Main  {
  public static void main(String[] args)  {
    int a =
        (byte) 105; // Unsigned right shift, right arithmetic shift, left rotate, and right rotate are the
    // same as signed shifts in Java.
    int b = 91;

    System.out.println("a       = "  + Integer.toBinaryString(a));
    System.out.println("b       = "  + Integer.toBinaryString(b));
    System.out.println("a  | b    = "  + Integer.toBinaryString(a  | b));
    System.out.println("a  & b    = "  + Integer.toBinaryString(a  & b));
    System.out.println("a  ^ b    = "  + Integer.toBinaryString(a  ^ b));
    System.out.println(
         "!a      = "  + Integer.toBinaryString((byte) ~a)); // Notation for NOT operator is "~" in Java.
    System.out.println("a   << 3   = "  + Integer.toBinaryString(a  << 3));
    System.out.println("a   >> 3   = "  + Integer.toBinaryString(a  >> 3));
   }
}
```
