 Here is the equivalent Java code for your JavaScript program:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        int sum = a + b;
        int difference = a - b;
        int product = a * b;
        float division = (float)a / b;  // Cast to float to get the decimal part
        int remainder = a % b;  // This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator

        System.out.println("a + b = " + sum);  
        System.out.println("a - b = " + difference);
        System.out.println("a * b = " + product);
        System.out.printf("a / b = %.2f\n", division);  // The decimal part is only displayed if the float is 0.xx
        System.out.println("a % b = " + remainder);
    }
}
```

This Java program will do exactly what your JavaScript code does. It reads two integers from the console, and then calculates and prints their sum, difference, product, division (with a decimal part), modulus, and remainder in that order. The "%.2f" in the printf statement specifies that we want to print a floating number with 2 digits after the point.
Remember that the 'float' keyword is used because of the need for a decimal part in division.
