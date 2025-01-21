The error message indicates that there are 14 errors in the code, including missing semicolons, unclosed string literals, and an implicitly declared class error.
To fix these errors, we need to make sure that each statement is properly closed and that the class declaration is correct. Here's the corrected code:
```java
public class substring {
    public static void main(String[] args) {
        String s = "ABCDEFGH";
        int n = 2, m = 3;
        // for reference
        System.out.println("Index:");
        for (int i=0; i<8; i++) {
            System.out.print(i);
        }
        System.out.println("");
        System.out.println("String: " + s);
        // starting from n characters in and of m length
        System.out.printf("Start %d, length %d:    %sn", n, m, s.substring(n, n+m));
        // starting from n characters in, up to the end of the string
        System.out.printf("Start %d, to end:      %sn", n, s.substring(n));
        // whole string minus last character
        System.out.printf("All but last:         %sn", s.substring(0, s.length()-1));
        // starting from a known character within the string and of m length
        int dx = s.indexOf('D');
        System.out.printf("Start 'D', length %d:  %sn", m, s.substring(dx, dx+m));
        // starting from a known substring within the string and of m length
        int sx = s.indexOf("DE");
        System.out.printf("Start \"DE\", length %d: %sn", m, s.substring(sx, sx+m));
    }
}
```
Note that we added semicolons at the end of each statement to fix the "missing semicolon" error, and we enclosed string literals in double quotes (") to fix the "unclosed string literal" errors. Finally, we removed the implicitly declared class error by removing the `public static void` declaration and moving the code inside the `main` method to a single block.

