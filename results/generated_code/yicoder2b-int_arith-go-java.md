This is the equivalent Java code for the given Golang code:
```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int a, b;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter two integers:");
        a = scanner.nextInt();
        b = scanner.nextInt();
        System.out.printf("%d + %d = %d\n", a, b, a+b);
        System.out.printf("%d - %d = %d\n", a, b, a-b);
        System.out.printf("%d * %d = %d\n", a, b, a*b);
        System.out.printf("%d / %d = %d\n", a, b, a/b);  // truncates towards 0
        if ((a < 0 && b > 0) || (a > 0 && b < 0)) { // checks the sign of first and second operand.
            System.out.printf("%d %% %d = %d\n", a, b, a%b); 
        } else {
            System.out.printf("The sign of %d is same as %d, so the remainder is negative\n", (a < 0 ? -1 : 1), b); // checks if remainder should be positive or negative based on the signs of a and b.
        }
    }
}
```
