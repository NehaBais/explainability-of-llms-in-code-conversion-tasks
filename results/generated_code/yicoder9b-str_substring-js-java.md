Here is your JavaScript code converted to Java:

```java
import java.util.*;
public class Main {
    public static void main(String[] args) {
        String str = "abcdefgh";

        int n = 2;
        int m = 3;

        // starting from n characters in and of m length;
        System.out.println(str.substring(n, n + m));  // prints: "cde"

        // starting from n characters in, up to the end of the string;
        System.out.println(str.substring(n));  // prints: "cdefgh"

        // whole string minus last character;
        System.out.println(str.substring(0, str.length() - 1)); // prints: "abcdefg"

        // starting from a known character within the string and of m length;
        int idx = str.indexOf('b');
        if (idx >= 0) {
            System.out.println(str.substring(idx, idx + Math.min(m, str.length() - idx))); // prints: "bcd"
        }

        // starting from a known substring within the string and of m length;
        idx = str.indexOf("bc"); 
        if (idx >= 0) {
            System.out.println(str.substring(idx, idx + Math.min(m, str.length() - idx))); // prints: "bcd"
        }   
    }
}
```
