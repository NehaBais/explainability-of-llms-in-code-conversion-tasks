```java
public class Main {
    public static void main(String[] args) {
        String c = "cat";
        String d = "dog";

        // Compare two strings for exact equality
        if (c.equals(d)) {
            System.out.println(c + " is exactly identical to " + d);
        }

        // Compare two strings for inequality
        if (!c.equals(d)) {
            System.out.println(c + " is different from " + d);
        }

        // Compare two strings to see if one is lexically ordered before the other
        if (c.compareTo(d) < 0) {
            System.out.println(c + " is lexicographically less than " + d);
        }
        
        // Compare two strings to see if one is lexically ordered after the other
        if (c.compareTo(d) > 0) {
            System.out.println(c + " is lexicographically greater than " + d);
        }

        // Case sensitive comparison example:
        String e = "CAT";
        if (!c.equals(e)) {
            System.out.println(c + " is different from " + e);
        }

        // Case insensitive comparison using equalsIgnoreCase method
        String f = "Cat";
        if (c.equalsIgnoreCase(f)) {
            System.out.println(c + " is equal to " + f + " ignoring case");
        }
    }
}
```

In the above Java code:
- `equals()` method is used for exact string comparison.
- `compareTo()` method can be used to compare strings lexicographically. If it returns a negative value, the first string is less than the second one; if it returns zero, they are equal; and if it returns a positive value, the first string is greater.

To compare strings ignoring case in Java, you can use `equalsIgnoreCase()` method which compares two strings for equality, ignoring case considerations.
