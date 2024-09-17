 In Java, you can use `Scanner` class to read input from user. Here is how you can perform the same operation in a similar manner:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter first integer:");
        int a = scanner.nextInt();
        
        System.out.println("Enter second integer:");
        int b = scanner.nextInt();
        
        compare(a, b);
    }
    
    static void compare(int a, int b) {
        if (a == b) System.out.println(a + " equals " + b);
        if (a < b) System.out.println(a + " is less than " + b);
        if (a > b) System.out.println(a + " is greater than " + b);
    }
}
```
Please note that `System.out.println()` method can be used to display messages in Java, and the `==` operator is used for comparison of integers in Java.
