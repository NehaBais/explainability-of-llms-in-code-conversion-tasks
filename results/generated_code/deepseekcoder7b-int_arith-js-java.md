Here is the Java equivalent of your JavaScript code, with no rounding hints because they are not necessary in this language:

```Java
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.print("Enter the first integer: ");
        int a  = scan.nextInt();
        
        System.out.print("Enter the second integer: ");
        int b  = scan.nextInt();
        
        int sum = a + b;
        int difference = a - b;
        int product = a * b;
        int quotient = a / b;  //This rounds towards zero if not specified otherwise (by using Math.floorDiv in Java)
        int remainder = a % b;   
        
        System.out.println("a + b = "+ sum);  
        System.out.println("a - b = "+ difference);
        System.out.println("a * b = "+ product);
        System.out.println("a / b = "+ quotient);
        System.out.println("a % b = "+ remainder);
        
        if(remainder*b < 0){ //Check for different sign of operands 
            System.out.println("Remainder is negative");
        } else {
            System.out.println("Remainder is positive or zero");
        }
    }
}
```
Note: Java doesn't have a built-in operator for exponentiation (a^b), so you can use Math.pow(base, exponent) function to calculate it. If the second operand sign matches with that of first one, we print "Remainder is positive or zero", else "Remainder is negative".

