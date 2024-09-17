Here's the Java code that converts the JavaScript code you provided:
```java
import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter first integer: ");
 int a = scanner.nextInt();
 System.out.print("Enter second integer: ");
 int b = scanner.nextInt();
 
 if (a < b) {
 System.out.println(a + " is less than " + b);
 } else if (a > b) {
 System.out.println(a + " is greater than " + b);
 } else {
 System.out.println(a + " equals " + b);
 }
 }
}
```
This code uses the Scanner class to take input from the user for two integers. It then uses if-else statements to compare the two integers and display the appropriate message based on their relationship. The use of int instead of double is optional and can be changed depending on the requirements.

