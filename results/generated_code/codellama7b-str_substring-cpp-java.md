```java
import java.util.*;
public class Main{

    public static void main(String args[]) {
        String s = "0123456789";

        int n = 3;
        int m = 4;
        char c = '2';
        String sub = "456";

        System.out.println(s.substring(n, n + m)); // starting from n characters in and of m length
        System.out.println(s.substring(n)); // starting from n characters in, up to the end of the string
        System.out.println(s.substring(0, s.length() - 1)); // whole string minus the last character
        System.out.println(s.substring(s.indexOf(c), m)); // starting from a known character within the string and of m length
        System.out.println(s.substring(s.indexOf(sub), m)); // starting from a known substring within the string and of m length
    }
}
```
Note:
* In Java, you can use `string.substring()` method to get a subset of a string.
* The first argument is the starting index of the substring, and the second argument is the ending index (exclusive). If the ending index is not specified, it will return the rest of the string from the starting index until the end.
* You can use `string.indexOf()` method to find the index of a character or a substring within a string. If the character/substring is not found, it returns -1.
* In Java, strings are immutable, so you need to create a new string object with the desired characters.
