```java
import java.util.Scanner;

public class MathOperations {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get two integers from the user
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        // Calculate the sum, difference, product, quotient, and remainder
        int sum = a + b;
        int difference = a - b;
        int product = a * b;
        int quotient = a / b;
        int remainder = a % b;

        // Print the results
        System.out.println("a+b = " + sum);
        System.out.println("a-b = " + difference);
        System.out.println("a*b = " + product);
        System.out.println("a/b = " + quotient + ", remainder " + remainder);

        scanner.close();
    }
}
```

**Note:**

* The `Math.round()` method can be used to round the quotient towards zero, towards negative infinity, or away from zero.
* The sign of the remainder matches the sign of the first operand.
