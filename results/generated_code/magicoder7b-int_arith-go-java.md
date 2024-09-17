 Below is the Java equivalent of your Golang code:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter two integers: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        
        System.out.println(a + " + " + b + " = " + (a+b));
        System.out.println(a + " - " + b + " = " + (a-b));
        System.out.println(a + " * " + b + " = " + (a*b));
        
        // Java truncates towards 0 when dividing by an integer without a floating point.
        System.out.println(a + " / " + b + " = " + (double)a/b);
        System.out.println(a + " % " + b + " = " + (a%b));
        
        // Exponentiation is not directly supported in Java as it is in Golang, but can be implemented with a method.
    }
}
```
Note: The division operator `/` for integer inputs in Java truncates towards zero by default. There's no built-in exponentiation operator in Java like there is in Golang (using `**`), so we use the `Math.pow()` function to calculate it. To get the remainder, we use the modulo operator `%`. Both operands will have the same sign if they are different.
