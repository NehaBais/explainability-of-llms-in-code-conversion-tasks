In Java, you can use the Scanner class to read input from the user and print output to the console. Here's an example of how you could modify the provided Golang code to work in Java:
```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter two integers: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        System.out.printf("%d + %d = %d\n", a, b, a+b);
        System.out.printf("%d - %d = %d\n", a, b, a-b);
        System.out.printf("%d * %d = %d\n", a, b, a*b);
        System.out.printf("%d / %d = %d (truncates towards 0)\n", a, b, a/b);
        System.out.printf("%d %% %d = %d (same sign as first operand)", a, b, a%b);
    }
}
```
Note that in Java, the `%` operator is used for formatting strings, while in Golang it's used for modulo operation. Additionally, Java does not have an exponentiation operator, so you can remove the line with the exponentiation calculation.
