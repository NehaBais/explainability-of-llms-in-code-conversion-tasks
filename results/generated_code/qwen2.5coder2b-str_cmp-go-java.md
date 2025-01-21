In Java, you can use the `String` class's `equals` method to compare two strings for equality (bytewise comparison) and its `compareTo` method to compare two strings lexicographically. The `equalsIgnoreCase` method is also available from the `String` class.

Here's a similar code in Java:

```java
public class Main {
    public static void main(String[] args) {
        String c = "cat";
        String d = "dog";

        // Compare bytewise equality
        if (c.equals(d)) {
            System.out.println(c + " is bytewise identical to " + d);
        } else {
            System.out.println(c + " is bytewise different from " + d);
        }

        // Compare lexicographically
        int cmp = c.compareTo(d);
        if (cmp == 0) {
            System.out.println(c + " is lexically the same as " + d);
        } else if (cmp < 0) {
            System.out.println(c + " is less than " + d);
        } else {
            System.out.println(c + " is greater than " + d);
        }

        // Compare bytewise lexicographically
        if (c.compareToIgnoreCase(d) == 0) {
            System.out.println(c + " equal to " + d + " (ignoring case)");
        } else {
            System.out.println(c + " not equal to " + d + " (ignoring case)");
        }
    }
}
```

In this Java code, `compareTo` returns a negative number if the first string is lexicographically less than the second, 0 if they are equal, and a positive number if the first string is greater. Note that by default, strings in Java are not case-sensitive.

The `equalsIgnoreCase` method does the same thing but ignores the case of the letters when comparing them.
