Here's how you can convert the given Golang code to Java:

```java
public class Main {
    public static void main(String[] args) {
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

        if (c.compareToIgnoreCase(d) > 0) {
            System.out.println(c + " is lexicographically case-insensitively greater than " + d);
        }
        if (c.compareToIgnoreCase(d) < 0) {
            System.out.println(c + " is lexicographically case-insensitively less than " + d);
        }

        // Java's string comparisons are Unicode based.
        // For numeric strings, they are not treated lexically. 
        // This is similar to how Go handles this.

        // Java does not have an equivalent to the golang.org/x/text subrepository,
        // but there are additional libraries like ICU4J that provide these functionalities.
    }
}
```

In Java:

- String comparison for exact equality: Use `equals()` method
- String comparison for inequality: Use `!equals()` method
- Lexical comparisons can be done with the `compareTo()` and `compareToIgnoreCase()` methods. The former performs a case-sensitive comparison, while the latter ignores case.
- For numeric strings, Java does not treat them lexically by default, but you can use third-party libraries like ICU4J for more advanced string comparison functionalities if required.
