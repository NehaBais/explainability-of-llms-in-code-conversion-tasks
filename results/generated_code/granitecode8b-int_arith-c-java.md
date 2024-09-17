Here is the Java code that meets the requirements:
```java
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter first integer: ");
 int a = scanner.nextInt();
 System.out.print("Enter second integer: ");
 int b = scanner.nextInt();
 System.out.println("a+b = " + (a + b));
 System.out.println("a-b = " + (a - b));
 System.out.println("a*b = " + (a * b));
 // Truncates towards 0
 System.out.println("a/b = " + (a / b));
 // Same sign as first operand
 System.out.println("a%b = " + (a % b));
 }
}
```
This code uses the `Scanner` class to read input from the user, and then performs the required arithmetic operations on the two integers. The output is printed using `System.out.println()`. Note that this code assumes that the user will enter valid integer values. Error handling for invalid input would need to be added in a production environment.

