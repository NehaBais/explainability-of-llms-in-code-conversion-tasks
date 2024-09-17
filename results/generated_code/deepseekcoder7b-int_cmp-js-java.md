The following is the Java equivalent for your JavaScript code. Note that in order to get user input, we will need a Scanner object:

```java
import java.util.Scanner;  // Import the Scanner class

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  
        
        System.out.println("Enter two integers:");
        int a = scan.nextInt();  // Read user input for integer a
        int b = scan.nextInt();  // Read user input for integer b
      
        compare(a, b);    // Compare the integers
        
        scan.close();     // Close Scanner object after use
    }
  
    public static void compare(int a, int b) {
        if (a == b){
            System.out.println(a + " equals " + b);  // If a and b are equal
        } else if (a < b) {
            System.out.println(a + " is less than " + b);  // If a is lesser than b
        } else if (a > b){
            System.out.println(a + " is greater than " + b);  // If a is greater than b
        }
    }
}
```
This code will ask the user to enter two integers, then it will compare them and print out a message based on whether `a` is less than, equal to or greater than `b`. It uses Java's if-else construct for this task. Note that we no longer have type coercion in this language because all variables are strongly typed.

