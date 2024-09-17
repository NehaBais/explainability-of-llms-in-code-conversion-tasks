Below is the equivalent Java code:

```java
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int a = Integer.parseInt(reader.readLine());
        int b = Integer.parseInt(reader.readLine());

        if (a < b) {
            System.out.println(a + " is less than " + b);
        } else if (a == b) {
            System.out.println(a + " equals " + b);
        } else if (a > b) {
            System.out.println(a + " is greater than " + b);
        }
    }
}
```
This code does the following:

- It imports necessary classes for input and exception handling.
- Inside `main()`, it creates a new BufferedReader to read user input from standard in (stdin).
- It reads the first line from the input and parses it as an integer, assigning the value to variable `a`. This is repeated for the second line and assigned to variable `b`.
- The program then checks whether `a` is less than, equal to, or greater than `b` using the `<`, `==`, and `>` operators respectively. For each case, it prints a corresponding message.
