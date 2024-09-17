Here is the Java equivalent of your Golang code:

In Java, we use `java.util.Scanner` class to read user input.

Also, in Java there are not built-in features for rounding towards zero or negative infinity, so it's easier just to display normal division result and let the programmer understand that this is equivalent to rounding to the nearest integer (towards zero). If you specifically want these behaviors, then they can be implemented.

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args)  {
        Scanner scan = new Scanner(System.in);
        
        System.out.print("Enter two integers: ");
        int a = scan.nextInt();
        int b = scan.nextInt();

        System.out.printf("%d + %d = %d%n", a, b, a+b);
        System.out.printf("%d - %d = %d%n", a, b, a-b);
        System.out.printf("%d * %d = %d%n", a, b, a*b);
        System.out.printf("%d / %d = %d (rounded towards zero)%n", a, b, a/b);  // truncates towards 0
        System.out.printf("%d %% %d = %d (same sign as first operand)%n", a, b, a%b);  // same sign as first operand
        
        scan.close();
    }
}
```
In this code, we read two integers from the user and then print their sum, difference, product, quotient, remainder (remainder of division), and exponentiation operations if they exist. The integer division in Java is equivalent to flooring towards negative infinity which rounds towards zero for positive numbers and toward negative infinity for negative ones. If you need these behaviors too, they can be implemented separately.

