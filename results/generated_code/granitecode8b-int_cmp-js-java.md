Here's the converted Java code that meets the requirements:
```
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter first integer: ");
 int a = scanner.nextInt();
 System.out.print("Enter second integer: ");
 int b = scanner.nextInt();
 
 if (a < b) {
 System.out.println(a + " is less than " + b);
 } else if (a == b) {
 System.out.println(a + " equals " + b);
 } else {
 System.out.println(a + " is greater than " + b);
 }
 }
}
```
This code prompts the user to enter two integers, compares them using standard comparison operators (`<`, `==`, and `>`), and displays a message indicating which of the three conditions is true. The use of type coercion is avoided by ensuring that both inputs are of the same type (in this case, integers) before performing the comparison.
You can test the code by running it in a Java development environment or compiler and entering different integer values for `a` and `b`. You should see the expected output based on the comparison result.

