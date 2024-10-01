The Java code equivalent for the given C code is:

```Java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        if (args.length < 2) return;
        int b = Integer.parseInt(args[1]);
        if (b == 0) return;
        int a = Integer.parseInt(args[0]);
        System.out.println("a+b = " + (a+b));
        System.out.println("a-b = " + (a-b));
        System.out.println("a*b = " + (a*b));
        System.out.println("a/b = " + (a/b)); /* truncates towards 0 in Java */
        System.out.println("a%b = " + (a%b)); /* same sign as first operand in Java */
    }
}
```
This Java program reads two integer command-line arguments `a` and `b`, performs the mathematical operations specified in your requirement, and prints the results to the console. If there are not enough arguments or `b` is zero, it simply returns without doing anything (which is equivalent to exiting with a status code).

The division operator `/` rounds towards zero in both C99 and Java. The remainder operator `%` yields the remainder of the Euclidean division; its sign matches that of the first operand in both C99 and Java.
