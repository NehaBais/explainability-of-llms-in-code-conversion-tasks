Here is the equivalent code in Java:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter two integers: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        
        System.out.printf("%d + %d = %d%n", a, b, a+b);
        System.out.printf("%d - %d = %d%n", a, b, a-b);
        System.out.printf("%d * %d = %d%n", a, b, a*b);
        System.out.printf("%d / %d = %d%n", a, b, (int)(a/(double)b));  // truncates towards zero
        System.out.printf("%d %% %d = %d%n", a, b, a%b); // same sign as first operand

    }
}
```

Please note that in Java we can't perform integer division to return a double or float (like in Go), so you have to cast one of the operands (in this case `a`) to a double before dividing. Similarly, for calculating remainder the behavior is similar like in Go.

Also, Java doesn't provide an exponentiation operator like Go, and there's no built-in method for it. You would need to implement that yourself or use Math.pow() for floating-point numbers.
