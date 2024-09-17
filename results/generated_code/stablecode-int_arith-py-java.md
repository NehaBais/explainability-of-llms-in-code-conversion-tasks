Here is the equivalent Java code for your Python script. 

This program takes two integer inputs from the user and performs various arithmetic operations, including finding the sum, difference, product, quotient (with rounding towards zero), remainder (sign matching the first or second operand if different), and exponentiation of the first number with the second number as the base.

```java
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        
        // Get two integers from user
        Scanner scanner = new Scanner(System.in));
        System.out.println("Enter first integer: ");
        int input1 = scanner.nextInt();
        System.out.println("Enter second integer: ");
        int input2 = scanner.nextInt();
        scanner.close();

        // Perform arithmetic operations on inputs
        int sum = input1 + input2;
        int difference = input1 - input2;
        int product = input1 * input2;
        long integerQuotient = (long)input1 / (long)input2;  // This performs integral division, rounding towards zero.
        double floatQuotient = (double)input1 / (double)input2;  // This performs floating-point division.
        int wholeRemainder = input1 % input2;  // This performs integer remainder operation with sign matching the first or second operand if different.
        double actualRemainder = Math.pow(floatQuotient, -1) * (input1 % input2);  // This calculates the actual remainder after exponentiation.

        // Display results
        System.out.println("Sum: " + sum));
        System.out.println("Difference: " + difference));
        System.out.println("Product: " + product));
        System.out.println("Integer quotient (towards zero): " + integerQuotient));
        System.out.println("Float quotient: " + floatQuotient));
        System.out.println("Whole Remainder: " + wholeRemainder));
        System.out.println("Actual Remainder after exponentiation: " + actualRemainder)));

    }
}
```

This Java code performs the same operations as your Python code, including finding the sum, difference, product, integer quotient (with rounding towards zero), remainder (sign matching the first or second operand if different), and exponentiation of the first number with the second number as the base. The results are displayed in the console output.

Note: This Java code assumes that the user will enter valid integer inputs. If this is not the case, appropriate error handling should be added to the code.
