Sure, here's the Java equivalent code for your Python program. This script does exactly the same thing as your original Python script:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Ask user to enter the values of a and b
        System.out.print("Enter value of a: ");
        int a = scanner.nextInt();

        System.out.print("Enter value of b: ");
        int b = scanner.nextInt();

        // Use if-else statements to check the conditions
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
Note that I've used the `Scanner` class for getting input from the user in Java. The `nextInt()` method is used to read an integer value from the user. Also, it's important to close the scanner object after using it to avoid resource leaks.

Please compile and run this program in a Java environment to see the results!
