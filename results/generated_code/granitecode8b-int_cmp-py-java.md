Here's the Java code that fulfills the requirement:
```java
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter value of a: ");
 int a = scanner.nextInt();
 System.out.print("Enter value of b: ");
 int b = scanner.nextInt();
 
 if (a < b) {
 System.out.println("a is less than b");
 } else if (a > b) {
 System.out.println("a is greater than b");
 } else {
 System.out.println("a is equal to b");
 }
 }
}
```
This code uses the `Scanner` class to get input from the user. It then compares two integers using the `<`, `>` and `==` operators, and prints a message based on the comparison result. The `else if` statement ensures that all three comparison operators are used in the code.
You can test the condition for each case separately by running the code with different input values. For example:
- If you enter 2 as the value of `a` and 3 as the value of `b`, the output should be "a is less than b".
- If you enter 3 as the value of `a` and 3 as the value of `b`, the output should be "a is equal to b".
- If you enter 4 as the value of `a` and 3 as the value of `b`, the output should be "a is greater than b".

