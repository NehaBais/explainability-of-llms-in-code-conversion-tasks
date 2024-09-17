Here is the converted Java code for the given Golang code:
```java
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter number: ");
 int n1 = scanner.nextInt();
 System.out.print("Enter number: ");
 int n2 = scanner.nextInt();
 
 if (n1 < n2) {
 System.out.println(n1 + " is less than " + n2);
 } else if (n1 == n2) {
 System.out.println(n1 + " is equal to " + n2);
 } else {
 System.out.println(n1 + " is greater than " + n2);
 }
 }
}
```
In this Java code, we have imported the `Scanner` class from the `java.util` package to read input from the user. We have used a `Scanner` object to read two integers from the user. Then we have used a `switch` statement to compare the two integers and print the appropriate message based on the comparison result.
You can test this Java code by running it and entering different integer values as input. The output should display the correct message based on the comparison result.

