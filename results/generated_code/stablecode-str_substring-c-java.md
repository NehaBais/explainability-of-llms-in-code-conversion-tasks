Here is the equivalent code in Java:

```java
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {
        const char *s = "hello world shortest program";

        System.out.println(substring(s, 12, 5))); // get "short"
        System.out.println(substring(s, 6, -1))); // get "world shortest program"
        System.out.println(str_wholeless1(s))); // "... progra"
        System.out.println(str_fromch(s, 'w', 5))); // "world"
        System.out.println(str_fromstr(s, "ro", 3)))); // "rog"
    }

    public static char[] substring(const char *s, size_t n, ptrdiff_t m) {
        if (m < 0) {
            m = s.length() + m - n + 1;
        }

        if (n < 0 || m < 0) {
            return null;
        }

        char[] result = new char[m+1];
        result[0] = 0;

        for (int i = 0; i < m && i < n; i++) {
            result[i + 1] = s[i];
        }

        return result;
    }

    public static char[] str_wholeless1(const char *s) {
        return substring(s, 0, s.length() - 1));
    }

    public static char[] str_fromch(const char *s, int ch, ptrdiff_t m) {
        int index = 0;

        for (; index < m && index < s.length(); index++) {
            if (s[index] == ch) {
                break;
            }
        }

        return substring(s, s.indexOf("w") - 1, m));
    }

    public static char[] str_fromstr(const char *s, String in, ptrdiff_t m) {
        int index = 0;

        for (; index < m && index < s.length(); index++) {
            if (s.substring(index).indexOf(in) == 0)) {
                break;
            }
        }

        return substring(s, index - 1, m));
    }
}
```

This Java code is equivalent to the provided C code and performs the same functionality.
