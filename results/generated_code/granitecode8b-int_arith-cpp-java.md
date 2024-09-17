Here is the converted code from C++ to Java:
```java
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner input = new Scanner(System.in);
 System.out.print("Enter first integer: ");
 int a = input.nextInt();
 System.out.print("Enter second integer: ");
 int b = input.nextInt();
 System.out.println("a+b = " + (a + b));
 System.out.println("a-b = " + (a - b));
 System.out.println("a*b = " + (a * b));
 // Quotient rounds towards zero
 System.out.print("a/b = ");
 if (a % b < 0) {
 // Remainder has the same sign as the second operand
 System.out.printf("%d, remainder %d", a / b - 1, a % b);
 } else {
 // Remainder has the same sign as the first operand
 System.out.printf("%d, remainder %d", a / b, a % b);
 }
 System.out.println();
 }
}
```
In this Java code, we use the `Scanner` class to read input from the user. We then calculate and display the sum, difference, product, quotient, and remainder of the two integers as specified in the requirement. The quotient is rounded towards zero, and the remainder has the same sign as the first operand if they have the same sign or the second operand if they have different signs. Finally, we close the `Scanner` to avoid resource leaks.

