 Here is the code in Java:
```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;
        System.out.print("Enter two integers: ");
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.println("a+b = " + (a+b));
        System.out.println("a-b = " + (a-b));
        System.out.println("a*b = " + (a*b));
        System.out.println("a/b = " + (a/b) + ", remainder = " + (a%b));
    }
}
```
Note: The code uses the `Scanner` class to get input from the user, and the `%` operator is used for the remainder operation, which rounds towards zero.
