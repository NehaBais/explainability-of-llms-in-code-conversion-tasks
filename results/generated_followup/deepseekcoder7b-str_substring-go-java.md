The error occurs because of incorrect usage of escape characters `\s` within System.out print statements. The syntax for printing with System.out is not `System.out.println("String: " + s);`, but rather `System.out.printf("String: %s%n", s);`.

The fix would be to replace all instances of the incorrect escape sequences with the correct ones and change the print statements into printf formatting style.

Here is the corrected code:
```java
public class Main  {
    public static void main(String[] args)   {
        String s = "ABCDEFGH";
        int n = 2, m = 3;
        
        System.out.println("Index:  01234567");
        System.out.printf("String: %s%n", s);
        
        // starting from n characters in and of m length
        int start = s.offsetByCodePoints(n, 0);
        int end = s.offsetByCodePoints(n+m, 0);
        System.out.printf("Start %d, length %d:    %s%n", n, m, s.subSequence(start, end));
        
        // starting from n characters in, up to the end of the string
        System.out.printf("Start %d, to end:      %s%n", n, s.substring(n));
        
        // whole string minus last character
        System.out.printf("All but last:         %s%n", s.subSequence(0, s.length() - 1));
         
        // starting from a known character within the string and of m length
        int dx = s.indexOf('D');
        if (dx != -1) {
            System.out.printf("Start 'D', length %d:   %s%n", m, s.subSequence(dx, dx+m));
        }
        
        // starting from a known substring within the string and of m length
        int sx = s.indexOf("DE");
        if (sx != -1) {
            System.out.printf("Start \"DE\", length %d:  %s%n", m, s.subSequence(sx, sx+m));
        }
    }
}
```
The changes ensure the code runs without any syntax errors and it adheres to Java's standard string printing mechanism. The corrected print statements use printf formatting style and are compatible with System.out in this context.

