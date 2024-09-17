Here is the equivalent Java code:

```java
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get two integers from user input
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        // Calculate and display the results
        System.out.println("a+b = " + (a + b)));
        System.out.println("a-b = " + (a - b)));
        System.out.println("a*b = " + (a * b)));

        // Calculate and display the results for division and modulus operations
        System.out.println("a/b = " + ((double) a / b))));
        System.out.println("a%%b = " + (a % b)));
    }
}
```
This Java code does the same thing as your C code. It gets two integers from user input, performs various arithmetic operations on these numbers, and then displays the results of these operations in the console. 

Note: This Java code uses Java Scanner class to get user input for the integer values. The division operation (a/b) is performed using a double data type to allow for floating point number results. The modulus operation (a%b) is performed using the int remainder operator, which gives the remainder of the division operation.
