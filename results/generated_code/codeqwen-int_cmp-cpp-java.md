Here's the equivalent Java code:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        if (!sc.hasNextInt() || !sc.hasNextInt()) {
            System.err.println("Could not read the numbers");
            return;
        }

        int A = sc.nextInt();
        int b = sc.nextInt();

        // test for less-than
        if (A < b)
            System.out.println(A + " Is less than " + b);

        // test for equality
        if (A == b)
            System.out.println(A + " Is equal to " + b);

        // test for greater-than
        if (A > b)
            System.out.println(A + " Is greater than " + b);

        sc.close();
    }
}
```
This code does the same thing as your C++ program: prompts the user to input two integers, compares them using the less-than, equality and greater-than operators respectively, and then prints out a message based on each comparison. The `Scanner` class is used instead of `std::cin`, which is not available in Java. 

In addition, we use `!sc.hasNextInt()` to check if the user input can be read as integers before attempting to read them. If either input cannot be read as an integer, a warning message is printed and the program exits immediately.
