This is a rough conversion of the Python code to Java. For better quality and performance, you may need to review and optimize the Java program according to your needs. However, I will provide a general guide to help you get started.

Here is the equivalent Java code:
```java
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter first integer: ");
        int input1 = scanner.nextInt();

        System.out.print("Enter second integer: ");
        int input2 = scanner.nextInt();

        int sum = input1 + input2;
        System.out.println("Sum: " + sum);

        int diff = input1 - input2;
        System.out.println("Difference: " + diff);

        int prod = input1 * input2;
        System.out.println("Product: " + prod);

        int divInt = input1 / input2;
        System.out.println("Integer quotient: " + divInt);

        float divFloat = (float)input1 / (float)input2;
        System.out.println("Float quotient: " + divFloat);

        double wholeRemainder = Math.floor(divFloat);
        int remInt = (int)(wholeRemainder - divFloat)*-10; // this may need to be adjusted based on the requirement
        System.out.println("Whole Remainder: " + (int)wholeRemainder);
        System.out.println("Actual Remainder: " + remInt);

        double exp = Math.pow(input1, input2);
        System.out.println("Exponentiation: " + exp);
    }
}
```
