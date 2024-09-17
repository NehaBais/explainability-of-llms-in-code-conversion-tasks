Here is the Java equivalent of your C code:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the first integer:");
        int A = sc.nextInt();

        System.out.println("Enter the second integer:");
        int b = sc.nextInt();

        if (b == 0) {
            System.out.println("Error! Division by zero is not allowed.");
            return;
        }

        System.out.printf("Sum of %d and %d is %d%n", A, b, A + b);
        System.out.printf("Difference between %d and %d is %d%n", A, b, A - b);
        System.out.printf("Product of %d and %d is %d%n", A, b, A * b);
        System.out.printf("Quotient when dividing %d by %d is %d%n", A, b, A / b);
        System.out.printf("Remainder when dividing %d by %d is %d%n", A, b, A % b);
    }
}
```

Note: Java does not have built-in support for exponentiation operation like C. If you want to calculate the power of two numbers in Java, you can use `Math.pow(A, b)`.

Also, please note that there is no requirement in your question about the sign of the remainder. The remainder returned by `%` operator in Java always has the same sign as the first operand.
