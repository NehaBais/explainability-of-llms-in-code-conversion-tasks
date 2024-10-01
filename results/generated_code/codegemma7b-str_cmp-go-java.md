```java
public class StringComparison {

    public static void main(String[] args) {
        // Java string comparison operators:
        String c = "cat";
        String d = "dog";
        if (c.equals(d)) {
            System.out.println(c + " is bytewise identical to " + d);
        }
        if (!c.equals(d)) {
            System.out.println(c + " is bytewise different from " + d);
        }
        if (c.compareTo(d) > 0) {
            System.out.println(c + " is lexically bytewise greater than " + d);
        }
        if (c.compareTo(d) < 0) {
            System.out.println(c + " is lexically bytewise less than " + d);
        }
        if (c.compareTo(d) >= 0) {
            System.out.println(c + " is lexically bytewise greater than or equal to " + d);
        }
        if (c.compareTo(d) <= 0) {
            System.out.println(c + " is lexically bytewise less than or equal to " + d);
        }

        // Java is strongly typed and will not directly compare a value of string
        // type to a value of numeric type.

        // A case insensitive compare can be done with the containsIgnoreCase() method:
        if (c.equalsIgnoreCase(d)) {
            System.out.println(c + " equal to " + d + " when interpreted as UTF-8 and compared under Unicode simple case folding rules.");
        } else {
            System.out.println(c + " not equal to " + d + " when interpreted as UTF-8 and compared under Unicode simple case folding rules.");
        }

        // Java provides additional string comparison methods in the String class, including:
        // - compareToIgnoreCase() for case insensitive comparison
        // - contains() for checking for substrings
        // - startsWith() and endsWith() for checking for prefix and suffix
        // - split() for splitting strings into substrings
    }
}
```

