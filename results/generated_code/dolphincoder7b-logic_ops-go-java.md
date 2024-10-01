The equivalent Java code for the given Golang function would look something like this:
```java
import java.util.Scanner; 

public class Main { 
  
    public static void main(String[] args) 
    { 
        Scanner scanner = new Scanner(System.in); 
        int num1, num2; 

        System.out.println("Enter two integers: ");
        num1 = scanner.nextInt(); 
        num2 = scanner.nextInt(); 

        if (num1 > 0 && num2 > 0)
            System.out.println("Both numbers are positive"); 
        else
            System.out.println("At least one of the numbers is non-positive"); 
    } 
}
```
In this code, we use a Scanner object to read two integers inputted by the user. Then, we check if both numbers are positive using logical operators (&& and ||). If they're both positive, "Both numbers are positive" message will be displayed. Otherwise, "At least one of the numbers is non-positive" message will be displayed.
The `println` method outputs a formatted string to the console or other output destination specified by its arguments. The `out` object represents a stream for writing characters and objects. Here we use it to print messages to the standard output (console).
