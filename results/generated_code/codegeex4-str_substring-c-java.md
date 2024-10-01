Here is the Java equivalent of your C code:

```java

public class Main {
    public static void main(String[] args) {
        String s = "hello world shortest program";

        System.out.println(substring(s, 12, 5));	// get "short"
        System.out.println(substring(s, 6, -1));	// get "world shortest program"
        System.out.println(strWholeless1(s));	// "... progra"
        System.out.println(strFromch(s, 'w', 5));	// "world"
        System.out.println(strFromstr(s, "ro", 3));	// "rog"
    }

    public static String substring(String s, int n, int m) {
        /* check for null s */
        if (s == null)
            return null;

        /* negative m to mean 'up to the mth char from right' */
        if (m < 0)
            m = s.length() + m - n + 1;
        
        /* n < 0 or m < 0 is invalid */
        if (n < 0 || m < 0)
            return null;

        /* make sure string does not end before n 
         * and advance the "s" pointer to beginning of substring */
        for (; n > 0; s = s.substring(1), n--)
            if (s.isEmpty())
                /* string ends before n: invalid */
                return null;
        
        return s.length() >= m ? s.substring(0, m) : s;
    }

    public static String strWholeless1(String s) {
        return substring(s, 0, s.length() - 1);
    }

    public static String strFromch(String s, char ch, int m) {
        int index = s.indexOf(ch);
        if (index == -1)
            return null;
        
        return substring(s, index, m);
    }

    public static String strFromstr(String s, String in, int m) {
        int index = s.indexOf(in);
        if (index == -1)
            return null;

        return substring(s, index, m);
    }
}
```

Note: The `substring` method of Java's `String` class takes the starting index and number of characters to retrieve from that starting index. In your code, you used the syntax where `m` is a length, not an end index. Therefore, I adjusted the `substring` function in Java to work similarly by getting the start index (which would be `index`) and then using the `substring` method of `String` class with the `start index` and `length` (`end - start`).
