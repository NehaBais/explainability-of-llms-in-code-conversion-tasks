 Sure, here is the equivalent Java code for your C++ code:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        
        System.out.println("a+b = " + (a + b));
        System.out.println("a-b = " + (a - b));
        System.out.println("a*b = " + (a * b));
        
        // For quotient and remainder, we need to handle integer division differently in Java
        int quotient = a / b;
        int remainder = a % b;
        
        System.out.println("a/b = " + quotient + ", remainder " + remainder);
        
        scanner.close();
    }
}
```

In this Java code:
- We use the `Scanner` class to read input from the user.
- The operations for sum, difference, and product are straightforward.
- For integer division (`a / b`), the result is automatically rounded towards zero in Java (similar to C++).
- The remainder operation (`a % b`) follows the same rules as in C++.
