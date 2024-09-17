Here's the equivalent Java code:

```java
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int a, b;

        Scanner scanner = new Scanner(System.in);
        if (!scanner.hasNextInt()) {
            System.out.println("Input is not an integer");
            return;
        }

        a = scanner.nextInt();
        b = scanner.nextInt();

        // test for less-than
        if (a < b)
            System.out.println(a + " is less than " + b));

        // test for equality
        if (a == b)
            System.out.println(a + " is equal to " + b));

        // test for greater-than
        if (a > b)
            System.out.println(a + " is greater than " + b));
    }
}
```

This Java code does the same thing as your provided C++ code: It reads two integers from the standard input, tests if they are less-than, equal to, or greater-than each other and prints out a message accordingly.
