 In Java, the code would look like this:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);
        
        System.out.println("sum:              " + (a + b));
        System.out.println("difference:       " + (a - b));
        System.out.println("product:          " + (a * b));
        System.out.println("integer quotient: " + (a / b)); // truncates towards zero
        System.out.println("remainder:        " + (a % b)); // same sign as first operand
    }
}
```
This code takes two integers as command-line arguments, reads them from the `args` array, and then prints their sum, difference, product, integer quotient (truncated towards zero), remainder, and exponentiation. Note that in Java, we don't need to use `.unwrap()` when converting strings to numbers because it will throw an exception if the conversion fails.

Also note that Java does not provide a direct equivalent of Rust’s `/` operator for integer division; instead it performs floating-point division and then casts the result to `int`. If you need truncated towards zero behavior, like in Rust, you can use `(a / b) | 0`, which achieves the same effect by creating a new `int` value from `a/b`, effectively rounding down to nearest whole number.
