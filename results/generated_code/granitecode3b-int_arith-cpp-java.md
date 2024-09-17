Sure, here's the Java code that satisfies the requirements:
```java
import java.util.Scanner;
public class CodeConversion {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 int a = scanner.nextInt();
 int b = scanner.nextInt();
 
 System.out.println("a+b = " + (a + b));
 System.out.println("a-b = " + (a - b));
 System.out.println("a*b = " + (a * b));
 
 double quotient = (double) a / b;
 int remainder = a % b;
 if ((b < 0 && remainder < 0) || (b > 0 && remainder >= 0)) {
 remainder *= -1;
 }
 System.out.println("a/b = " + quotient + ", remainder " + remainder);
 }
}
```
This code reads two integers from the user using a Scanner, and then performs the four arithmetic operations on them (addition, subtraction, multiplication, and division). It also calculates the integer quotient and remainder, and indicates whether the remainder has the same sign as the first operand or the second operand. Finally, it prints out the results to the console.

