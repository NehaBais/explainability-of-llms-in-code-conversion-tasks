```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a, b;
        System.out.print("Enter first integer: ");
        a = scanner.nextInt();
        System.out.print("Enter second integer: ");
        b = scanner.nextInt();

        System.out.println("a + b = " + (a + b));
        System.out.println("a - b = " + (a - b));
        System.out.println("a * b = " + (a * b));
        System.out.println("a / b = " + (a / b) + ", remainder " + (a % b));

        double a_d = (double)a;
        double b_d = (double)b;

        System.out.println("a ^ b = " + Math.pow(a_d, b_d));
    }
}
```
