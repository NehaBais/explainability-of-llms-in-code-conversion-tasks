Here is the Java equivalent of your Python code. This Java version uses Scanner class for getting input from user.

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter value of a: ");
        int a = sc.nextInt();

        System.out.print("Enter value of b: ");
        int b = sc.nextInt();

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
This Java code does exactly the same thing as your Python script: it reads two integers from the user, and then compares them using all three comparison operators (<, >, ==), just like in the original Python code.
