Below is the equivalent code in Java:

```java
import java.util.Comparator;
import java.nio.charset.StandardCharsets;

public class Main {

    public static void main(String[] args) {

        // case-sensitive comparisons:

        String a = "abc";
        String b = "Bac";

        if (a.equals(b))) {
            System.out.println("The strings are equal");
        }

        if (a.compareTo(b)) != 0) {
            System.out.println("The first string is lexically after the second");
        } else if (a.compareToIgnoreCase(b))) == -1) {
            System.out.println("The first string is lexically before the second");
        }

        // case-insensitive comparisons:
        if (a.equalsIgnoreCase(b)))) {
            System.out.println("Both strings are equal when ignoring case");
        }
    }
}
```
Please note that Java's string comparison methods (`compareTo()`, `equals()`, `equalsIgnoreCase()`)) work differently than Rust's ones (`==` and `>=` for strict equality and lexical ordering, respectively). Specifically:
- In Java, the `compareTo()` method returns a negative integer, zero, or a positive integer when the string referenced by this object is lexicographically before, equal to, or greater than the string referenced by the given object.
- The `equals()` method compares this String to the given StringObject. Returns true if and only because the given String has exactly the same characters in it as this String (ignoring case and ignoring any difference between Unicode representations of characters)).
- Java's `equalsIgnoreCase()` method is similar to its counterpart in Rust, i.e., `==` or `===` for loose equality or exact equality (both case sensitive and case insensitive), respectively). This method also ignores case differences but compares strings character by character starting from the beginning until a difference between two characters is found or until the end of one string is reached.
