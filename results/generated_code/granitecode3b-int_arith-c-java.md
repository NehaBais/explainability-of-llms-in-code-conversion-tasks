Sure, here's the Java code that fulfills the requirements you mentioned:
```java
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter first number: ");
 int a = scanner.nextInt();
 System.out.print("Enter second number: ");
 int b = scanner.nextInt();
 
 // sum
 int sum = a + b;
 System.out.println("Sum: " + sum);
 
 // difference
 int difference = a - b;
 System.out.println("Difference: " + difference);
 
 // product
 int product = a * b;
 System.out.println("Product: " + product);
 
 // quotient (integer division)
 long quotient = a / b;
 System.out.println("Quotient: " + quotient);
 
 // remainder (using modulus operator (%))
 int remainder = a % b;
 System.out.println("Remainder: " + remainder);
 
 // exponentiation (using Math.pow function)
 double exponent = Math.pow(a, b);
 System.out.println("Exponentiation: " + exponent);
 }
}
```
This code uses the `Scanner` class to read input from the user and store it in variables `a` and `b`. It then calculates the sum, difference, product, quotient, remainder, and exponentiation of these two numbers. The `Math.pow` function is used to calculate the exponentiation.

