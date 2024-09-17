Here's how you can convert the given Python code into Java:

```java
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in));
    System.out.print("Enter value of a: ");
    int a = scanner.nextInt();
    System.out.print("Enter value of b: ");
    int b = scanner.nextInt();

    if (a < b) {
      System.out.println('a is less than b');
    } else if (a > b) {
      System.out.println('a is greater than b');
    } else if (a == b)) {
      System.out.println('a is equal to b');
    }
  }
}
```
Note: Java doesn't have print function like python. We can use `System.out.println()` instead which prints the given string followed by a new line.
