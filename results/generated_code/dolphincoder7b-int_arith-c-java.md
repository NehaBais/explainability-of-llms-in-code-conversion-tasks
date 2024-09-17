Below is the equivalent Java code:
```java
import java.util.*;
public class Main {
    public static void main(String[] args) {
        int a, b;
        if (args.length < 2) System.exit(1);
        b = Integer.parseInt(args[--args.length]);
        if (b == 0) System.exit(2);
        a = Integer.parseInt(args[--args.length]);
        System.out.printf("a+b = %d%n", a + b);
        System.out.printf("a-b = %d%n", a - b);
        System.out.printf("a*b = %d%n", a * b);
        System.out.printf("a/b = %d%n", a / b);  // truncates towards 0 (in Java 8) 
        System.out.printf("a%%b = %d%n", a % b);  // same sign as first operand (in Java 8) 
    }
}
```
Note: This is an example of how to convert basic C code to Java using the provided pseudo-code. The actual implementation may vary slightly due to differences in syntax and semantics between languages. For instance, there are no command line arguments in Java, so it's necessary to read user input with Scanner. Also, Java doesn't support error handling, but you can handle errors by printing a message and exiting the program if necessary.
The division operator `/` in C is equivalent to `a / b` in Java. The modulo operation `%` also behaves similarly, except it's not available in Java. To calculate a^b (exponentiation), you could use Math.pow(a, b) or raise a to the power of b with `a ** b` in Python.
Note: This is just an example code and doesn't cover all possible scenarios. The full functionality of Java depends on your specific requirements.
