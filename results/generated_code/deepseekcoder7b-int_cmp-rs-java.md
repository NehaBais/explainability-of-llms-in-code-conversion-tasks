Below is the equivalent Java code for your Rust program. I have commented on each section to explain what it's doing.

```java
import java.util.*;

public class Main {
    public static void main(String[] args)  {
        Scanner scan = new Scanner(System.in); // Create a Scanner object for reading from the user
        
        System.out.println("Enter two integers:");
  
        int a = scan.nextInt(); // read first integer input by the user
        int b = scan.nextInt(); // read second integer input by the user
      
        if (a < b) {           // test condition for less than case
            System.out.printf("%d is less than %d\n", a, b); 
         } else if (a == b) {  // test condition for equals to case
             System.out.printf("%d equals %d\n", a, b);   
        } else if (a > b) {   // test condition for greater than case
            System.out.printf("%d is greater than %d\n", a, b); 
         }    
      
        scan.close();           // close the Scanner object after use to prevent resource leak
    }
}
```
Note: Java's `Scanner` class allows us to read inputs from the user through the console. It automatically handles conversion of input strings into numeric types (in this case, integers). We also make sure to close the scanner afterwards to free up system resources. 
The "printf" is used for formatting text along with variables and it's equivalent of Rust println! macro.

