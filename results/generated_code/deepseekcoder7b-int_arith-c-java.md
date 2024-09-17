Here is the equivalent Java code for your provided C program. I have done some assumptions to make it work in command line, if you plan on taking input from a user interface then you need to handle that part separately. Also, Java does not support postfix increment or decrement operators like "--argc" as seen in C.

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Enter two integers:");
        int a = scan.nextInt();
        int b = scan.nextInt();
      
        System.out.printf("a+b=%d\n", a + b);
        System.out.printf("a-b=%d\n", a - b);
        System.out.printf("a*b=%d\n", a * b);
        
        // Integer division in Java truncates towards zero if the divisor is positive and toward negative infinity if it's negative. 
        // Also, as per C99 standard, remainder operator (%) gives signed result same as first operand sign.
        System.out.printf("a/b=%d\n", a / b);  
        System.out.printf("a%%b=%d\n", a % b); 
    }
}
```
This code reads two integers from the user, and then it displays their sum (+), difference (-), product (*), quotient (/), remainder (%). For quotient it uses Java's integer division which truncates towards zero. The sign of the remainder matches that of the first operand in the C99 standard.

