The equivalent Java code is as follows. Note that in Java there's no built-in operator for exponentiation, so you have to use the `Math` library function `pow()`. Also note how Java handles integer division and remainder differently than Python:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int input1 = 18; // or replace with a Scanner instance to get user input
        int input2 = 7;  // or replace with a Scanner instance to get user input

        int sum = input1 + input2;
        System.out.println("Sum: " + sum);

        int difference = input1 - input2;
        System.out.println("Difference: " + difference);

        int product = input1 * input2;
        System.out.println("Product: " + product);

        int quotient = input1 / input2;  // Java integer division always rounds towards zero
        System.out.println("Integer quotient: " + quotient);

        float floatQuotient = (float)input1 / input2; // Java floating point division does not round, it just cuts off the decimal part.
        System.out.println("Float quotient: " + floatQuotient);

        int remainder = input1 % input2;  // In Java, if operands are different signed (one is positive and one negative) then the sign of the remainder matches the sign of the divisor.
        System.out.println("Remainder: " + remainder);

        double exponentiation = Math.pow(input1, input2);  // Java does not have an integer power operator (^ is bitwise XOR), so use Math library function pow() instead.
        System.out.println("Exponentiation: " + exponentiation);    
    }
}
```
