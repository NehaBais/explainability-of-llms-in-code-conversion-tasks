Here's the equivalent Java code for your C program:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();

        if (a < b) {
            System.out.println(a + " is less than " + b));
        } else if (a == b) {
            System.out.println(a + " is equal to " + b));
        } else if (a > b) {
            System.out.println(a + " is greater than " + b));
        }

        scanner.close();
    }
}
```

This Java code performs the same operation as your provided C code: it prompts the user to enter two integers and then prints a message indicating which of the three conditions (`<`, `=`, `>`)) was met.
