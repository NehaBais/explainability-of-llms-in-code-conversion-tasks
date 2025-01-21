The error occurred because Java does not have an equivalent to JavaScript's '!==', '!==', '<', '>' operators. The `==`, `!=` methods are used instead.

To fix this, we need to use the strict equality operator (`===`) and the non-strict equality operator (`!=`). Additionally, to check for lexical order, we can use the `compareToIgnoreCase` method which is part of the `String` class in Java. This method compares two strings lexicographically ignoring case differences.

Here's the corrected code:

```java
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
