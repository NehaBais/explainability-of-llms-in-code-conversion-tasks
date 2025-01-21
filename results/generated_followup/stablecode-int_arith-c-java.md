The error is due to missing semicolons at the end of each System.out.println statement. 

Fix: Add semicolons after each System.out.println statement.

Corrected code:

```java
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();

        System.out.println("a+b = " + (a + b)));
        System.out.println("a-b = " + (a - b)));
        System.out.println("a*b = " + (a * b)));
        System.out.println("a/b = " + ((double) a / b))));
        System.out.println("a%%b = " + (a % b)));

    }
}
```
