 Below is the equivalent Java code for your Golang program:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter number: ");
        int n1 = scanner.nextInt();
        System.out.println("Enter number: ");
        int n2 = scanner.nextInt();
        switch (true) {
            case n1 < n2:
                System.out.println(n1 + " less than " + n2);
                break;
            case n1 == n2:
                System.out.println(n1 + " equal to " + n2);
                break;
            case n1 > n2:
                System.out.println(n1 + " greater than " + n2);
                break;
        }
    }
}
```
Please note that Java does not have a standard logging framework like Golang's log package, so I simply used `System.out.println` in this example to print the error message. The rest of the code is equivalent to your Golang version.
