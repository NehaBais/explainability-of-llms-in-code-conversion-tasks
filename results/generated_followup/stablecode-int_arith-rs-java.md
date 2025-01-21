The error is caused by missing semicolons at the end of each line where these operations are being performed. The semicolon is needed to terminate the statement in a programming language like Java or C++. 

Here's how you can fix it: Simply add semicolons at the end of each line containing arithmetic operations.

```java
import java.util.Scanner;

public class Main {

    public static void main(String[] args) 
{
        Scanner scanner 
= new Scanner(System.in);
        
        System.out.println("Enter first integer: 
"));
        int a 
= scanner.nextInt();
        
        System.out.println("Enter second integer: 
"));
        int b 
= scanner.nextInt();

        // Display the results
        System.out.println("\nResults for input integers 
(" + a + ", " + b + ") are as follows:");

        // sum
        System.out.println("Sum:              " + (a + b)) );

        // difference
        System.out.println("Difference:       " + (a - b)) );

        // product
        System.out.println("Product:          " + (a * b)) );

        // integer quotient 
        System.out.println("Integer Quotient: 
" + ((float) a / b))));  // truncates towards zero

        // remainder
        if(b != 0){
            System.out.println("Remainder:        " + (a % b)) 
; // same sign as first operand
        } else {
            System.out.println("Error: Division by zero is not allowed.");
        }

    }
}
```
