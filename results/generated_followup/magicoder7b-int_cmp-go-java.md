 The error is occurring because Java does not support pattern matching, which you're trying to do with `case` statements inside a `switch` statement. Patterns are a feature of Go that has not been implemented in Java yet.

The fix would be to use if-else constructs instead:

```java
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    
    System.out.println("Enter number: ");
    int n1 = scanner.nextInt();
    
    System.out.println("Enter number: ");
    int n2 = scanner.nextInt();
    
    if (n1 < n2) {
      System.out.println(n1 + " less than " + n2);
    } else if (n1 == n2) {
      System.out.println(n1 + " equal to " + n2);
    } else {
      System.out.println(n1 + " greater than " + n2);
    }
  }
}
```
