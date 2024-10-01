In Java, the equivalent code would be:

```java
import java.util.Scanner; 

public class Main {  
    public static void main(String[] args) {  
        Scanner scanner = new Scanner(System.in);  

        System.out.println("enter two integers: ");  
        int a = scanner.nextInt();  
        int b = scanner.nextInt();  

        System.out.printf("%d + %d = %d\n", a, b, a+b); 
        System.out.printf("%d - %d = %d\n", a, b, a-b); 
        System.out.printf("%d * %d = %d\n", a, b, a*b); 
        System.out.printf("%d / %d = %d\n", a, b, a/b); // truncates towards 0
        System.out.printf("%d %% %d = %d\n", a, b, a%b); // same sign as first operand
        // no exponentiation operator in Java similar to GoLang
    }  
}  
```
This code does the following:
- It imports the `Scanner` class for reading user input.
- Asks the user to enter two integers and stores them into variables `a` and `b`.
- Prints out the sum, difference, product of these numbers.
- For division it truncates towards 0.
- The modulus operation gives a remainder which sign matches with first operand.
- There's no built-in exponentiation operator in Java like there is in GoLang.
