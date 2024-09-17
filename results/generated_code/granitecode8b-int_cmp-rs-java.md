Here's the converted code from Rust to Java:
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
 } else if (a > b) {
 System.out.println(a + " is greater than " + b);
 }
 }
}
```
This code uses the `Scanner` class to get input from the user and stores the two integers in variables `a` and `b`. It then uses an `if-else` statement to check if `a` is less than, equal to, or greater than `b`, and prints a message accordingly.
You can test this code by running it and entering different values for `a` and `b` each time. The output should indicate which condition is true based on the input values.

