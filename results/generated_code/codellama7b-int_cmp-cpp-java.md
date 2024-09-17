 Here's the Java code that corresponds to the given C++ code:
```
import java.util.*;

public class CodeConversion {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int a, b;
    System.out.print("Enter two integers: ");
    while (sc.hasNextInt()) {
      a = sc.nextInt();
      b = sc.nextInt();
      break;
    }

    // test for less-than
    if (a < b) {
      System.out.println(a + " is less than " + b);
    }

    // test for equality
    else if (a == b) {
      System.out.println(a + " is equal to " + b);
    }

    // test for greater-than
    else {
      System.out.println(a + " is greater than " + b);
    }
  }
}
```
Note that in the Java code, we use `Scanner` class to read input from user and `System.out.print` and `System.out.println` are used for printing output. Also, we have used `break` statement inside the while loop to break out of the loop when both integers are entered successfully.

In addition, in the Java code, we use `if-else` statements to test each condition separately, so that all three comparison operators are used in the code.
