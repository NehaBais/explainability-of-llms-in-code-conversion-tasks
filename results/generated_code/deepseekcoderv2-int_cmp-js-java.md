 Here's the equivalent Java code for the provided JavaScript functions:

```java
import java.util.Scanner;

public class CompareIntegers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first integer: ");
        int a = scanner.nextInt();

        System.out.print("Enter the second integer: ");
        int b = scanner.nextInt();

        compare(a, b);
    }

    public static void compare(int a, int b) {
        if (a == b) {
            System.out.println(a + " equals " + b);
        } else if (a < b) {
            System.out.println(a + " is less than " + b);
        } else if (a > b) {
            System.out.println(a + " is greater than " + b);
        } else {
            // This block will only be reached if a and b are not equal, but this should never happen with integers.
            System.out.println("This case should not occur with integer comparison.");
        }
    }
}
```

### Explanation:
1. **Input Handling**: In Java, we use `Scanner` to read input from the user. The `main` method prompts the user for two integers and reads them using `scanner.nextInt()`.
2. **Comparison Logic**: The `compare` method takes two integers (`a` and `b`) as parameters and compares them using if-else statements. It checks if they are equal, less than, or greater than each other.
3. **Output**: The results of the comparisons are printed to the console using `System.out.println()`.

This Java code mirrors the functionality of the provided JavaScript code, ensuring that all three comparison operators (`==`, `<`, and `>`) are used appropriately.
