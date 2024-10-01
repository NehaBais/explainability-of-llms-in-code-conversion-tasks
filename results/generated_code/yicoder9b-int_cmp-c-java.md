Here's the equivalent Java code for your C program:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a, b;
        a = scanner.nextInt();
        b = scanner.nextInt();

        if (a < b){
            System.out.println(a + " is less than " + b);
        }

        if (a == b) {
            System.out.println(a + " is equal to " + b);
        } 

        if (a > b) {
            System.out.println(a + " is greater than " + b);
        }
    }
}
```
This Java code does the exact same thing as your C program. It gets two integer inputs from the user, compares them using the less-than (`<`), equal-to (`==`), and greater-than (`>`) operators, and prints out a message for each case.
