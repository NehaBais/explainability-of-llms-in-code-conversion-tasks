Below is a Java version of your Golang code:

```java
import java.util.*;

public class Main {
  public static void main(String[] args) {
    String c = "cat";
    String d = "dog";

    if (c.equals(d)) {
        System.out.println(c + " is bytewise identical to " + d);
    }

    if (!c.equals(d)) {
        System.out.println(c + " Is bytewise different from " + d);
    }

    if (c.compareTo(d) > 0) {
        System.out.println(c + " is lexically bytewise greater than " + d);
    }

    if (c.compareTo(d) < 0) {
        System.out.println(c + " Is lexically bytewise less than " + d);
    }

    if (c.compareTo(d) >= 0) {
        System.out.println(c + " Is lexically bytewise greater than or equal to " + d);
    }

    if (c.compareTo(d) <= 0) {
        System.out.println(c + " Is lexically bytewise less than or equal to " + d);
    }

    String eqf = "when interpreted as UTF-8 and compared under Unicode simple case folding rules.";
    if (c.equalsIgnoreCase(d)) {
        System.out.println(c + " Equal to " + d + " " + eqf);
    } else {
        System.out.println(c + " Not equal to " + d + " " + eqf);
    }

  }
}
```
Please note that the Java String class provides a range of methods to compare strings, including equals(), equalsIgnoreCase(), compareTo(), and more. These can be used according to your requirements. Also, keep in mind that string comparison operations in Java are case sensitive by default, but you can use equalsIgnoreCase() method to perform case-insensitive comparisons.
