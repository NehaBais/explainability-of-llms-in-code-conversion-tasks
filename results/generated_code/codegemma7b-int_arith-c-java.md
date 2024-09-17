```java
import java.util.Scanner;

public class ArithmeticOperations {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get two integers from the user
        System.out.print("Enter the first integer: ");
        int a = scanner.nextInt();

        System.out.print("Enter the second integer: ");
        int b = scanner.nextInt();

        // Calculate the operations
        int sum = a + b;
        int difference = a - b;
        int product = a * b;
        int quotient = a / b; // Truncates towards zero
        int remainder = a % b; // Same sign as the first operand

        // Display the results
        System.out.println("Sum: " + sum);
        System.out.println("Difference: " + difference);
        System.out.println("Product: " + product);
        System.out.println("Quotient: " + quotient);
        System.out.println("Remainder: " + remainder);
    }
}
```

**Note:**

- The `truncate` method in Java performs integer division, which truncates towards zero.
- The `remainder` method in Java returns the remainder with the same sign as the first operand.
