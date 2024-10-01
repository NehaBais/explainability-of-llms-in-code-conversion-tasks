```java
import java.util.Arrays;

public class Substring {

    public static String substring(String s, int n, int m) {
        if (s == null) {
            return null;
        }

        if (m < 0) {
            m = s.length() + m - n + 1;
        }

        if (n < 0 || m < 0) {
            return null;
        }

        for (; n > 0; n--) {
            if (s.charAt(n - 1) == '\u0000') {
                return null;
            }
        }

        return s.substring(n, n + m);
    }

    public static String str_wholeless1(String s) {
        return substring(s, 0, s.length() - 1);
    }

    public static String str_fromch(String s, char ch, int m) {
        int index = s.indexOf(ch);
        return substring(s, index, m);
    }

    public static String str_fromstr(String s, String in, int m) {
        int index = s.indexOf(in);
        return substring(s, index, m);
    }

    public static void main(String[] args) {
        String s = "hello world shortest program";

        System.out.println(substring(s, 12, 5)); // get "short"
        System.out.println(substring(s, 6, -1)); // get "world shortest program"
        System.out.println(str_wholeless1(s)); // "... progra"
        System.out.println(str_fromch(s, 'w', 5)); // "world"
        System.out.println(str_fromstr(s, "ro", 3)); // "rog"
    }
}
```

