 Below is the Java version of your C++ code:

```java
import java.util.*;
public class Main {

    public static void main(String[] args) {
        // Case-sensitive comparisons.
        String a = (args.length > 1) ? args[1] : "1.2.Foo";
        String b = (args.length > 2) ? args[2] : "1.3.Bar";
        demoCompare(a, b);

        // Case-insensitive comparisons by folding both strings to a common case.
        a = a.toLowerCase();
        b = b.toLowerCase();
        demoCompare(a, b);

        // Numeric comparisons; here 'double' could be any type for which the
        // relevant >> operator is defined, eg int, long, etc.
        double numA = Double.parseDouble(a);
        double numB = Double.parseDouble(b);
        demoCompare(numA, numB);
    }

    static void demoCompare(String a, String b) {
        System.out.println(a + " and " + b + " are " + ((a.equals(b)) ? "" : "not ")
                          + "exactly lexically equal.");

        System.out.println(a + " and " + b + " are " + ((!a.equals(b)) ? "" : "not ")
                           + "lexically inequal.");

        System.out.println(a + " is " + ((a.compareTo(b) < 0) ? "" : "not ")
                          + " lexically ordered before " + b + '.' );

        System.out.println(a + " is " + ((a.compareTo(b) > 0) ? "" : "not ")
                           + "lexically ordered after " + b + '.' );
    }

    static void demoCompare(double a, double b) {
        System.out.println(a + " and " + b + " are " + ((Double.compare(a, b)) ? "" : "not ")
                          + "exactly numerically equal.");

        System.out.println(a + " and " + b + " are " + ((Double.compare(a, b) != 0) ? "" : "not ")
                           + "numerically inequal." );
    }
}
```
Please note that the `==` operator for string comparison does not work as expected in Java because it compares references rather than values. Therefore we use `equals()` method instead. For numeric comparisons, `Double.compare(a, b)` is used which returns zero if a and b are equal, a negative integer if a is less than b, or a positive integer if a is greater than b.
