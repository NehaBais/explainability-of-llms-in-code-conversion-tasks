Here is the equivalent Java code for your Golang program:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter number: ");
        int n1 = sc.nextInt();
        
        System.out.println("Enter number: ");
        int n2 = sc.nextInt();
        
        if (n1 < n2) {
            System.out.println(n1 + " less than " + n2);
        } else if (n1 == n2) {
            System.out.println(n1 + " equal to " + n2);
        } else {
            System.out.println(n1 + " greater than " + n2);
        }
    }
}
```
This Java program does exactly the same thing as your Golang code: it reads two integers from the user, compares them and displays a message based on their values. The conditions are evaluated in order, and the first one that is true will be executed.
