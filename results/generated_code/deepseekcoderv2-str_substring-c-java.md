 Here's the equivalent Java code for the provided C code:

```java
public class Substring {
    public static String substring(String s, int n, int m) {
        // check for null s
        if (s == null) {
            return null;
        }

        // negative m to mean 'up to the mth char from right'
        if (m < 0) {
            m = s.length() + m - n + 1;
        }

        // n < 0 or m < 0 is invalid
        if (n < 0 || m < 0) {
            return null;
        }

        // make sure string does not end before n
        // and advance the "s" pointer to beginning of substring
        for (; n > 0; s = s.substring(1), n--) {
            if (s.charAt(0) == '\u0000') {
                // string ends before n: invalid
                return null;
            }
        }

        if (n < 0 || m < 0) {
            return null;
        }

        StringBuilder result = new StringBuilder();
        for (int i = 0; i < m && n + i < s.length(); i++) {
            result.append(s.charAt(n + i));
        }
        return result.toString();
    }

    public static String strWholeLess1(String s) {
        return substring(s, 0, s.length() - 1);
    }

    public static String strFromCh(String s, char ch, int m) {
        int index = s.indexOf(ch);
        if (index == -1) {
            return null;
        }
        return substring(s, index, m);
    }

    public static String strFromString(String s, String in, int m) {
        int index = s.indexOf(in);
        if (index == -1) {
            return null;
        }
        return substring(s, index, m);
    }

    public static void main(String[] args) {
        String s = "hello world shortest program";

        test(substring(s, 12, 5)); // get "short"
        test(substring(s, 6, -1)); // get "world shortest program"
        test(strWholeLess1(s));    // "... progra"
        test(strFromCh(s, 'w', 5));// "world"
        test(strFromString(s, "ro", 3)); // "rog"
    }

    public static void test(String result) {
        if (result == null) {
            System.out.println("--error--");
        } else {
            System.out.println(result);
        }
    }
}
```

This Java code provides the same functionality as the provided C code, including handling UTF-8 or UTF-16 encoded strings correctly and displaying substrings based on different criteria:

1. Starting from `n` characters in and of `m` length.
2. Starting from `n` characters in, up to the end of the string.
3. Whole string minus the last character.
4. Starting from a known character within the string and of `m` length.
5. Starting from a known substring within the string and of `m` length.

The `test` method is used to print the results or indicate an error if the result is null.
