Here's the equivalent Java code for the given Rust program:
```
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter first integer: ");
 int a = scanner.nextInt();
 System.out.print("Enter second integer: ");
 int b = scanner.nextInt();
 
 // Calculate the sum, difference, product, quotient, remainder, and exponentiation
 int sum = a + b;
 int difference = a - b;
 int product = a * b;
 int quotient = a / b; // rounds towards zero
 int remainder = a % b; // same sign as first operand
 
 System.out.println("Sum: " + sum);
 System.out.println("Difference: " + difference);
 System.out.println("Product: " + product);
 System.out.println("Quotient (rounded towards zero): " + quotient);
 System.out.println("Remainder (same sign as first operand): " + remainder);
 
 // Calculate exponentiation using the Math class
 double exponent = Math.pow(a, b);
 System.out.println("Exponentiation: " + exponent);
 }
}
```
Note that Java does not have a built-in integer division operator like Rust's `/`, so it uses `int` division instead, which rounds towards zero. Also, the `%` operator in Java returns the remainder with the same sign as the first operand, unlike Rust where it has undefined behavior for negative dividends and remainders.

