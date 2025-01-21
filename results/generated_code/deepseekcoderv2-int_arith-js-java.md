 Sure, here is the equivalent Java code for the provided JavaScript script:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get two integers from the user
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);

        // Calculate and display their sum, difference, product, integer quotient, remainder, and exponentiation
        int sum = a + b;
        int difference = a - b;
        int product = a * b;
        double division = (double) a / b;  // Ensure division is done in floating point for accurate quotient
        int remainder = a % b;
        double exponentiation = Math.pow(a, b);  // Calculate exponentiation

        // Output the results
        System.out.println("a + b = " + sum);
        System.out.println("a - b = " + difference);
        System.out.println("a * b = " + product);
        System.out.println("a / b = " + division);  // Quotient is displayed as a floating point number
        System.out.println("a % b = " + remainder);  // Remainder operation
        System.out.println("a ^ b = " + exponentiation);  // Exponentiation operation

        scanner.close();
    }
}
```

### Explanation:
1. **Scanner for Input**: In Java, we use the `Scanner` class to read input from the command line.
2. **Parsing Command Line Arguments**: The arguments passed to the program are accessed via `args`.
3. **Arithmetic Operations**: We perform arithmetic operations like addition, subtraction, multiplication, division (with casting if necessary), and modulus.
4. **Division Result**: Since integer division in Java returns an integer result, we cast one of the operands to `double` for accurate quotient display.
5. **Exponentiation**: The `Math.pow()` method is used to calculate exponentiation.
6. **Output**: We use `System.out.println()` to print the results.

This Java code should provide the same functionality as your original JavaScript script when invoked with two integer arguments via the command line.
