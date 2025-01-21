```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Get two integers from the user
        System.out.print("Enter the first integer: ");
        int a = scanner.nextInt();
        
        System.out.print("Enter the second integer: ");
        int b = scanner.nextInt();

        // Display their sum, difference, product, quotient, and remainder
        System.out.println("a+b = " + (a + b));
        System.out.println("a-b = " + (a - b));
        System.out.println("a*b = " + (a * b));
        
        // Calculate quotient and remainder
        int quotient = a / b;
        int remainder = a % b;
        
        if (quotient == 0) {
            System.out.println("a/b = 0, no remainder");
        } else if (quotient > 0 && remainder >= 0 || quotient < 0 && remainder <= 0) {
            System.out.println("a/b = " + quotient + ", remainder is positive or negative of the first operand");
        } else {
            System.out.println("a/b = " + quotient + ", remainder is the absolute value of the second operand");
        }

        // Display exponentiation if it exists
        if (b != 0) {
            System.out.println("a^b = " + Math.pow(a, b));
        }
        
        scanner.close();
    }
}
```
