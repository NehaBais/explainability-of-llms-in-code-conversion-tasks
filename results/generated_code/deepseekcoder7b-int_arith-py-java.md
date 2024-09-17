Here is the equivalent Java code for your Python script. Please note that the integer division in Java behaves differently compared to Python's rounding towards zero, so an explicit check has been added for this. Also, there are no built-in exponentiation operations for integers in Java like ** does in Python, therefore we use Math.pow() method:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter first integer:");
        int input1 = scanner.nextInt();
  
        System.out.println("Enter second integer:");
        int input2 = scanner.nextInt();
      
        int sum = input1 + input2;
        System.out.println("Sum: "+ sum);
        
        int difference = input1 - input2; 
        System.out.println("Difference: "+difference);
    
        long product = (long)input1 * input2; //Cast to long for larger products
        System.out.println("Product: " + product);
        
        int quotient = input1 / input2; 
        System.out.println("Integer Quotient: "+quotient);  
      
        float remainder = (float)input1 % input2; //cast to float for decimal points in the result
        System.out.println("Actual Remainder: " + remainder);
        
        int signOfFirstOperand = Integer.signum(input1); 
        int signOfSecondOperand = Integer.signum(input2); 
        
        if (signOfFirstOperand != signOfSecondOperand) {
            System.out.println("Signs of the operands are different");
        } else{
           System.out.println("Signs of the operands are same"); 
        }
        
        double exponentiation = Math.pow(input1, input2); //exponentiation using Java's method
        System.out.println("Exponentiation: "+exponentiation);
    }
}
```
This code prompts the user for two integers and outputs their sum, difference, product, integer quotient, actual remainder (both whole and decimal), whether the operands have the same or different signs, and exponentiation. Please replace `input1` and `input2` with your variables if they are defined elsewhere in your program.

