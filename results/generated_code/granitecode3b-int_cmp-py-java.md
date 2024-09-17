Here's the Java code that achieves the same functionality:
```java
import java.util.Scanner;
public class IntegerComparison {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter value of a: ");
 int a = scanner.nextInt();
 System.out.print("Enter value of b: ");
 int b = scanner.nextInt();
 
 if (a < b) {
 System.out.println("a is less than b");
 } else if (a > b) {
 System.out.println("a is greater than b");
 } else {
 System.out.println("a is equal to b");
 }
 }
}
```
The Java code uses a `Scanner` object to read user input for the values of `a` and `b`. It then checks if `a` is less than, greater than, or equal to `b`, and prints the appropriate message. The use of the `if-else if-else` statement ensures that all three comparison operators are used in the code.

