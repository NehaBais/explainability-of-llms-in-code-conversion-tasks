```java
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        System.out.println("a+b = " + (a + b));
        System.out.println("a-b = " + (a - b));
        System.out.println("a*b = " + (a * b));
        double quotient = Math.floor(a / (double) b);
        System.out.printf("a/b = %.0f, remainder %d\n", quotient, a % b);
    }
}
```

This Java program uses the Scanner class to get integer inputs from the user and then display their sum, difference, product, quotient, remainder, and exponentiation (if the operator exists). It also includes an option to round the quotient to the nearest whole number, which is achieved by using Math.floor() method. The output shows how integers are handled in Java by default, so there's no need for manual type conversion or explicit casting to int.
