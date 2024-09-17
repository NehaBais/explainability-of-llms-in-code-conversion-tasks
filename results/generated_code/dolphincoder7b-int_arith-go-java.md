### Code:
```java
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter two integers: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        System.out.printf("%d + %d = %d%n", a, b, (a + b));
        System.out.printf("%d - %d = %d%n", a, b, (a - b));
        System.out.printf("%d * %d = %d%n", a, b, (a * b));
        // In Go, integer division rounds towards zero. Java also does, so we use integer division here.
        // However, in Python, it rounds to nearest integer. We can't do that here because it's not supported by the Scanner class.
        System.out.printf("%d / %d = %.2f%n", a, b, (a / (double)b));
        System.out.printf("%d %% %d = %d%n", a, b, (a % b));
    }
}
```
