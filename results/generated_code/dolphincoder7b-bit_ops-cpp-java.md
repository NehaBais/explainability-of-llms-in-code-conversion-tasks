I have successfully converted the given C++ code to Java. Below is the equivalent Java code:
```java
import java.util.Scanner;
public class BitwiseOperations {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int a, b;
        System.out.println("Enter two integers (a and b): ");
        a = sc.nextInt();
        b = sc.nextInt();

        System.out.printf("%d & %d:  ", a, b);
        System.out.print(a & b);
        
        System.out.printf("\n%d | %d:   ", a, b);
        System.out.print(a | b);
        
        System.out.printf("\n%d ^ %d:  ", a, b);
        System.out.print(a ^ b);

        System.out.printf("\n~%d:    ", a);
        System.out.println(~a); 

        // Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b) 
        // is negative, or is greater or equal to the number of bits in the integer being shifted.
        System.out.printf("%d << %d:  ", a, b);
        System.out.print(a << b);
        
        System.out.printf("\n%d >> %d:  ", a, b);
        System.out.println(a >> b);

        // typically arithmetic right shift, but not guaranteed
        int ua = a;
        System.out.printf("%d >>> %d:  ", a, b);
        System.out.println(ua >>> b);
        
        // there are no rotation operators in Java, but as of Java 5, there is a standard library rotate function.
        // The rotate function works for all rotation amounts, but the integer being rotated must always be an 
        // unsigned integer.
        System.out.printf("%d <<| %d:  ", a, b);
        System.out.println(Integer.rotateLeft(a, b));
        
        System.out.printf("%d >>| %d:  ", a, b);
        System.out.println(Integer.rotateRight(ua, b));
    }
}
```
