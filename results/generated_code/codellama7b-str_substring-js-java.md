Sure, I can help you with that! Here are the Java versions of the code:
```
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
        System.out.println(str.substring(str.indexOf('bc'), n + m));
    }
}
```
Note that in Java, we use `substring()` instead of `substr()`, and `length()` instead of `length` to get the length of a string. Also, we need to specify the starting index when using `substring()` as it is zero-based, unlike JavaScript which is one-based.
