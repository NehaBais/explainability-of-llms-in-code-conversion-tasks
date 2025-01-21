The equivalent Java code would look like this:

```java
import java.lang.String;

public class Main {
    public static void main(String[] args) {
        System.out.println("abcd".equals("abcd")); // true
        System.out.println("abcd".equalsIgnoreCase("abcd")); // true

        System.out.println("123".equals("123")); // true
        System.out.println("123".equalsIgnoreCase("123")); // false

        System.out.println("ABCD".equals("abcd")); // false
        System.out.println("ABCD".equalsIgnoreCase("abcd")); // false

        System.out.println("123" != "123"); // false
        System.out.println("123" != "123"); // true

        System.out.println("123" !== "123"); // true
        System.out.println("123" !== "123"); // false

        System.out.println("abcd".compareToIgnoreCase("dcba") == -1); // true
        System.out.println("abcd".compareToIgnoreCase("dcba") == 1); // false

        String str1 = "ABC";
        String str2 = "abc";

        System.out.println(str1.equalsIgnoreCase(str2)); // true (case insensitive)
    }
}
```

The `equals` method checks for equality between two objects, the `equalsIgnoreCase` method checks for equality with case-insensitivity and the `compareToIgnoreCase` method checks for lexical order.

Note that Java does not have an equivalent to JavaScript's '===', '!==', '<', '>' operators. The `==`, `!=` methods are used instead. Similarly, Java does not have a built-in equivalent for lexically ordered comparisons (like '<=', '>=').
