Sure, here's how you can convert the given JavaScript code into Java. Note that Java does not have a modulus operator like JavaScript, instead it uses `Math.floorMod` for integer division and the remainder of the division.

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the first integer: ");
        int a = scanner.nextInt();
        
        System.out.print("Enter the second integer: ");
        int b = scanner.nextInt();
        
        int sum = a + b;
        int difference = a - b;
        int product = a * b;
        double division = (double) a / b;  // Casting to double for division
        int remainder = Math.floorMod(a, b);
        
        System.out.println("Sum: " + sum);
        System.out.println("Difference: " + difference);
        System.out.println("Product: " + product);
        System.out.println("Division: " + division);
        System.out.println("Remainder: " + remainder);

        scanner.close();
    }
}
```

This Java program performs the same operations as the JavaScript code. The `Math.floorMod` method is used for integer division and to get the remainder.
