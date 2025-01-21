Here is your code converted to Java:

```java
import java.nio.CharBuffer;
import java.text.BreakIterator;

public class Main {

    public static void main(String[] args) {
        String s = "ABCDEFGH";
        int n = 2, m = 3;

        System.out.println("Index: 01234567");
        System.out.println("String: " + s);

        // starting from n characters in and of m length
        System.out.printf("Start %d, length %d:    %s%n", n, m, s.substring(n, n+m));

        // starting from n characters in, up to the end of the string
        System.out.printf("Start %d, to end:      %s%n", n, s.substring(n));

        // whole string minus last character
        System.out.printf("All but last:         %s%n", s.substring(0, s.length()-1));

        // starting from a known character within the string and of m length
        int dx = s.indexOf('D');
        if (dx != -1) {
            System.out.printf("Start 'D', length %d:  %s%n", m, s.substring(dx, dx+m));
        } else {
            System.out.println("'D' not found in string");
        }

        // starting from a known substring within the string and of m length
        int sx = s.indexOf("DE");
        if (sx != -1) {
            System.out.printf("Start \"DE\", length %d:  %s%n", m, s.substring(sx, sx+m));
        } else {
            System.out.println("\"DE\" not found in string");
        }
    }

}
```

This Java code follows the same logic as your Go code. It uses the `substring` method of the `String` class to get substrings. Note that Java's substring is 0-based, just like Go's. The `indexOf` method of the `String` class is used to find the index of a specified character or substring.

Remember to use proper indentation and formatting in your code for better readability!
