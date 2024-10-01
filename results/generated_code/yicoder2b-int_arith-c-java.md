Sure, here is the equivalent Java code for the given C program:

```java
import java.util.Scanner; // For input/output operations

public class Main {
    public static void main(String[] args) {
        // Initialize two integer variables 'a' and 'b' with user inputs
        Scanner scanner = new Scanner(System.in);
        int a, b;

        System.out.println("Enter the first number: ");
        while (!scanner.hasNextInt()) {
            System.out.println("Invalid input. Please enter an integer: ");
            scanner.next(); // clear invalid input
        }
        a = scanner.nextInt(); 

        System.out.println("Enter the second number: ");
        while (!scanner.hasNextInt()) {
            System.out.println("Invalid input. Please enter an integer: ");
            scanner.next(); // clear invalid input
        }
        b = scanner.nextInt(); 

        // Calculations and printing
        int sum = a + b;
        int diff = a - b;
        int prod = a * b;
        float quot = (float)a / b; /* In Java, division between integer values results in float */
        int remainder = a % b; 
  
        System.out.println("The sum is: " + sum);
        System.out.println("The difference is: " + diff);
        System.out.println("The product is: " + prod);
        System.out.printf("The quotient (towards zero) is: %.0f\n", quot); 
        System.out.println("The remainder is: " + remainder);
    }
}
```
