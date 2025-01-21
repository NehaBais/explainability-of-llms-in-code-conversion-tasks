 Sure, here is the equivalent Java code for your Python script:

```java
import java.util.Scanner;

public class Comparison {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter value of a: ");
        int a = scanner.nextInt();
        
        System.out.print("Enter value of b: ");
        int b = scanner.nextInt();
        
        if (a < b) {
            System.out.println("a is less than b");
        } else if (a > b) {
            System.out.println("a is greater than b");
        } else if (a == b) {
            System.out.println("a is equal to b");
        }
        
        scanner.close();
    }
}
```

This Java code uses a `Scanner` object to read two integers from the user, then compares them using conditional statements and prints out the appropriate message based on their relationship.
