Here is the Java version of your Python code:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter first integer: ");
        int input1 = scanner.nextInt();
        
        System.out.print("Enter second integer: ");
        int input2 = scanner.nextInt();

        int sum = input1 + input2;
        System.out.println("Sum: " + sum);

        int difference = input1 - input2;
        System.out.println("Difference: " + difference);

        int product = input1 * input2;
        System.out.println("Product: " + product);

        int integerQuotient = input1 / input2;
        System.out.println("Integer Quotient: " + integerQuotient);
        
        int remainder = input1 % input2;
        System.out.println("Remainder: " + remainder);

        long exponentiation = (long) Math.pow(input1, input2);
        System.out.println("Exponentiation: " + exponentiation);
    }
}
```

In this code:
- `Scanner` class is used to read inputs from the user.
- The `%` operator in Java performs modulus operation which gives the remainder of a division operation. This matches the behavior you described for the remainder.
- For quotient, integer division is performed using `/`. Java rounds towards zero by default, so `-3/2` would give `-1`.
- `Math.pow()` method is used to perform exponentiation in Java. Please note that the base and exponent must be of type double or float.
- The code doesn't include error handling because the problem statement specified not to do so.

Make sure to handle `InputMismatchException` when user inputs non-integer values.
