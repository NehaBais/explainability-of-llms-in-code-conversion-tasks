The given Rust code is reading command line arguments and performing the operations accordingly. Java doesn't have built-in support for command line arguments in the same way Rust does, so we need to modify it slightly to take input from a Scanner object. We will also need to perform integer division (which would normally be represented as `/` in Rust) by using a float to prevent integer truncation.

Here is the equivalent code:
```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the first integer:");
        int A = scanner.nextInt();

        System.out.println("Enter the second integer:");
        int b = scanner.nextInt();

        float C = (float) A / (float) b;  // For quotient we're using float to retain decimal part

        System.out.println("sum:                " + (A + b));
        System.out.println("difference:         " + (A - b));
        System.out.println("product:            " + (A * b));
        System.out.println("integer quotient:   " + ((int) C)); // truncates towards zero
        System.out.println("remainder:          " + (A % b)); // same sign as first operand

        scanner.close();
    }
}
```
For remainder, in Java, `%` operator works the same way it works for positive numbers - if the signs of both operands are different, the result is a negative number. If they are the same, then the result has the same sign as the first operand.

For integer quotient, we're using `(int) C` to truncate towards zero. In Java, if you divide two integers that don't have whole number result (for example 1 / 2), it would not give you an error or a warning, instead it will return the integer part of the division.
