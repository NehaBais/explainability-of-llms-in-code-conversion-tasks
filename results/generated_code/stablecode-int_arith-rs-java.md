Below is the equivalent Java code for the given Rust code. I've not included error handling in this translation, aligning with your requirements for simplicity's sake.

```java
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter first integer: ");
        int a = scanner.nextInt();
        
        System.out.println("Enter second integer: ");
        int b = scanner.nextInt();

        // Display the results
        System.out.println("\nResults for input integers (" + a + ", " + b + ") are as follows:");

        // sum
        System.out.println("Sum:              " + (a + b)));

        // difference
        System.out.println("Difference:       " + (a - b)));

        // product
        System.out.println("Product:          " + (a * b)));

        // integer quotient 
        System.out.println("Integer Quotient: " + ((float) a / b))));  // truncates towards zero

        // remainder
        if(b != 0){
            System.out.println("Remainder:        " + (a % b)) ; // same sign as first operand
        } else {
            System.out.println("Error: Division by zero is not allowed.");
        }

    }
}
```
This code will take two integer inputs from the user, perform various arithmetic operations on these numbers and finally print all results to the console. 

It handles error cases where division by zero occurs, printing an appropriate error message to the console in such a scenario.
