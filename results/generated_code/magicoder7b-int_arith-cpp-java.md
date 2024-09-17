 Here is the equivalent Java code for your C++ program:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter first integer:");
        int a = scanner.nextInt();
        
        System.out.println("Enter second integer:");
        int b = scanner.nextInt();
        
        // Calculate and print the results
        System.out.println("a+b = " + (a + b));
        System.out.println("a-b = " + (a - b));
        System.out.println("a*b = " + (a * b));
        
        if(b != 0){ // Avoid divide by zero error
            int quotient = a / b;
            int remainder = a % b;
            
            System.out.println("a/b = " + quotient);
            System.out.println((remainder < 0 && b > 0) || (remainder > 0 && b < 0) ? "Remainder sign matches the second operand" : "Remainder sign matches the first operand");
        } else {
            System.out.println("a/b = Division by zero is not allowed");
        }
    }
}
```

This Java program does exactly what your C++ code was doing: gets two integers from user input, then calculates and prints the sum, difference, product, integer quotient (only if b != 0), remainder, and checks whether the sign of the remainder matches that of `b` or `a`. If `b` is zero, it alerts the user to avoid division by zero.
Note: As Java uses a different method for getting input compared to C++, a library called "java.util.Scanner" was used in this program to get input from console. The nextInt() function of Scanner class reads the integer value entered by user on console.
