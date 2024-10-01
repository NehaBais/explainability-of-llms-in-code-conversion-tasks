In Java the equivalent code would be:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        if (args.length != 2) {
            System.out.println("Please provide exactly two command line arguments.");
            return;
        }
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);

        System.out.println("sum:              " + (a + b));
        System.out.println("difference:       " + (a - b));
        System.out.println("product:          " + (a * b));
        System.out.println("integer quotient: " + (a / b));  // truncates towards zero 
        System.out.println("remainder:        " + (a % b));   // same sign as first operand
    }
}
```
This Java program reads two command line arguments, and performs the mathematical operations like sum, difference product, quotient and remainder similar to Rust's equivalent code. 

The quotient rounds towards zero in both languages since division of integers truncates towards zero in Rust (// operator) and in Java. The remainder has the same sign as first operand in both languages because the "%" operator in both Rust and Java gives the remainder with the same sign as the dividend.
