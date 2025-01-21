Error: The code contains unclosed character literals, which is not a valid Java syntax.
Fix: Add closing quotes to the character literals.

```java
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        String str = "abcdefgh";
        
        int n = 2;
        int m = 3;
        
        // Starting from n characters in and of m length:
        System.out.println(str.substring(n, n + m));
        
        // Starting from n characters in, up to the end of the string:
        System.out.println(str.substring(n));
        
        // Whole string minus last character:
        System.out.println(str.substring(0, str.length() - 1));
        
        // Starting from a known character within the string and of m length:
        System.out.println(str.substring(str.indexOf('b'), n + m));
        
        // Starting from a known substring within the string and of m length:
        System.out.println(str.substring(str.indexOf("bc"), n + m));
    }
}
```
