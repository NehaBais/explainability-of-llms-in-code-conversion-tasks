Sure! Here's the Java code that achieves the same result:
```java
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
   System.out.println(a + " is equal to " + b);
  } else {
   System.out.println(a + " is greater than " + b);
  }
 }
}
```
This code uses a `Scanner` object to read the input from the user, and then uses an `if-else if-else` statement to compare the two integers and print the appropriate message for each case.

