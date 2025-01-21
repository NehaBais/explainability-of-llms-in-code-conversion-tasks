Here's how you can convert this JavaScript code to Java:

```java
import java.util.Scanner;

public class Compare {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the first integer:");
        int a = scanner.nextInt();

        System.out.println("Enter the second integer:");
        int b = scanner.nextInt();
        
        if (a == b)
            System.out.println(a + " equals " + b);
        else if (a < b)
            System.out.println(a + " is less than " + b);
        else
            System.out.println(a + " is greater than " + b);

        scanner.close();
    }
}
```
This code will prompt the user to enter two integers. It then compares these integers, and based on the comparison, prints out whether they are equal, less than, or greater than each other.

Note: `Scanner` is used in Java for reading input from users. Unlike JavaScript where we use `print` directly, in Java we must use `System.out.println` to print messages to the console. This code assumes that the user will always enter integers and not any string values.
