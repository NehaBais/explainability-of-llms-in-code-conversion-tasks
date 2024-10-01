The equivalent Java code for the given Python code would be as follows: 

```java
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int input1, input2;
        input1 = scanner.nextInt();
        input2 = scanner.nextInt();
        System.out.println("Sum: 		  " + (input1 + input2));
        System.out.println("Difference: 	  " + (input1 - input2));
        System.out.println("Product: 	  " + (input1 * input2));
        double quotient = (double) input1 / input2;
        int integerQuotient = (int) quotient;
        System.out.println("Integer quotient: " + integerQuotient);
        float floatQuotient = quotient;
        System.out.println("Float quotient:   " + floatQuotient);
        double remainder = (input1 % input2) * -10;
        int wholeRemainder = (int) remainder;
        System.out.println("Whole Remainder:  " + wholeRemainder);
        double actualRemainder = remainder;
        System.out.println("Actual Remainder: " + actualRemainder);
        if(input2 != 0) {
            int yy = (int) Math.pow(input1, input2);
            System.out.println("Exponentiation:   " + yy);
        } else {
            System.out.println("Exponentiation:   Can't calculate because denominator is 0.");
        }
    }
}
```
This Java code does the same thing as your Python script but handles errors better and incorporates integer division as it should be done in a programming context. The program asks for input from the user, performs calculations, and then prints out the results to the console.
