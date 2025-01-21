 Here's the equivalent Java code for the provided JavaScript function:

```java
public class BitwiseOperations {
    public static void main(String[] args) {
        bitwise(5, 3); // Example values for a and b
    }

    public static void bitwise(int a, int b) {
        System.out.println("a AND b: " + (a & b));
        System.out.println("a OR b: " + (a | b));
        System.out.println("a XOR b: " + (a ^ b));
        System.out.println("NOT a: " + (~a));
        System.out.println("a << b: " + (a << b)); // left shift
        System.out.println("a >> b: " + (a >> b)); // arithmetic right shift
        System.out.println("a >>> b: " + (a >>> b)); // logical right shift
    }
}
```

This Java code performs the same bitwise operations as the provided JavaScript function, including AND, OR, XOR, NOT, left shift (`<<`), arithmetic right shift (`>>`), and logical right shift (`>>>`). The shift/rotate amounts are taken from the second integer `b`.
