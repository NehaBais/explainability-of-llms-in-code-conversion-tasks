Here's the Java equivalent of your C code:

```java
import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);
        
        int a, b;
        System.out.print("Enter first integer: ");
        a = scanner.nextInt();
        System.out.print("Enter second integer: ");
        b = scanner.nextInt();
        
        if (a < b)
            System.out.println(a + " is less than " + b);
        else if (a == b)
            System.out.println(a + " is equal to " + b);
        else
            System.out.println(a + " is greater than " + b);

        scanner.close();
    }
}
```

In this Java code, we use a `Scanner` object to read input from the user. The first integer is entered by the user and stored in the variable `a`. Similarly, the second integer is entered and stored in the variable `b`. Then, based on whether `a` is less than, equal to, or greater than `b`, we print the appropriate message using `System.out.println()`.

The `if-else-if-else` statements are used for these comparisons. The `else` statement will run if none of the conditions in the preceding `if-else-if` statements are true.
