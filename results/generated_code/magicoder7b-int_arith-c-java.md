 Here is the Java equivalent of your given C code:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int a, b, sum, difference, product, quotient, remainder;

        System.out.println("Enter first integer:");
        a = scanner.nextInt();
        
        System.out.println("Enter second integer:");
        b = scanner.nextInt();

        sum = a + b;
        difference = a - b;
        product = a * b;
        quotient = a / b; // Will truncate towards zero by default in Java.
        remainder = a % b; // Remainder will have the same sign as first operand by default.
        
        System.out.println("Sum: " + sum);
        System.out.println("Difference: " + difference);
        System.out.println("Product: " + product);
        System.out.println("Quotient (truncated towards zero): " + quotient);
        System.out.println("Remainder (same sign as first operand): " + remainder);
    }
}
```

Please note that in the Java code, we're using Scanner class to get user inputs. Also, the operations are executed in the same order they were in C code, and the results are printed out. The `/` operator performs integer division in Java, but if you want it to perform floating-point division instead (rounding towards zero), use `double` type for your variables.

Remember that Java does not support exponentiation as an independent operation like C does; you'll have to implement it manually using a loop or recursion.
