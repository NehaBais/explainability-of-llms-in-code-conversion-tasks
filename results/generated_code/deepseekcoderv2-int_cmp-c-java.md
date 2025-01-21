 Sure! Here's the equivalent Java code for the given C code:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int a, b;
        System.out.println("Enter two integers:");
        a = scanner.nextInt();
        b = scanner.nextInt();
        
        if (a < b) {
            System.out.printf("%d is less than %d\n", a, b);
        }
        
        if (a == b) {
            System.out.printf("%d is equal to %d\n", a, b);
        }
        
        if (a > b) {
            System.out.printf("%d is greater than %d\n", a, b);
        }
    }
}
```

This Java code does the following:
1. Uses a `Scanner` to read two integers from the user.
2. Compares the two integers using if statements and prints the appropriate message based on their relationship (less than, equal to, or greater than).
