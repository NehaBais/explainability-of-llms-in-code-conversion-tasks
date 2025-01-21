 Sure, here is the equivalent Java code for your provided C code:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter first integer (a): ");
        int a = scanner.nextInt();
        
        System.out.print("Enter second integer (b): ");
        int b = scanner.nextInt();
        
        if (b == 0) {
            System.out.println("Error: Division by zero is not allowed.");
            return;
        }
        
        System.out.printf("a + b = %d\n", a + b);
        System.out.printf("a - b = %d\n", a - b);
        System.out.printf("a * b = %d\n", a * b);
        System.out.printf("a / b (integer quotient) = %d\n", a / b); // truncates towards zero
        System.out.printf("a %% b (remainder) = %d\n", a % b); // same sign as the first operand
        
        scanner.close();
    }
}
```

### Explanation:
1. **Reading Input:** Java uses `Scanner` to read input from the user, similar to C's `scanf`.
2. **Division and Remainder:** In Java, integer division (`a / b`) truncates towards zero by default, which matches the behavior in C99. The remainder operation (`a % b`) has the same sign as the first operand.
3. **Error Handling:** Added a check to prevent division by zero, similar to your C code's logic.
4. **Formatting Output:** Used `printf` for formatted output, which is similar to `printf` in C but with added functionality and safety (e.g., no need for format specifiers if you are just printing integers).
