The error is due to missing semicolons at the end of each line where an expression ends without a semicolon. 

Here's the fix: Add a semicolon at the end of each line where an expression ends without a semicolon. 

Corrected code in one single fenced code block:
```java
import java.util.Scanner;

public class Main {

    static void printResult(int a, int b) {
        System.out.println("a+b = " + (a + b)));
        System.out.println("a-b = " + (a - b))));
        System.out.println("a*b = " + (a * b))));
        System.out.println("a/b = " + ((double) a / b))));
        System.out.println("a%b = " + (a % b))));
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter first integer: ");
        int a = scanner.nextInt();
        System.out.print("Enter second integer: ");
        int b = scanner.nextInt();
        printResult(a, b);
    }
}
```
This Java code takes two integers as input from the user and then calculates their sum, difference, product, integer quotient (towards zero) and remainder. The result of these calculations are also printed on the console.
