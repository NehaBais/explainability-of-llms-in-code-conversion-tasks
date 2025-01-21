Here is the Java equivalent of your C++ code:

```java
import java.util.*;

public class Main {
    public static void main(String[] args) {
        String s = "0123456789";

        int n = 3;
        int m = 4;
        char c = '2';
        String sub = "456";

        System.out.println(s.substring(n, n + m));
        System.out.println(s.substring(n));
        System.out.println(s.substring(0, s.length() - 1));
        System.out.println(s.substring(s.indexOf(c), s.indexOf(c) + m));
        System.out.println(s.substring(s.indexOf(sub), s.indexOf(sub) + m));
    }
}
```

This Java code does the same thing as the C++ version. It creates a string `s`, and then it uses the substring method to print out substrings of this string based on your requirements. The substring method is part of the java.lang.String class, so it does not require any external imports.
