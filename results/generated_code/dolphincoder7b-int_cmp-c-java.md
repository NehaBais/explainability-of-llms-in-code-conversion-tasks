Here's the equivalent Java code:
```java
import java.util.Scanner;

public class LessThanEqualToGreaterThan {
   public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);

      int a, b;
      System.out.println("Enter two integers:");
      a = scanner.nextInt();
      b = scanner.nextInt();
      
      if (a < b)
         System.out.printf("%d is less than %d\n", a, b);

      if (a == b)
         System.out.printf("%d is equal to %d\n", a, b);

      if (a > b)
         System.out.printf("%d is greater than %d\n", a, b);
      
      scanner.close();
   }
}
```
