```java
import java.util.Locale;

public class Main {

    public static void main(String[] args) {
        // Case-sensitive comparisons.
        String a = (args.length > 0) ? args[0] : "1.2.Foo";
        String b = (args.length > 1) ? args[1] : "1.3.Bar";
        demo_compare(a, b, "lexically");

        // Case-insensitive comparisons by folding both strings to a common case.
        a = a.toLowerCase(Locale.getDefault());
        b = b.toLowerCase(Locale.getDefault());
        demo_compare(a, b, "lexically");

        // Numeric comparisons; here 'double' could be any type for which the
        // relevant >> operator is defined, eg int, long, etc.
        Double numA, numB;
        try {
            numA = Double.parseDouble(a);
            numB = Double.parseDouble(b);
            demo_compare(numA, numB, "numerically");
        } catch (NumberFormatException e) {
            System.out.println("Cannot parse strings as numbers.");
        }
    }

    public static void demo_compare(Object a, Object b, String semantically) {
        if (!(a instanceof Comparable)) {
            throw new IllegalArgumentException("Objects must implement Comparable interface.");
        }

        boolean isEqual = ((Comparable) a).compareTo(b) == 0;
        System.out.println(a + " and " + b + " are " + (isEqual ? "" : "not ") + "exactly "
                + semantically + " equal.");

        boolean isNotEqual = !isEqual;
        System.out.println(a + " and " + b + " are " + (isNotEqual ? "" : "not ")
                + semantically + " inequal.");

        boolean isOrderedBefore = ((Comparable) a).compareTo(b) < 0;
        System.out.println(a + " is " + (isOrderedBefore ? "" : "not ") + semantically
                + " ordered before " + b + '.');

        boolean isOrderedAfter = !isOrderedBefore && isEqual == false;
        System.out.println(a + " is " + (isOrderedAfter ? "" : "not ")
                + semantically + " ordered after " + b + '.');
    }
}
```

This Java code does the equivalent of the C++ version. It demonstrates how to compare two strings for exact equality and inequality, as well as if one string is lexically ordered before or after another. It also provides case sensitive and insensitive comparisons and handles numeric comparisons when parsing strings to numbers.

The `demo_compare` method in this Java version works on objects that implement the `Comparable` interface. This means it can be used for any types that are comparable, such as strings, doubles, ints, etc.
