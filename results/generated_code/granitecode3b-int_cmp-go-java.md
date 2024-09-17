Sure! Here's the equivalent Java code:
```
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter first number: ");
 int n1 = scanner.nextInt();
 System.out.print("Enter second number: ");
 int n2 = scanner.nextInt();
 
 String comparison;
 if (n1 < n2) {
 comparison = "less than";
 } else if (n1 == n2) {
 comparison = "equal to";
 } else {
 comparison = "greater than";
 }
 
 System.out.println(n1 + " is " + comparison + " " + n2);
 }
}
```
This code uses a `Scanner` object to read input from the user, and then uses the `<`, `==`, and `>` operators to compare the two numbers. The result is stored in a string variable called `comparison`, which is then printed to the console using `System.out.println()`.

