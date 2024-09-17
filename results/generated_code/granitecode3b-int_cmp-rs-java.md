Sure, here's the Java code that does the same thing as the Rust code:
```java
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter first number: ");
 int a = scanner.nextInt();
 System.out.print("Enter second number: ");
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
Note that in Java, we don't need to specify the type of `a` and `b` since they are already defined as integers. Also, in Java, we can directly use comparison operators such as `<`, `==`, and `>` without using parentheses.

