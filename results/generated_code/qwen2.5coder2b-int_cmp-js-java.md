Sure, here's how you can convert the JavaScript code to Java:

Java uses different syntax for variables and functions.

```java
import javax.swing.JOptionPane;

public class Compare {
    public static void main(String[] args) {
        // Get two integers from the user using JOptionPane
        int num1 = Integer.parseInt(JOptionPane.showInputDialog("Enter first integer:"));
        int num2 = Integer.parseInt(JOptionPane.showInputDialog("Enter second integer:"));

        compare(num1, num2);
    }

    public static void compare(int a, int b) {
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
In this program:
- `JOptionPane.showInputDialog()` is used to prompt the user for input, where they can enter two integers.
- The `Integer.parseInt()` method is used to convert the strings entered by the user into integer values.
- The `compare()` method checks the condition using if-else statement and prints the appropriate message.
