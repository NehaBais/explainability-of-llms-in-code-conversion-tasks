For the Java version, we would do something like this:

```java
// Importing Scanner for user input 
import java.util.Scanner;
  
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num1, num2;
            
        // User Inputs
        num1 = sc.nextInt();
        num2 = sc.nextInt();
      
        compare(num1, num2); // Function call to compare the numbers
    }
  
    static void compare (int a, int b) {
        if (a == b) { 
            System.out.println(a + " is equal to " + b);
        } else if (a < b) { 
            System.out.println(a + " is less than " + b);
        } else { 
            System.out.println(a + " is greater than " + b);
        }
    }
}
```
