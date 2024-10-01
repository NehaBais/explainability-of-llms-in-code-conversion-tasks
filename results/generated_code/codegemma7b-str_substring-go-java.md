```java
public class SubstringDisplay {
    public static void main(String[] args) {
        String s = "ABCDEFGH";
        int n = 2, m = 3;

        // Index reference
        System.out.println("Index: 01234567");
        System.out.println("String: " + s);

        // Starting from n characters in and of m length
        System.out.println("Start " + n + ", length " + m + ": " + s.substring(n, n + m));

        // Starting from n characters in, up to the end of the string
        System.out.println("Start " + n + ", to end: " + s.substring(n));

        // Whole string minus last character
        System.out.println("All but last: " + s.substring(0, s.length() - 1));

        // Starting from a known character within the string and of m length
        int dx = s.indexOf('D');
        System.out.println("Start 'D', length " + m + ": " + s.substring(dx, dx + m));

        // Starting from a known substring within the string and of m length
        int sx = s.indexOf("DE");
        System.out.println("Start \"DE\", length " + m + ": " + s.substring(sx, sx + m));
    }
}
```

