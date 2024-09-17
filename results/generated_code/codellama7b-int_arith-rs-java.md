 Here is the converted code in Java:
```
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter first number: ");
    int a = sc.nextInt();
    System.out.println();

    System.out.print("Enter second number: ");
    int b = sc.nextInt();
    System.out.println();

    System.out.println("Sum: " + (a + b));
    System.out.println("Difference: " + (a - b));
    System.out.println("Product: " + (a * b));
    System.out.println("Integer Quotient (truncates towards zero): " + (a / b));
    System.out.println("Remainder (same sign as first operand): " + (a % b));
  }
}
```
The `std::env` module is not available in Java, so we have removed it. Instead, we have used the `Scanner` class to read input from the user. We have also changed the variable names to match the convention of Java.

Note that in Java, integer division always truncates towards zero, so the integer quotient is calculated as `a / b`. If you want to round the result towards negative infinity, you can use the `Math.floorDiv()` method.

Also, in Java, the remainder operator `%` has the same sign as its first operand by default. However, if the second operand is negative, the result will have the opposite sign of the first operand. To make the result have the same sign as the second operand, you can use the `Math.floorMod()` method.
