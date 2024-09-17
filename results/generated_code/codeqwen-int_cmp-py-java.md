Here is the Java code equivalent of your Python script:

```java
import java.util.Scanner;

public class Main {
   public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value of a: ");
        int A = sc.nextInt();
        System.out.println("Enter value of b: ");
        int B = sc.nextInt();

        if (A < B) {
            System.out.println("a is less than b");
        } else if (A > B) {
            System.out.println("A is greater than b");
        } else if (A == B) {
            System.out.println("A is equal to b");
        }
    }
}
```
You can use this Java program to input two integers from the user and then it checks and prints whether the first number is less than, equal to or greater than the second number using `if`, `else if` and `else` statements. Please note that we need a Scanner object named sc to read the integer inputs from the user.
