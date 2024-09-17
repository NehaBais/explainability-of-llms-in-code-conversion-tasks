### Solution

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the first integer: ");
        int a = scanner.nextInt();
        
        System.out.print("Enter the second integer: ");
        int b = scanner.nextInt();
        
        // Test for less-than
        if (a < b) {
            System.out.println(a + " is less than " + b);
        }
        
        // Test for equality
        if (a == b) {
            System.out.println(a + " is equal to " + b);
        }
        
        // Test for greater-than
        if (a > b) {
            System.out.println(a + " is greater than " + b);
        }
    }
}
```

