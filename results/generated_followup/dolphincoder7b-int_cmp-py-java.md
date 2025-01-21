The error occurs because Java does not support the input function from Python. When using it, we need to use "Scanner" instead of the input() function. Here's how to fix this:

```java
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter value of a: ");
        int a = scanner.nextInt();

        System.out.print("Enter value of b: ");
        int b = scanner.nextInt();

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

1. In Java, the "input" function was deprecated and replaced with "Scanner", which allows us to handle user input.
2. We need to import the Scanner class by adding an import statement at the top of our code.
3. The error message says that "class", "interface", "enum", or "record expected". This means we need to specify what type of object we're creating, which in this case is a scanner object.
4. We must initialize a new Scanner object with the "new" keyword.
5. To get integer values from user input, we use the nextInt() function.
6. To display a message based on the comparison result, we use the println() function instead of print().
7. Since our code is within a main method, the whole program can be run in one go using "java Main".
