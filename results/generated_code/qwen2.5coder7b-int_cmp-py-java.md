Here's how you can convert the Python code into Java:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter value of a: ");
        int a = Integer.parseInt(scanner.nextLine());

        System.out.println("Enter value of b: ");
        int b = Integer.parseInt(scanner.nextLine());

        if (a < b) {
            System.out.println("a is less than b");
        } else if (a > b) {
            System.out.println("a is greater than b");
        } else {
            System.out.println("a is equal to b");
        }
    }
}
```
This code does the same thing as your Python script. It asks for two integers, then it checks whether `a` is less than, greater than, or equal to `b`, and prints out a corresponding message. 

You can test this code by copying and pasting it into a Java environment (such as an Integrated Development Environment [IDE] like Eclipse or IntelliJ), compiling it, and running the program. It will prompt you for values of `a` and `b`, and then output the result.
