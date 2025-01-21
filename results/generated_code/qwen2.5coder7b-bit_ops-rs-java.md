Here is the equivalent code in Java:

```java
public class Main {
    public static void main(String[] args) {
        int a = 105;
        int b = 91;
        
        System.out.printf("a      = %8s%n", Integer.toBinaryString(a));
        System.out.printf("b      = %8s%n", Integer.toBinaryString(b));
        System.out.printf("a | b  = %8s%n", Integer.toBinaryString(a | b));
        System.out.printf("a & b  = %8s%n", Integer.toBinaryString(a & b));
        System.out.printf("a ^ b  = %8s%n", Integer.toBinaryString(a ^ b));
        System.out.printf("!a     = %8s%n", Integer.toBinaryString(~a));
        
        // Java does not support shifting negative numbers
        if (b >= 0) {
            System.out.printf("a << b = %8s%n", Integer.toBinaryString(a << b));
            System.out.printf("a >> b = %8s%n", Integer.toBinaryString(a >> b));
        } else {
            int shift = Math.abs(b);
            System.out.printf("a >>> b= %8s%n", Integer.toBinaryString(a >>> shift));
        }
        
        // Java does not support rotating
    }
}
```

This code will provide the same output as your Rust code, except that it handles negative shifts differently. In Rust, shifting a negative number is undefined behavior, while in Java, shifting a negative number is equivalent to shifting by its absolute value and then performing an unsigned right shift.

Note: Java does not support rotating of bits directly as Rust does with the rotate methods (`rotate_left` and `rotate_right`). However, you can implement your own methods for rotating bits if needed.
