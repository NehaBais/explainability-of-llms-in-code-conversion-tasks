```java
import java.util.Scanner;
public class ComparingIntegers {
  public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      int b = sc.nextInt();
      if (a < b) {
          System.out.println("" + a + " is less than " + b);
      } else if (a == b) {
          System.out.println("" + a + " equals " + b);
      } else if (a > b) {
          System.out.println("" + a + " is greater than " + b);
      }
  }
}
```
Note: This code uses the `Scanner` class to read input from the user, and the `nextInt()` method to retrieve integers. The `if`, `else if`, and `else` statements are used to compare the two numbers and print the appropriate message based on the comparison result.
