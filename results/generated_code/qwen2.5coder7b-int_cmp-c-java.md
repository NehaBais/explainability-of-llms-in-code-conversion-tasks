Here's how you can convert the given C code into Java:
```java
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    
    System.out.println("Enter two integers: ");
    int a = scanner.nextInt();
    int b = scanner.nextInt();

    if (a < b)
      System.out.printf("%d is less than %d\n", a, b);

    if (a == b)
      System.out.printf("%d is equal to %d\n", a, b);

    if (a > b)
      System.out.printf("%d is greater than %d\n", a, b);
  }
}
```
The code above does the same thing as your C code. It asks for two integers from the user and then displays a message indicating whether the first number is less than, equal to, or greater than the second number.

Java uses `System.out.printf` instead of `printf`, which allows you to specify string format directly in the printf method. Also, Java does not require you to declare variable types (like `int`), but when declaring a variable in Java you must specify its type first.
