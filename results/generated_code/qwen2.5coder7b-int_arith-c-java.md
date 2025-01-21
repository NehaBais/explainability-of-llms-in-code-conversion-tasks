Here is the equivalent Java code for your requirement:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter first integer:");
        int a = scanner.nextInt();

        System.out.println("Enter second integer:");
        int b = scanner.nextInt();

        System.out.println("a + b = " + (a + b));
        System.out.println("a - b = " + (a - b));
        System.out.println("a * b = " + (a * b));
        System.out.println("a / b = " + (a / b)); // rounds towards zero
        System.out.println("a % b = " + (a % b)); // same sign as first operand

        scanner.close();
    }
}
```

This code does the following:
- It imports a `Scanner` class to take input from the user.
- Prompts the user for two integers.
- Calculates and displays their sum, difference, product, quotient, and remainder. The quotient is calculated using integer division which rounds towards zero as in C99. Similarly, the remainder has the same sign as the first operand as in C99.

Please note that Java does not support exponentiation operator for integers directly like C or C++. If you need to calculate the power of a number, you can use Math.pow(double base, double exp) method from `java.lang.Math` class. However, keep in mind that this method returns a double value and will not work with integer base or exponent unless they are explicitly casted to double.

Also, if you want to check for division by zero (and handle it appropriately), you would need additional checks or error handling, as Java does not have the same built-in behavior as C.
