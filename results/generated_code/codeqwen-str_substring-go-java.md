Here is the equivalent Java code for your Golang program:

```java
public class Main {
    public static void main(String[] args) {
        String s = "ABCDEFGH";
        int n = 2;
        int m = 3;

        // For reference
        System.out.println("Index: \t01234567");
        System.out.println("String: \"" + s + "\"");

        // starting from n characters in and of m length
        System.out.printf("Start %d, length %d:    %s\n", n, m, s.substring(n, n + m));

        // starting from n characters in, up to the end of the string
        System.out.printf("Start %d, to end:      %s\n", n, s.substring(n));

        // whole string minus last character
        System.out.printf("All but last:         %s\n", s.substring(0, s.length() - 1));

        // starting from a known character within the string and of m length
        int dx = s.indexOf('D');
        System.out.printf("Start 'D', length %d:  %s\n", m, s.substring(dx, dx + m));

        // starting from a known substring within the string and of m length
        String sxStr = "DE";
        int sx = s.indexOf(sxStr);
        System.out.printf(`Start "%s", length %d: %s\n`, sxStr, m, s.substring(sx, sx + m));
    }
}
```

Java does not have a direct equivalent to Golang's `strings.IndexByte()` and `strings.Index()`. We use the `indexOf()` method for both these functionalities. In the example above, we find index of character 'D' and substring "DE" in the string s, respectively. 

The Java code also uses `substring(int beginIndex, int endIndex)` to extract parts of the string based on their start and end indices.
The `%d` placeholders in the printf function are replaced with actual values by using `printf`'s argument list. The index is not incremented as per Go’s way of referencing characters in a string, because Java works directly with Unicode code points.
