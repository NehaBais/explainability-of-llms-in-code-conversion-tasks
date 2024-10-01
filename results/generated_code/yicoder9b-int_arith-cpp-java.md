In Java, the code would look like this:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        
        // sum
        int sum = a + b; 
        System.out.println("a+b = " + sum);  
        
        // difference
        int diff = a - b;
        System.out.println("a-b = " + diff);  
        
        // product
        int prod = a * b; 
        System.out.println("a*b = " + prod);    
        
        // integer quotient and remainder
        if (b!=0) { // Prevent division by zero
            int quot = a / b;  
            int rem = a % b;   
            System.out.println("a/b = " + quot + ", remainder " + rem); 
        } else {
            System.out.println("Cannot compute quotient and remainder when the second number is zero");
        }  
    }
}
```

About the requirements:
- The division operator (/) in Java performs a floor division, i.e. it rounds towards negative infinity. This means that `5/-2` will result in `-3` instead of `-2` which would be the case if rounding towards zero as in C++.
- The sign of the remainder is the same as the first operand (a), not the second one.
- There's no built-in exponentiation operator (`**`) like in Python or an equivalent method `Math.pow()` in Java. You can calculate a to power b using `Math.pow(a, b)`, which will return a double value and need explicit cast if you want int as result.
