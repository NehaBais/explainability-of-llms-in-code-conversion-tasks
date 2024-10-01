```java
public class Main {
    public static void compareStrings(String a, String b) {
        System.out.printf("'%s' is of type %s and '%s' is of type %s\n",
                a, a.getClass().getName(), b, b.getClass().getName());

        if (a.compareTo(b) < 0)
            System.out.printf("'%s' is strictly less than '%s'\n", a, b);
        if (a.compareTo(b) <= 0)
            System.out.printf("'%s' is less than or equal to '%s'\n", a, b);
        if (a.compareTo(b) > 0)
            System.out.printf("'%s' is strictly greater than '%s'\n", a, b);
        if (a.compareTo(b) >= 0)
            System.out.printf("'%s' is greater than or equal to '%s'\n", a, b);

        if (a.equals(b))
            System.out.printf("'%s' is equal to '%s'\n", a, b);
        if (!a.equals(b))
            System.out.printf("'%s' is not equal to '%s'\n", a, b);

        if (a == b)
            System.out.printf("'%s' has object identity with '%s'\n", a, b);
        if (a != b)
            System.out.printf("'%s' has negated object identity with '%s'\n", a, b);
    }

    public static void main(String[] args) {
        compareStrings("YUP", "YUP");
        compareStrings("BALL", "BELL");
        compareStrings("24", "123");

        // Note: This comparison will throw an error in Java due to the fact that we cannot directly compare a numeric value with another object.
        // We can only compare these objects if they implement the Comparable interface.
    }
}
```
