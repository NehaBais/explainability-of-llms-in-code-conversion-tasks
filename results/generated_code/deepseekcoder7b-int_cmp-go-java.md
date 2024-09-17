The provided Go code can be directly translated into Java as follows without any substantial changes. The only difference is the language syntax and structure of Golang to Java. In this case, we use Scanner for input in Java.

Here's your equivalent java code:

```java
import java.util.Scanner;  // Import the Scanner class

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  // Create a Scanner object
        
        System.out.println("Enter number: ");
        int n1 = scan.nextInt();   // Read user input
          
        System.out.println("Enter number: ");
        int n2 = scan.nextInt();    // Read user input 
         
        if (n1 < n2) {     
            System.out.printf("%d less than %d\n", n1, n2);    
        } else if (n1 == n2) {      
            System.out.printf("%d equal to %d\n", n1, n2);  
        } else {     
            System.out.printf("%d greater than %d\n", n1, n2);   
        } 
    }
}
```
This Java code does exactly the same thing as your Go code: it takes two integer inputs from user and prints a message according to their comparison result. It checks if `n1` is less than, equal to or greater than `n2` using an if-else ladder. The difference here is that in java, we use `printf()` function for formatted output string which allows us to print the variables directly inside the string without concatenation.

