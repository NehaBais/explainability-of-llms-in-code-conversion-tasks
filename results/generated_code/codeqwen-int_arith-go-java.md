Here is the Java version of your Golang code:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter two integers: ");
        int A = sc.nextInt();
        int b = sc.nextInt();

        // Print sum
        System.out.printf("%d + %d = %d\n", A, b, A+b);

        // Print difference
        System.out.printf("%d - %d = %d\n", A, b, A-b);

        // Print product
        System.out.printf("%d * %d = %d\n", A, b, A*b);

        // Print integer quotient (floor division)
        System.out.printf("%d / %d = %d\n", A, b, A/b);  

        // Print remainder (same sign as the first operand)
        int remainder = A%b;
        System.out.printf("%d %% %d = %d\n", A, b, remainder); 
    }
}
```

This Java code uses `Scanner` to get inputs from the user and performs all the calculations as requested in your problem statement. The integer division operation is performed using the floor division operator (`/`) in Java which truncates towards zero like it does in Golang. The remainder operation is performed normally, and the sign of the first operand or the second one is used according to its rules for signs of the remainder.
