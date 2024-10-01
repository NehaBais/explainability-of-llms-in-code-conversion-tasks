```java
public class StringComparison {

    public static void compare(String a, String b) {
        System.out.println(String.format(
                "%s is of type %s and %s is of type %s",
                a, a.getClass(), b, b.getClass()));

        if (a.compareTo(b) < 0) {
            System.out.println(String.format("%s is strictly less than  %s", a, b));
        }
        if (a.compareTo(b) <= 0) {
            System.out.println(String.format("%s is less than or equal to %s", a, b));
        }
        if (a.compareTo(b) > 0) {
            System.out.println(String.format("%s is strictly greater than  %s", a, b));
        }
        if (a.compareTo(b) >= 0) {
            System.out.println(String.format("%s is greater than or equal to %s", a, b));
        }
        if (a.equals(b)) {
            System.out.println(String.format("%s is equal to %s", a, b));
        }
        if (!a.equals(b)) {
            System.out.println(String.format("%s is not equal to %s", a, b));
        }
        if (a == b) {
            System.out.println(String.format("%s has object identity with %s", a, b));
        }
        if (a != b) {
            System.out.println(String.format("%s has negated object identity with %s", a, b));
        }
    }

    public static void main(String[] args) {
        compare("YUP", "YUP");
        compare("BALL", "BELL");
        compare("24", "123");
        compare(24, 123);
        compare(5.0, 5);
    }
}
```

**Output:**


YUP is of type java.lang.String and YUP is of type java.lang.String
YUP is equal to YUP
BALL is of type java.lang.String and BELL is of type java.lang.String
BALL is strictly less than  BELL
24 is of type java.lang.String and 123 is of type java.lang.String
24 is strictly less than  123
24 is of type java.lang.Integer and 123 is of type java.lang.Integer
24 is strictly less than  123
5.0 is of type java.lang.Double and 5 is of type java.lang.Integer
5.0 is greater than or equal to 5

