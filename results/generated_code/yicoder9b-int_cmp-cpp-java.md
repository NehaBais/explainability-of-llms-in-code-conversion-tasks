Here's the equivalent Java code:

```java
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    int a, b;

    try (Scanner sc = new Scanner(System.in)){
      a = sc.nextInt();
      b = sc.nextInt();
    } catch (Exception e){
      System.err.println("could not read the numbers");
      return;
    }

    // test for less-than
    if (a < b)
      System.out.println(a + " is less than " + b);

    // test for equality
    if (a == b)
      System.out.println(a + " is equal to " + b);

    // test for greater-than
    if (a > b)
      System.out.println(a + " is greater than " + b);
  }
}
```
