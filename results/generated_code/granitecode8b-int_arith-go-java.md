Here is the Java code that fulfills the given requirements:
```java
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner input = new Scanner(System.in);
 System.out.print("Enter first integer: ");
 int a = input.nextInt();
 System.out.print("Enter second integer: ");
 int b = input.nextInt();
 
 // Sum
 int sum = a + b;
 System.out.println(a + " + " + b + " = " + sum);
 
 // Difference
 int difference = a - b;
 System.out.println(a + " - " + b + " = " + difference);
 
 // Product
 int product = a * b;
 System.out.println(a + " * " + b + " = " + product);
 
 // Quotient and Remainder (truncated towards 0)
 int quotient = a / b;
 int remainder = a % b;
 System.out.println(a + " / " + b + " = " + quotient);
 System.out.println(a + " % " + b + " = " + remainder);
 
 // Exponentiation (no operator in Java)
 int exponentiation = (int) Math.pow(a, b);
 System.out.println(a + " ^ " + b + " = " + exponentiation);
 }
}
```
Note that the `Math.pow()` method is used to calculate the exponentiation, which returns a double value. To get an integer result, we cast it to an `int`. The quotient and remainder are calculated using the `/` and `%` operators respectively, which return truncated results towards 0. The sign of the remainder matches the sign of the first operand if both operands have the same sign, or the sign of the second operand if they have different signs.

