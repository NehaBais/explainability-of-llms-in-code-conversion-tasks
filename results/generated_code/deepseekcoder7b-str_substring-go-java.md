Below is the equivalent Java code for your Golang script. It covers all the requirements you have mentioned in Go. Note that in this case, we are using UTF-16 encoding because it's supported by both Java and Go. We use `Character` class to get characters from Unicode index instead of byte index as per requirement.

```java
public class Main {
    public static void main(String[] args)  {
        String s = "ABCDEFGH";
        int n = 2, m = 3;
        
        // for reference
        System.out.println("Index:  01234567");
        System.out<｜begin▁of▁sentence｜>.out.println("String: " + s);
        
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
            System.out.printf("Start 'D', length %d:  %s%n", m, s.subSequence(dx, dx+m));
        }
        
        // starting from a known substring within the string and of m length
        int sx = s.indexOf("DE");
        if (sx != -1) {
            System.out.printf("Start \"DE\", length %d: %s%n", m, s.subSequence(sx, sx+m));
        }
    }
}
```

Please note that Java handles Unicode by default for String operations unlike Go where `rune` and handling of unicode is manual with Golang's `utf8` package. The UTF-16 encoding is the standard string type in both languages, so this translation works universally without additional handling required.

