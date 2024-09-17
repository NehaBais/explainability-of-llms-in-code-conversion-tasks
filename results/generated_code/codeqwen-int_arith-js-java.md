Here is the equivalent Java code:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter first integer: ");
        int A = scanner.nextInt();
        scanner.nextLine();  // Consume the rest of the line

        System.out.print("Enter second integer: ");
        int b = scanner.nextInt();
        scanner.close();

        int sum = A + b;
        int difference = A - b;
        int product = A * b;
        double division = (double)A / b;  // Convert int to double for division
        int remainder = A % b;  // this produces the remainder after dividing 'b' into 'A'.

        System.out.println("A + b = " + sum);
        System.out.println("A - b = " + difference);
        System.out.println("A * b = " + product);
        System.out.println("A / b = " + division);
        System.out.println("A % b = " + remainder);
    }
}
```

This program reads two integers from the user, calculates and prints their sum, difference, product, quotient (as a double), and remainder. Note that we use `(double)A / b` instead of `A / b` to get an accurate floating-point division result in Java, which would otherwise result in integer division. 

In the remainder operation, if you want the remainder's sign to match the first operand, you need to manually check and change its sign accordingly. This is not supported directly in Java (Java does not support operator overloading for all operations).
