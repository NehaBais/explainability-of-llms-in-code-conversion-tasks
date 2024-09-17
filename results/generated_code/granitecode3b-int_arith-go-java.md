Sure! Here's the Java code that fulfills the requirements you provided:
```java
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter two integers: ");
 int a = scanner.nextInt();
 int b = scanner.nextInt();
 System.out.println(a + " + " + b + " = " + (a + b));
 System.out.println(a + " - " + b + " = " + (a - b));
 System.out.println(a + " * " + b + " = " + (a * b));
 System.out.println(a + " / " + b + " = " + (int) Math.floor((double) a / b));
 System.out.println(a + " %% " + b + " = " + (a % b));
 }
}
```
This code uses the `Scanner` class to get input from the user, and then performs the four arithmetic operations and displays the results using the `System.out.println()` method. The `/` operator in Java truncates towards zero, which is consistent with the Golang behavior you specified. The `%` operator returns the remainder of the division, regardless of the sign of the operands, so it's consistent with your requirements as well. Note that there is no exponentiation operator in this code, which is also consistent with the Golang behavior.

