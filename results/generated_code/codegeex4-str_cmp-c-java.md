Below is the equivalent Java code for your C program:

```java
public class Main {

    public static void main(String[] args) {
        System.out.println("eq , ne , gt , lt , ge , le");
        
        String a = "ball";
        String b = "bell";

        compare(a, b);
        comparecase(a, b);

        a = "ball";
        b = "ball";

        compare(a, b);
        comparecase(a, b);

        a = "YUP";
        b = "YEP";

        compare(a, b);
        comparecase(a, b);

        a = "ball";
        b = "BELL";

        compare(a, b);
        comparecase(a, b);

        a = "ball";
        b = "BALL";

        compare(a, b);
        comparecase(a, b);

        a = "YUP";
        b = "yep";

        compare(a, b);
        comparecase(a, b);
    }

    static void compare(String a, String b) {
        System.out.printf("%s %b %b %b %b %b %b %s\n", 
        a,
        a.equals(b), !a.equals(b), a.compareTo(b) > 0, a.compareTo(b) < 0, a.compareTo(b) >= 0, a.compareTo(b) <= 0,
        b);
    }

    static void comparecase(String a, String b) {
        System.out.printf("%s %b %b %b %b %b %b %s ignoring case\n", 
        a,
        a.equalsIgnoreCase(b), !a.equalsIgnoreCase(b), a.compareToIgnoreCase(b) > 0, a.compareToIgnoreCase(b) < 0, a.compareToIgnoreCase(b) >= 0, a.compareToIgnoreCase(b) <= 0,
        b);
    }
}
```
This Java program uses the `equals()`, `equalsIgnoreCase()`, `compareTo()`, and `compareToIgnoreCase()` methods to achieve comparisons between two strings. The `equals()` method checks if two strings are identical character by character (case-sensitive comparison), whereas `equalsIgnoreCase()` does so without considering case.

The `compareTo()` method compares two strings lexicographically, returning a negative integer, zero, or positive integer as the first string is less than, equal to, or greater than the second string respectively (also case sensitive).

`compareToIgnoreCase()` works similarly but performs a case-insensitive comparison.
