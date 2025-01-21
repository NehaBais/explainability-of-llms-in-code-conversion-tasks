Here is the Java version of your C++ code:

```java
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter first integer:");
        int a = scanner.nextInt();

        System.out.println("Enter second integer:");
        int b = scanner.nextInt();

        System.out.printf("a + b = %d\n", a + b);
        System.out.printf("a - b = %d\n", a - b);
        System.out.printf("a * b = %d\n", a * b);
        System.out.printf("a / b = %d, remainder %d\n", a / b, a % b);

        scanner.close();
    }
}
```

The `main` method starts by creating a `Scanner` object for reading input. It then asks the user to enter two integers and stores them in `a` and `b`. Finally, it performs each requested operation and prints the results. The `%d` inside the `printf` function is a placeholder for an integer value that will be substituted with the actual values when the string is printed.

Unlike C++, Java doesn't have a built-in operator for exponentiation. If you want to calculate the power of a number, you can use the `Math.pow(double base, double exp)` method from the `java.lang.Math` class (imported by default in Java programs).

Also note that when dividing two integers in Java (`a / b`), the result is an integer and will be rounded towards zero. This behavior is consistent with C++. If you want to get a precise floating-point result, you should convert at least one of the operands to `double`. For example:

System.out.printf("a / b = %.2f\n", (double)a / b);

This will print the result rounded to two decimal places.
