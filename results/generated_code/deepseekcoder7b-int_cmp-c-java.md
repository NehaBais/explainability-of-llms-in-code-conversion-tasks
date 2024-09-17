Here's the equivalent Java code for your C program:

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
            System.out<｜begin▁of▁sentence｜>plain(""+ a + " is equal to " + b);
        }
        
        if (a > b){
            System.out.printf("%d is greater than %d%n", a, b);
        }
    }
}
``` 
Please note that the `printf` function in Java uses placeholder `%d` for integer and `%n` for new line just like C programming language. And also to print formatted string in java we can use String format specifiers(like " %d is equal to %d", a, b) inside printf statement or using System.out.printf() method as shown above.

