Here is the Java equivalent of the given C code:

```java
import java.util.*;
class Main {
    public static void main(String[] args) {
        String a, b;
        System.out.println("	eq  , ne  , gt  , lt  , ge  , le");
        while (args.length > 0) {
            a = args[0];
            b = args[1];
            args = Arrays.copyOfRange(args, 2, args.length);
            compare(a, b);
            comparecase(a, b);
        }
    }

    static void compare(String a, String b) {
        System.out.printf("%s%2d%2d%2d%2d%2d%2d  %s\n",
                a,
                0 == a.compareTo(b),
                1 == a.compareTo(b),
                -1 < a.compareTo(b),
                0 > a.compareTo(b),
                -1 <= a.compareTo(b),
                1 >= a.compareTo(b),
                b);
    }

    static void comparecase(String a, String b) {
        System.out.printf("%s%2d%2d%2d%2d%2d%2d  %s ignoring case\n",
                a,
                0 == a.compareToIgnoreCase(b),
                1 == a.compareToIgnoreCase(b),
                -1 < a.compareToIgnoreCase(b),
                -1 > a.compareToIgnoreCase(b),
                -1 <= a.compareToIgnoreCase(b),
                1 >= a.compareToIgnoreCase(b),
                b);
    }
}
```

To run the Java code, save it in a file named "Main.java" and compile it with `javac Main.java`. Then, you can execute it using the following command:

java Main ball bell ball ball YUP YEP ball BELL ball BALL YUP yep

This program demonstrates several kinds of string comparisons in Java. The `compare` and `comparecase` functions are used to compare two strings for exact equality, inequality (i.e., the inverse of exact equality), lexical comparison before or after, and case-insensitive comparison. This should cover most of the requirements for demonstrating string comparisons within the language.

Note that Java handles numeric strings as lexically ordered by default. If these are not treated as lexically ordered, you can convert them to their integer equivalents using `Integer.parseInt` before comparing them.
