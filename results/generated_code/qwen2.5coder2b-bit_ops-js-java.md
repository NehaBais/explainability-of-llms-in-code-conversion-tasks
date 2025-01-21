Sure, here is the equivalent Java code for your JavaScript function. Note that in Java, bitwise operations are performed differently compared to JavaScript.

```java
public class BitwiseOperations {
    public static void main(String[] args) {
        int a = 10;
        int b = 3;

        System.out.println("a AND b: " + (a & b));
        System.out.println("a OR b: " + (a | b));
        System.out.println("a XOR b: " + (a ^ b));

        // Not operation in Java is done using '~' operator
        System.out.println("NOT a: " + ~a);

        // Left shift operation in Java uses '<<' operator
        System.out.println("a << b: " + (a << b));

        // Right shift operations in Java use '>>' and '>>>'
        System.out.println("a >> b: " + (a >> b));
        System.out.println("a >>> b: " + (a >>> b));
    }
}
```

In this Java code:
- `~a` computes the bitwise NOT of `a`.
- `a << b` performs a left shift of `a` by `b` bits.
- `a >> b` performs an arithmetic right shift of `a` by `b` bits. Note that in Java, shifting with negative numbers works differently than in JavaScript (it shifts the bits to the left while keeping the sign bit intact).
- `a >>> b` performs a logical right shift of `a` by `b` bits. It also keeps the sign bit intact.

Please note that you need to ensure that the second integer (`b`) is non-negative for arithmetic right shift operation in Java.
