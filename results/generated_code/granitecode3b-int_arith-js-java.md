Sure, here's the Java code that does what the JavaScript code does:
```java
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 
 System.out.print("Enter first number: ");
 int a = scanner.nextInt();
 
 System.out.print("Enter second number: ");
 int b = scanner.nextInt();
 
 int sum = a + b;
 int difference = a - b;
 int product = a * b;
 double division = (double)a / b; // This is necessary to get the integer quotient and remainder
 int remainder = a % b;
 
 System.out.println("Sum: " + sum);
 System.out.println("Difference: " + difference);
 System.out.println("Product: " + product);
 System.out.println("Division (rounded down): " + (int)division); // This rounds the division towards zero
 System.out.println("Quotient: " + Math.floor(division)); // This rounds the division towards negative infinity
 System.out.println("Remainder: " + remainder);
 }
}
```
Note that in Java, we use the `Scanner` class to read input from the user, and we use the `%d` syntax to print integers. The `Math.floor()` method is used to round down the division towards zero.

