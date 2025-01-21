 Here's the equivalent Java code for the provided Rust code. This Java code reads two integers from the user, compares them using conditional statements, and prints out the appropriate message based on their relationship.

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter the first integer:");
        int a = scanner.nextInt();
        
        System.out.println("Enter the second integer:");
        int b = scanner.nextInt();
        
        if (a < b) {
            System.out.printf("%d is less than %d\n", a, b);
        } else if (a == b) {
            System.out.printf("%d equals %d\n", a, b);
        } else if (a > b) {
            System.out.printf("%d is greater than %d\n", a, b);
        }
        
        scanner.close();
    }
}
```

### Explanation:
1. **Reading Input:** The Java code uses `Scanner` to read two integers from the user. This is equivalent to using `stdin` in Rust.
2. **Conditional Statements:** It then checks if the first integer (`a`) is less than, equal to, or greater than the second integer (`b`), using `if`, `else if`, and `else`.
3. **Printing Output:** The appropriate message is printed based on the comparison result. This is similar to Rust's use of `println!` for output.
