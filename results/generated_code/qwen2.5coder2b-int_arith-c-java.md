```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter two integers:");
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        if (b == 0) {
            System.out.println("Error: Division by zero");
            return;
        }

        double sum = a + b;
        double difference = a - b;
        double product = a * b;

        // For integer division in Java, use Math.floorDiv()
        int integerQuotient = (int) Math.floor(a / b);
        int remainder = a % b;

        System.out.println("a+b = " + sum);
        System.out.println("a-b = " + difference);
        System.out.println("a*b = " + product);

        // For Java, the quotient is always rounded down towards zero, 
        // so we don't need to worry about truncation
        System.out.println("a/b = " + integerQuotient);

        // Remainder sign matches the first operand
        System.out.println("a%%b = " + remainder);
    }
}
```
