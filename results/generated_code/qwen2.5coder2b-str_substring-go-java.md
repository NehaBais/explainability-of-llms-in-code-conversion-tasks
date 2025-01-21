```java
package main;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = "ABCDEFGH";
        int n = 2;
        int m = 3;

        // print the index of each element
        System.out.println("Index: ");
        for (int i = 0; i < s.length(); i++) {
            System.out.print(i + " ");
        }
        System.out.println();

        // print the string itself
        System.out.println("String: " + s);
        // starting from n characters in and of m length
        System.out.println("Start " + n + ", length " + m + ":    " + s.substring(n, n+m));
        // starting from n characters in, up to the end of the string
        System.out.println("Start " + n + ", to end:      " + s.substring(n));
        // whole string minus last character
        System.out.println("All but last:         " + s.substring(0, s.length()-1));

        // starting from a known character within the string and of m length
        int dx = s.indexOf('D');
        if (dx != -1) {
            System.out.println("Start 'D', length " + m + ":  " + s.substring(dx, dx+m));
        } else {
            System.out.println("Character not found.");
        }

        // starting from a known substring within the string and of m length
        int sx = s.indexOf("DE");
        if (sx != -1) {
            System.out.println("Start 'DE', length " + m + ": " + s.substring(sx, sx+m));
        } else {
            System.out.println("Substring not found.");
        }
    }
}
```
