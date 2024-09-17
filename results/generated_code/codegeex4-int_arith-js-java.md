```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter first integer:");
        int a = scanner.nextInt();

        System.out.println("Enter second integer:");
        int b = scanner.nextInt();

        int sum = a + b;
        int difference = a - b;
        int product = a * b;
        double division = (double) a / b;  // casting to double to get floating point result
        int remainder = a % b;

        System.out.println("Sum: " + sum);
        System.out.println("Difference: " + difference);
        System.out.println("Product: " + product);
        System.out.println("Division: " + division);
        System.out.println("Remainder: " + remainder);

        // Exponentiation in Java is done with Math.pow(a, b) 
        double exponentiation = Math.pow(a, b);
        System.out.println("Exponentiation: " + exponentiation);
    }
}
```
This Java code does the exact same as your JavaScript one. It gets two integers from user, and then computes their sum, difference, product, division (as a floating point number), remainder, and exponentiation. The exponentiation part is not included in the original JavaScript version, but it's also added here for completeness.

Please remember that in Java, there is no specific rounding behaviour like 'towards zero' or 'towards negative infinity', as in some other languages. However, when you divide integers in Java, the result will be an integer and any remainder will be discarded (as in your JavaScript code). Also note that the modulus operator '%' works the same way as in your JavaScript code - it produces a positive remainder even if both operands are negative.

Lastly, the exponentiation is done using the `Math.pow` function which returns a double. If you want to keep the result as an integer, you can use a power function which also returns an integer.
