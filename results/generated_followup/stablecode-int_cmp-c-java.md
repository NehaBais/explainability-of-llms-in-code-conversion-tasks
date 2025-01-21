The error is due to missing semicolons at the end of each line inside the `if` statements. Here's how to fix it: simply add semicolons at the end of each line, as shown below:
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
        } else if (a > b)) {
            System.out.println(a + " is greater than " + b));
        }

        scanner.close();
    }
}
```
