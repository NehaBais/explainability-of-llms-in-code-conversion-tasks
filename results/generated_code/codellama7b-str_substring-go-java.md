 Here is the equivalent Java code for the given Go code:
```java
import java.util.Scanner;
public class HelloWorld{
    public static void main(String[] args){
        String s = "ABCDEFGH";
        int n = 2;
        int m = 3;
        // for reference
        System.out.println("Index: "+s.substring(0,s.length()));
        System.out.println("String:"+s);
        // starting from n characters in and of m length
        System.out.printf("Start %d, length %d:    %s\n", n, m, s.substring(n,n+m));
        // starting from n characters in, up to the end of the string
        System.out.printf("Start %d, to end:      %s\n", n, s.substring(n,s.length()));
        // whole string minus last character
        System.out.printf("All but last:         %s\n", s.substring(0,s.length()-1));
        // starting from a known character within the string and of m length
        int dx = s.indexOf('D');
        System.out.printf("Start 'D', length %d:  %s\n", m, s.substring(dx,dx+m));
        // starting from a known substring within the string and of m length
        int sx = s.indexOf("DE");
        System.out.printf("Start \"DE\", length %d: %s\n", m, s.substring(sx,sx+m));
    }
}
```
Note that in Java, the `Scanner` class is not used to read input from the user like it is in Go. Instead, we use the `System.in` object and the `readLine()` method to read input from the command line or a file. The code for reading input has been removed from this example.
Also, Java does not have a built-in function for formatting strings like Go's `fmt.Printf()`. Instead, we use the `%` operator to specify placeholders in the format string, which are then replaced by the corresponding arguments when the format string is used with the `printf()` method.
