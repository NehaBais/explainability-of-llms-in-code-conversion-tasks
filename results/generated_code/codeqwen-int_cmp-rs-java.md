Here's the equivalent Java code:

```java
import java.util.Scanner;

public class Main {
   public static void main(String[] args) {
       Scanner scanner = new Scanner(System.in);
       System.out.println("Enter first integer:");
       int A = scanner.nextInt();
       System.out.println("Enter second integer:");
       int b = scanner.nextInt();

       if (A < b) {
           System.out.println(A + " is less than " + b);
       } else if (A == b) {
           System.out.println(A + " equals " + b);
       } else {
           System.out.println(A + " is greater than " + b);
       }

       scanner.close();
   }
}
```

This Java program does the same thing as your Rust code: it reads two integers from the user, then checks which of the three comparison operators (<, ==, >) applies to those two numbers and prints out a message accordingly. It uses `System.out.println()` for printing messages and `Scanner` for reading input from the user.
