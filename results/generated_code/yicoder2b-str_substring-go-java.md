This is the equivalent Java code for the given Golang program - 

```java
public class Main {
    public static void main(String[] args) {
        String s = "ABCDEFGH";
        int n = 2, m = 3;
        System.out.println("Index: " + "0123456789");
        System.out.println("String: " + s);
        // starting from n characters in and of m length
        System.out.printf("Start %d, length %d:    %s\n", n, m, s.substring(n, n+m));
        // starting from n characters in, up to the end of the string
        System.out.println("Start " + n + ", to end: " + s.substring(n));
        // whole string minus last character
        System.out.printf("All but last:         %s\n", s.substring(0, s.length()-1));
        // starting from a known character within the string and of m length
        int dx = s.indexOf('D');
        System.out.printf("Start 'D', length %d:  %s\n", m, s.substring(dx, dx+m));
        // starting from a known substring within the string and of m length
        int sx = s.indexOf("DE");
        System.out.printf("Start \"DE\", length %d: %s\n", m, s.substring(sx, sx+m));
    }
}
```
Please note that the Java code is similar to the Golang version, but it uses the `String` method `substring()` instead of slicing in Golang. The difference lies in that the substring() method returns a new String which includes the character elements from the original string beginning at index "from" and ending just before index "to", inclusive. In contrast, the slicing operator `s[n:n+m]` in Golang does not include the 'm'th character (it is equivalent to `s[n:n+m-1]`).
