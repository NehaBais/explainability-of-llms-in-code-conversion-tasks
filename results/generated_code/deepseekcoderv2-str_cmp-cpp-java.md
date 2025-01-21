 Sure! Below is the equivalent Java code for the provided C++ code. This Java code demonstrates various string comparisons, including exact equality, inequality, lexicographical order, case sensitivity, and numeric comparisons.

```java
import java.util.Locale;
import java.util.Scanner;
import java.util.stream.Collectors;

public class StringComparisonDemo {
    public static void demoCompare(String a, String b, String semantically) {
        System.out.println(a + " and " + b + " are " + (a.equals(b) ? "" : "not ")
                + "exactly " + semantically + " equal.");

        System.out.println(a + " and " + b + " are " + (!a.equals(b) ? "" : "not ")
                + semantically + "inequal.");

        System.out.println(a + " is " + (a.compareTo(b) < 0 ? "" : "not ") 
                << semantically << " ordered before " << b << '.');

        System.out.println(a + " is " + (a.compareTo(b) > 0 ? "" : "not ") 
                << semantically << " ordered after " << b << '.');
    }

    public static void main(String[] args) {
        // Case-sensitive comparisons.
        String a = (args.length > 1) ? args[1] : "1.2.Foo";
        String b = (args.length > 2) ? args[2] : "1.3.Bar";
        demoCompare(a, b, "lexically");

        // Case-insensitive comparisons by folding both strings to a common case.
        a = a.toLowerCase();
        b = b.toLowerCase();
        demoCompare(a, b, "lexically");

        // Numeric comparisons; here 'double' could be any type for which the relevant parse method is defined, eg int, long, etc.
        double numA = Double.parseDouble(a);
        double numB = Double.parseDouble(b);
        demoCompare(String.valueOf(numA), String.valueOf(numB), "numerically");
    }
}
```

### Explanation:
1. **Exact Equality and Inequality**: 
   - `a.equals(b)` checks for exact equality.
   - `!a.equals(b)` checks for inequality (inverse of exact equality).

2. **Lexical Order Comparisons**:
   - `a.compareTo(b)` is used to compare strings lexicographically.
     - If `a < b`, `a.compareTo(b) < 0`.
     - If `a > b`, `a.compareTo(b) > 0`.
     - If `a == b`, `a.compareTo(b) == 0`.

3. **Case Sensitivity**:
   - The strings are converted to lowercase using `toLowerCase()` before comparison, making the comparison case-insensitive.

4. **Numeric Comparisons**:
   - Numeric strings are parsed as doubles using `Double.parseDouble()`, and then compared numerically.

This Java code mirrors the functionality of the provided C++ code while adhering to Java's syntax and conventions.
