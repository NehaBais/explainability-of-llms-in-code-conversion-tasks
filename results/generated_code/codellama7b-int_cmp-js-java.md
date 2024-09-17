In Java, you can use the following code to compare two integers:
```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first integer: ");
        int a = sc.nextInt();
        System.out.print("Enter second integer: ");
        int b = sc.nextInt();

        if (a == b) {
            System.out.println(a + " equals " + b);
        } else if (a < b) {
            System.out.println(a + " is less than " + b);
        } else if (a > b) {
            System.out.println(a + " is greater than " + b);
        }
    }
}
```
In this code, we first take two integer inputs from the user using the `Scanner` class. We then use the `if-else` statement to compare the two integers and print the appropriate message.

Note that in Java, you can also use the `>` and `<` operators to compare integers directly, without needing to use the `==` operator first. For example:
```
if (a > b) {
    System.out.println(a + " is greater than " + b);
} else if (a < b) {
    System.out.println(a + " is less than " + b);
} else {
    System.out.println(a + " equals " + b);
}
```
This code uses the `>` and `<` operators to compare the two integers directly, without needing to use the `==` operator first. If the condition is true, it prints the appropriate message. Otherwise, it falls through to the next `if` statement to check if the condition is false.
