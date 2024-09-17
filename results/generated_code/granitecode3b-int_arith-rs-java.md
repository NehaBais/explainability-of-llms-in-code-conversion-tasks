Sure, here's the Java code that fulfills the requirement you specified:
```java
import java.util.Scanner;
 
public class Main {
 
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter the first integer: ");
 int a = scanner.nextInt();
 System.out.print("Enter the second integer: ");
 int b = scanner.nextInt();
 
 int sum = a + b;
 int difference = a - b;
 int product = a * b;
 int quotient = a / b; // Truncates towards zero
 int remainder = a % b; // Remainder is always positive or negative, depending on the sign of the operands.
 double exponentiation = Math.pow(a, b); // Exponentiation may throw an exception if the exponent is negative.
 

 System.out.println("sum:              " + sum);
 System.out.println("difference:       " + difference);
 System.out.println("product:          " + product);
 System.out.println("integer quotient: " + quotient);
 System.out.println("remainder:        " + remainder);
 if (exponentiation != Double.NaN) {
 System.out.println("exponentiation:   " + exponentiation);
 } else {
 System.out.println("exponentiation:   Error occurred during calculation.");
 }
 }
}
``` 
This Java code prompts the user to enter two integers, calculates their sum, difference, product, integer quotient, remainder, and exponentiation (if the operator exists), and then displays the results. The `Math.pow` method is used to calculate the exponentiation, and an exception is thrown if the exponent is negative.

