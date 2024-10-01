Below is the equivalent Java code for your JavaScript code:

```java
import java.util.Scanner; // Import scanner utility for input/output

public class Main {
    public static void main(String[] args) {
        int a, b; // Declare variables to store numbers entered by user

        // Create Scanner object for getting input from user
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter first number: ");
        a = scan.nextInt();  // Get the integer input from user
        System.out.println("Enter second number: ");
        b = scan.nextInt(); // Get the integer input from user

        int sum = a + b; // Calculate the sum of two numbers
        int difference = a - b; // Calculate the difference between the two numbers
        int product = a * b;  // Calculate the product of two numbers
        double quotient = (double)a / b; // Calculate the quotient of 'a' by 'b' and store in double data type 
                                       // to accommodate cases where 'b' is zero
        int remainder = a % b; // Calculate the remainder when 'b' is divided into 'a'

        System.out.println("sum: " + sum); // Print out the result of the sum
        System.out.println("difference: " + difference); 
        System.out.println("product: " + product); 
        System.out.printf("quotient (rounds towards zero): %.0f%n", quotient); // Print out the result of the division
        System.out.println("remainder: " + remainder);
    }
}
```
Please note that in Java, we have to cast 'a' and 'b' variables as doubles when performing division operations to ensure proper precision handling in quotient computation. We also added System.out.printf for formatting the quotient output correctly.
