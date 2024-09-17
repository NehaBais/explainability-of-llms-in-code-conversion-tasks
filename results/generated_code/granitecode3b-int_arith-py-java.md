Sure, here's the Java code that satisfies the requirements:
```java
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 
 System.out.print("Enter first number: ");
 int input1 = scanner.nextInt();
 
 System.out.print("Enter second number: ");
 int input2 = scanner.nextInt();
 
 int qq = input1 + input2;
 System.out.println("Sum: " + qq);
 
 int ww = input1 - input2;
 System.out.println("Difference: " + ww);
 
 int ee = input1 * input2;
 System.out.println("Product: " + ee);
 
 double rr = (double)input1 / input2;
 System.out.println("Integer quotient: " + Math.round(rr));
 System.out.println("Float quotient: " + rr);
 
 tt = (int)(input1 / input2);
uu = tt - tt * 1.0;
 System.out.println("Whole Remainder: " + int(uu));
 System.out.println("Actual Remainder: " + uu);
 
 double yy = Math.pow(input1, input2);
 System.out.println("Exponentiation: " + yy);
 }
}
```
Note that I've used `Math.round()` to round the quotient to the nearest integer, and I've calculated the remainder using the fact that the remainder of a division is equal to the difference between the operands minus the product of their quotient and the divisor. This is because the remainder can be negative if the dividend is negative and the divisor is positive, or vice versa.

