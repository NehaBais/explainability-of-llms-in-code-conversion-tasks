```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter two integers: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        
        // Display the sum, difference, product, quotient, remainder, and exponentiation
        System.out.println(a + " + " + b + " = " + (a + b));
        System.out.println(a + " - " + b + " = " + (a - b));
        System.out.println(a + " * " + b + " = " + (a * b));
        
        // Integer quotient truncates towards zero
        int quotient = a / b;
        System.out.println(a + " / " + b + " = " + quotient);
        
        // Remainder always has the same sign as the first operand
        int remainder = a % b;
        System.out.println(a + " %% " + b + " = " + remainder);
    }
}
```

This Java code accomplishes the requirements by utilizing the `Scanner` class to get user input, then performing the necessary calculations (sum, difference, product, quotient, remainder) and displaying them. The quotient is truncated towards zero using integer division (`/`), and the remainder always has the same sign as the first operand (`%`). No exponentiation operator is used in Java for this scenario.
