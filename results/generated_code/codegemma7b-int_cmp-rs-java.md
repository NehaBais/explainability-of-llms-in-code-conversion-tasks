```java
import java.util.Scanner;

public class IntegerComparison {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get two integers from the user
        System.out.println("Enter two integers separated by a space: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        // Check if a is less than b
        if (a < b) {
            System.out.println(a + " is less than " + b);
        }

        // Check if a is equal to b
        if (a == b) {
            System.out.println(a + " equals " + b);
        }

        // Check if a is greater than b
        if (a > b) {
            System.out.println(a + " is greater than " + b);
        }
    }
}
```
