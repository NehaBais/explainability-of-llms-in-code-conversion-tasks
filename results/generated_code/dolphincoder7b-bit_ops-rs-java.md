Below is the Java code equivalent to the Rust code provided. I have omitted some details like error handling and formatting in this example for brevity:
```java
public class Main {
    public static void main(String[] args) {
        int a = 105; // Unsigned right shift, right arithmetic shift, left rotate, and right rotate are the same as signed shifts in Java.
        int b = 91;
        
        System.out.println("a      = " + Integer.toBinaryString(a));
        System.out.println("b      = " + Integer.toBinaryString(b));
        System.out.println("a | b   = " + Integer.toBinaryString(a | b));
        System.out.println("a & b   = " + Integer.toBinaryString(a & b));
        System.out.println("a ^ b   = " + Integer.toBinaryString(a ^ b));
        System.out.println("!a      = " + Integer.toBinaryString(!a)); // Notation for NOT operator is "~" in Java.
        System.out.println("a  << 3  = " + Integer.toBinaryString(a << 3));
        System.out.println("a  >> 3  = " + Integer.toBinaryString(a >> 3));
    }
}
```
