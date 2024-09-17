 Here is the code in Java:
```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int sum = a + b;
        int difference = a - b;
        int product = a * b;
        int division = (int) Math.floor(a / (double) b); // This produces the integer quotient of dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator
        int remainder = a % b;  // This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator

        System.out.printf("a + b = %d\n", sum);  // The %d syntax is a placeholder that is replaced by the sum
        System.out.printf("a - b = %d\n", difference);
        System.out.printf("a * b = %d\n", product);
        System.out.printf("a / b = %d\n", division);
        System.out.printf("a %% b = %d\n", remainder);
    }
}
```
