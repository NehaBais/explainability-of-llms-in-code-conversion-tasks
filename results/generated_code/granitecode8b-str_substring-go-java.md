Here is the converted code from Golang to Java:
```java
package main;
import java.lang.*;
public classsubstring {
    public static void main(String[] args) {
        String s = "ABCDEFGH";
        int n = 2, m = 3;
        // for reference
        System.out.println("Index: ");
        for (int i=0; i<8; i++) {
            System.out.print(i);
        }
        System.out.println("");
        System.out.println("String: " + s);
        // starting from n characters in and of m length
        System.out.printf("Start %d, length %d:    %s
", n, m, s.substring(n, n+m));
        // starting from n characters in, up to the end of the string
        System.out.printf("Start %d, to end:      %s
", n, s.substring(n));
        // whole string minus last character
        System.out.printf("All but last:         %s
", s.substring(0, s.length()-1));
        // starting from a known character within the string and of m length
        int dx = s.indexOf('D');
        System.out.printf("Start 'D', length %d:  %s
", m, s.substring(dx, dx+m));
        // starting from a known substring within the string and of m length
        int sx = s.indexOf("DE");
        System.out.printf("Start \"DE\", length %d: %s
", m, s.substring(sx, sx+m));
    }
}
```
Note that in Java, the `substring` method takes two arguments - the starting index and the ending index (excluding). So we need to add 1 to the ending index for the second example. Also, the `indexOf` method returns the first occurrence of the character or substring, so there's no need to manually calculate the starting index in the last two examples.

