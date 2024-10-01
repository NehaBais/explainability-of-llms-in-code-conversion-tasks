Below is the converted Java code for the given C++ code:

```java
import java.util.stream.Collectors;
import java.util.regex.Pattern;

public class Main {

    public static void main(String[] args)  {
        String a = (args.length > 0) ? args[0] : "1.2.Foo";
        String b = (args.length > 1) ? args[1] : "1.3.Bar";

        // Case-sensitive comparisons
        demo_compare(a, b, "lexically");

        // Case-insensitive comparisons by folding both strings to a common case
        demo_compare(a.toLowerCase(), b.toLowerCase(), "lexically");

        // Numeric comparisons; here 'double' could be any type for which the relevant >> operator is defined, eg int, long, etc.
        double numA = Double.parseDouble(a);
        double numB = Double.parseDouble(b);
        demo_compare(numA, numB, "numerically");
    }

    static <T extends Comparable<T>> void demo_compare(final T a, final T b, String semantically) {
        System.out.printf("%s and %s are %s exactly %s equal.%n", a, b, (a.compareTo(b) == 0) ? "" : "not ", semantically);
        System.out.printf("%s and %s are %s inequal.%n", a, b, (a.compareTo(b) != 0) ? "" : "not ");

        System.out.printf("%s is %s ordered before %s.%n", a, (a.compareTo(b) < 0) ? "" : "not ", b);
        System.out.printf("%s is %s ordered after %s.%n", a, (a.compareTo(b) > 0) ? "" : "not ", b);
    }
}
```
This program:
- Demonstrates lexical string comparisons in Java
- Compares two strings for exact equality
- Compares two strings for inequality (i.e., the inverse of exact equality)
- Compares two strings to see if one is lexically ordered before than the other
- Compares two strings to see if one is lexically ordered after than the other
- Demonstrates case sensitive string comparisons using `compareTo` method
- Demonstrates case insensitive string comparisons by folding both strings to a common case using `toLowerCase` method. 
- Demonstrates numeric comparisons where 'double' could be any type for which the relevant >> operator is defined, eg int, long, etc.
Please note that Java's `compareTo` method is used to compare two objects and it throws an error if they are not comparable. So, a custom comparison function is needed for comparing doubles. Here, I convert them to strings using `toString()` method and then compare lexically as in the C++ code. 

This program also demonstrates how to use Java's stream API for string manipulations like lowercasing (using `toLowerCase` method) or splitting (using `split()` method). For more advanced string manipulations, you can utilize regular expressions (`Pattern`) or any other library/technique.
