Fix explanation:
To fix the above errors, you need to make the following changes in your Java code:
1. In line 5, remove the extra closing parenthesis and semicolon. The correct line should be: `Scanner scanner = new Scanner(System.in));`
2. In lines 12-14, replace the incorrect character literals with proper syntax.
Corrected code:
```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in));
        System.out.print("Enter value of a: ");
        int a = scanner.nextInt();
        System.out.print("Enter value of b: ");
        int b = scanner.nextInt();

        if (a < b) {
            System.out.println("a is less than b");
        } else if (a > b)) {
            System.out.println("a is greater than b");
        } else if (a == b)) {
            System.out.println("a is equal to b");
        }
    }
}
```
