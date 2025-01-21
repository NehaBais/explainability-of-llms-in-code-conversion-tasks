Here is the equivalent code in Java:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter number: ");
        int n1 = scanner.nextInt();
        System.out.print("Enter number: ");
        int n2 = scanner.nextInt();

        if (n1 < n2) {
            System.out.println(n1 + " is less than " + n2);
        } else if (n1 == n2) {
            System.out.println(n1 + " is equal to " + n2);
        } else {
            System.out.println(n1 + " is greater than " + n2);
        }
    }
}
```

This Java code does the same thing as your Golang code. It asks for two integers from the user and then compares them, printing out whether the first number is less than, equal to or greater than the second number.
