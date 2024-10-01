```java
import java.util.*;

public class StringComparisonDemo {
    public static void main(String[] args) {
        System.out.println(
            "abcd".equals("abcd") && // true (equal value and equal type)
            "abcd".equalsIgnoreCase("AbCd") &&  // true (case insensitive comparison)
            123 == Integer.parseInt("123") &&  // true (numeric conversion to integer)
            !"123".equals("123") &&  // false (not equal value)
            !123 == 123 &&  // false (not equal type)
            "abcd".compareTo("dcba") > 0 &&  // true (lexically ordered before)
            "abcd".compareTo("dcba") < 0 &&  // false (lexically ordered after)
            "ABCD".toLowerCase().equals("abcd") &&  // true (case insensitive comparison of two lowercase strings)
        );
    }
}
```
In this Java code, we demonstrate how to compare two strings for equality and inequality. We also compare two strings lexicographically to check if one string is ordered before another or after it. Additionally, we use `equals()` method to perform case-sensitive comparison, and `equalsIgnoreCase()` method to perform a case-insensitive comparison.
Note: The `parseInt` function is used to convert the string "123" into an integer for equality comparison.
