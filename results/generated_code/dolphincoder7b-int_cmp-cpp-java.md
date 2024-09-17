```java
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        // Create Scanner object to read inputs from user
        Scanner scanner = new Scanner(System.in);

        int a, b;
        if (scanner.hasNextInt() && scanner.hasNextInt()) {
            a = scanner.nextInt();
            b = scanner.nextInt();

            // test for less-than
            if (a < b)
                System.out.println(a + " is less than " + b);

            // test for equality
            if (a == b)
                System.out.println(a + " is equal to " + b);

            // test for greater-than
            if (a > b)
                System.out.println(a + " is greater than " + b);
        } else {
            System.err.println("could not read the numbers");
        }
    }
}
```
The conversion has been made to Java syntax while maintaining the functionality of each part of the original code. The Scanner class from java.util was used instead of std::cin as it provides a more convenient method for reading input. A similar approach is utilized in the Java version, where if there are no inputs, an error message will be printed out.
