```java
import java.util.Scanner;

public class IntegerComparison {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get two integers from the user
        System.out.print("Enter first integer: ");
        int firstInteger = scanner.nextInt();

        System.out.print("Enter second integer: ");
        int secondInteger = scanner.nextInt();

        // Check the conditions
        if (firstInteger < secondInteger) {
            System.out.println(firstInteger + " is less than " + secondInteger);
        } else if (firstInteger == secondInteger) {
            System.out.println(firstInteger + " equals " + secondInteger);
        } else {
            System.out.println(firstInteger + " is greater than " + secondInteger);
        }
    }
}
```
