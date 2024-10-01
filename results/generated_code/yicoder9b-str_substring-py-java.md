Here is your requested Java code. Note that unlike Python, some operations (like excluding last character or substring operations) are slightly different in Java as well.
Java also uses 0-based index.

```java
public class Main {
    static String s = "abcdefgh";
    static int n = 2, m = 3;
    static char c = 'd';
    static String sc = "cd";

    public static void main(String[] args) {
        // starting from n=2 characters in and of m length.
        System.out.println(s.substring(n-1, n+m-1)); // substring method doesn't include the end index hence n+m-1.

        // starting from n characters in, up to the end of the string;
        System.out.println(s.substring(n-1)); 

        // whole string minus last character;
        System.out.println(s.substring(0, s.length() - 1)); // Excludes the last character

        // starting from a known character and of m length;
        int indx = s.indexOf(c);
        if (indx >= 0) {
            System.out.println(s.substring(indx, indx+m));
        }

        // starting from a known substring within the string and of m length. 
        int indxSubStr = s.indexOf(sc);
        if (indxSubStr >=0) {
            System.out.println(s.substring(indxSubStr, indxSubStr+m));
        }
    }
}
```
This Java code performs the same operations as your Python script but in a way that is closer to how these concepts are typically used in Java.
