Below is the Java equivalent for your Python code:

```java
public class Main {
    public static void main(String[] args) {
        String s = "abcdefgh";
        int n = 2, m = 3;
        char char1 = 'd';
        String chars = "cd";

        // starting from n=2 characters in and m=3 in length;
        System.out.println(s.substring(n-1,n+m-1));
        // starting from n characters in, up to the end of the string;
        System.out.println(s.substring(n-1));
        // whole string minus last character;
        System.out.println(s.substring(0,s.length()-1));
        // starting from a known character char="d" within the string and of m length;
        int indx = s.indexOf(char1);
        if (indx != -1) {
            System.out.println(s.substring(indx, Math.min(indx + m, s.length())));
        }
        // starting from a known substring chars="cd" within the string and of m length. 
        indx = s.indexOf(chars);
        if (indx != -1) {
            System.out.println(s.substring(indx, Math.min(indx + m, s.length())));
        }
    }
}
```
Please note that Java's `substring(int beginIndex, int endIndex)` method is inclusive of the `beginIndex` and exclusive of the `endIndex`. In Python, slicing `[n:m]` is also inclusive of the start index (i.e., `n`) but exclusive of the end index (`m`). Therefore, when converting from Python to Java, we need to adjust the end index accordingly. 

In addition, unlike Python which raises an exception for a substring operation with a starting index that's larger than the length of the string, Java will return an empty string instead. This is why there are checks in this code to prevent such cases.

The program uses UTF-16 encoding, which can handle all Unicode characters within the Basic Multilingual Plane (BMP). For characters outside BMP, you need a library that can process surrogate pairs properly. The above example handles this by using `Math.min` to ensure not exceeding string's length.
