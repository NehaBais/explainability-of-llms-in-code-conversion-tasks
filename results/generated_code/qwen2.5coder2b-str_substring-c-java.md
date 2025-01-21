```java
public class Main {
    public static void main(String[] args) {
        String s = "hello world shortest program";

        System.out.println(substring(s, 12, 5)); // get "short"
        System.out.println(substring(s, 6, -1)); // get "world shortest program"
        System.out.println(str_wholeless1(s));    // "... progra"
        System.out.println(str_fromch(s, 'w', 5));   // "world"
        System.out.println(str_fromstr(s, "ro", 3));  // "rog"
    }

    public static String substring(String s, int n, int m) {
        if (s == null || n < 0 || m < 0) {
            return null;
        }
        if (n >= s.length()) {
            return "";
        }
        if (m <= 0) {
            m = s.length() - n + 1;
        }
        String result = new String(s.substring(n, Math.min(n + m, s.length())));
        return result;
    }

    public static String str_wholeless1(String s) {
        if (s == null || s.isEmpty()) {
            return "";
        }
        return s.substring(0, s.length() - 1);
    }

    public static String str_fromch(String s, char ch) {
        int index = s.indexOf(ch);
        if (index == -1) {
            return "";
        }
        return s.substring(index, Math.min(index + 5, s.length()));
    }

    public static String str_fromstr(String s, String in) {
        int index = s.indexOf(in);
        if (index == -1) {
            return "";
        }
        return s.substring(index, Math.min(index + 3, s.length()));
    }
}
```
In Java, the `substring` method is used to extract a portion of a string. The `str_wholeless1`, `str_fromch`, and `str_fromstr` methods handle cases when the starting index or the length is out of bounds by returning an empty string.
