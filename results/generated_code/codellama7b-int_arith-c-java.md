```java
import java.util.Scanner;
public class JavaCode {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a, b;
        if (args.length < 3) exit(1);
        b = Integer.parseInt(args[--args.length]);
        if (b == 0) exit(2);
        a = Integer.parseInt(args[--args.length]);
        System.out.println("a+b = " + (a+b));
        System.out.println("a-b = " + (a-b));
        System.out.println("a*b = " + (a*b));
        System.out.println("a/b = " + (a/b)); // truncates towards 0 (in Java 9)
        System.out.println("a%%b = " + (a%b)); // same sign as first operand (in Java 9)
    }
}
```
