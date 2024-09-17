### Code
```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter two integers: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        System.out.println("Sum:               " + (a+b));
        System.out.println("Difference:        " + (a-b));
        System.out.println("Product:           " + (a*b));
        System.out.println("Integer quotient:  " + (a/b)); // truncates towards zero
        System.out.println("Remainder:         " + (a%b)); // same sign as first operand
    }
}
```
