Here is the equivalent Java code for your requirement.
This uses `java.util.Scanner` to read input from user and print messages according to comparison of two integers:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n1, n2;
        System.out.print("enter number: ");
        n1 = scanner.nextInt();
        System.out.print("enter number: ");
        n2 = scanner.nextInt();

        if (n1 < n2) {
            System.out.println(n1 + " is less than " + n2);
        } else if (n1 == n2) {
            System.out.println(n1 + " is equal to " + n2);
        } else  {
            System.out.println(n1 + " is greater than " + n2);
        }
    }
}
```
This Java program will behave the same way as your Go code, prompting for two numbers and printing a message based on their comparison.
