Below is a conversion of your provided Golang code to Java:

```java
import java.util.*;

public class Main {
    public static void main(String[] args) {

        // Java string comparison operators:
        String c = "cat";
        String d = "dog";

        if (c.equals(d))) {
            System.out.println(c + " is exactly equal to " + d));
        } else {
            System.out.println(c + " is not exactly equal to " + d));
        }

        // Java also provides case-insensitive string comparison using equalsIgnoreCase() method:
        if (c.equalsIgnoreCase(d))) {
            System.out.println(c + " is exactly equal ignoring case to " + d));
        } else {
            System.out.println(c + " is not exactly equal ignoring case to " + d));
        }

        // Java also provides methods for lexical comparison:
        if (c.compareToIgnoreCase(d)) < 0) {
            System.out.println(c + " is lexically ordered before than " + d));
        } else if (c.compareToIgnoreCase(d)) > 0) {
            System.out.println(c + " is lexically ordered after than " + d));
        } else {
            System.out.println(c + " and " + d + " are not lexically ordered"));
        }

    }
}
```
This code demonstrates how to compare two strings in Java using several different methods: `equals()`, `equalsIgnoreCase()`, `compareTo()`, `compareToIgnoreCase()`. It also shows how these methods can be used for lexical comparison of strings.
