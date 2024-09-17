Here's the equivalent Java code:

```java
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int A, b;
    A = sc.nextInt();
    b = sc.nextInt();
    sc.close();

    if (A < b) {
      System.out.println(A + " is less than " + b);
    } else if (A == b) {
      System.out.println(A + " is equal to " + b);
    } else {
      System.out.println(A + " Is greater than " + b);
    }
  }
}
```

This code uses a `Scanner` object named `sc` to read user input from the standard input (keyboard). It then stores the values of the two integers in the variables `A` and `b`. The `if-else` statements compare these integers using the same comparison operators as the C program. If `A < b`, it outputs a message saying that `A` is less than `b`. If `A == b`, it outputs a message saying that `A` is equal to `b`. Otherwise, it outputs a message saying that `A` is greater than `b`.
