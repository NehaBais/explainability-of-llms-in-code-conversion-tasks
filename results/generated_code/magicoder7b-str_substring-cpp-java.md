 Below is the Java equivalent of your C++ code:

```java
public class Main {
    public static void main(String[] args) {
        String s = "0123456789";

        int n = 3;
        int m = 4;
        char c = '2';
        String sub = "456";

        System.out.println(s.substring(n, n+m)); // starting from n characters in and of m length
        System.out.println(s.substring(n)); // starting from n characters in, up to the end of the string
        System.out.println(s.substring(0, s.length()-1)); // whole string minus the last character
        System.out.println(s.substring(s.indexOf(c), s.indexOf(c) + m)); // starting from a known character within the string and of m length
        System.out.println(s.substring(s.indexOf(sub), s.indexOf(sub) + m)); // starting from a known substring within the string and of m length
    }
}
```
The `substring` method in Java works similar to its C++ counterpart, but it takes two parameters: the starting index and the ending index (inclusive). The `indexOf` method is used to find the position of a character or substring within the string.
