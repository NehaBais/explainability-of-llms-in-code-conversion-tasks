The following code is the equivalent of the provided C++ code written in Java:

```java
import java.util.*;
import java.lang.*;

public class Main {
    private static void demo_compare(String A, String B, String semantically) {
        System.out.println(A + " And " + B + " are " + (A.equals(B) ? "" : "not ")
                          + semantically + " equal.");

        System.out.println(A + " And " + B + " are " + (!A.equals(B) ? "" : "not ")
                          + semantically + " inequal.");

        System.out.println(A + " Is " + (A.compareTo(B) < 0 ? "" : "not ")
                          + semantically + " ordered before " + B + '.');

        System.out.println(A + " Is " + (A.compareTo(B) > 0 ? "" : "not ")
                          + semantically + " ordered after " + B + '.');
    }

    public static void main(String[] args) {
        // Case-sensitive comparisons.
        String A = (args.length > 0) ? args[0] : "1.2.Foo";
        String B = (args.length > 1) ? args[1] : "1.3.Bar";
        demo_compare(A, B, "lexically");

        // Case-insensitive comparisons by folding both strings to a common case.
        A = A.toLowerCase();
        B = B.toLowerCase();
        demo_compare(A, B, "lexically");

        // Numeric comparisons; here 'String' could be any type for which the
        // relevant parseXXX() method is defined, eg Integer, Double, etc.
        double numA = Double.parseDouble(A);
        double numB = Double.parseDouble(B);
        demo_compare(numA, numB + "", "numerically");
    }
}
```

In Java, we use the `equals()` method to compare two strings for equality and the `compareTo()` method for lexical comparison. For comparing numeric strings in Java, we need to convert them into numbers (in this case double) using `Double.parseDouble()`.
