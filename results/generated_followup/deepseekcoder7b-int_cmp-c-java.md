The error occurs because of incorrect escape sequences used in Java's string. In Java, we don't have to use `\n` for new line like we do in C programming language but instead, we can directly write it as `"\n"` or use the character '\n'. 

Here is the corrected code:

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter two integers:");
        
        int a = scan.nextInt();
        int b = scan.nextInt();

        if (a < b){
            System.out.printf("%d is less than %d%n", a, b);
        }

        if (a == b) {
            System.out.printf("%d is equal to %d%n", a, b);
        }
        
        if (a > b){
            System.out.printf("%d is greater than %d%n", a, b);
        }
    }
}
``` 
This code will work as expected and produce the desired output. The `System.out.printf` statement formats and prints text. In our case it checks if first integer (a) is less/equal to or greater than the second one (b), then print appropriate message.

