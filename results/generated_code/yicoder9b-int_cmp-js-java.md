Here is the equivalent Java code for your JavaScript function:
This Java implementation uses a Scanner to get input from the user, and PrintWriter for output. It then compares the two integers using if-else statements with each of the comparison operators (<, ==, >). 
Please note that this Java code should be in a method or a class as it cannot be executed standalone. Also ensure to handle exceptions for better error handling.

```java
import java.util.Scanner;
import java.io.PrintWriter;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    PrintWriter printWriter = new PrintWriter(System.out, true);
    printWriter.println("Enter the first integer: ");
    int a = scanner.nextInt();
    printWriter.println("Enter the second integer: ");
    int b = scanner.nextInt();
    if (a == b) {
      printWriter.printf("%d equals %d\n", a, b);
    } else if (a < b) {
      printWriter.printf("%d is less than %d\n", a, b);
    } else {
      printWriter.printf("%d is greater than %d\n", a, b);
    } 
  }
}
```
