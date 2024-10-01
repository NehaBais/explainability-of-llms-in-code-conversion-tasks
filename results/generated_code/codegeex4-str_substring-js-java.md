```java
public class Main {
    public static void main(String[] args) {
        String str = "abcdefgh";

        int n = 2;
        int m = 3;

        // * starting from n characters in and of m length
        System.out.println(str.substring(n, n + m)); // => "cde"

        // * starting from n characters in, up to the end of the string
        System.out.println(str.substring(n)); // => "cdefgh"
        System.out.println(str.subSequence(n, str.length())); // => "cdefgh"

        // * whole string minus last character
        System.out.println(str.substring(0, str.length() - 1)); // => "abcdefg"

        // * starting from a known character within the string and of m length
        int index = str.indexOf('b');
        if(index != -1) {
            System.out.println(str.substring(index, index + m)); // => "bcd"
        }

        // * starting from a known substring within the string and of m length.
        index = str.indexOf("bc");
        if(index != -1) {
            System.out.println(str.substring(index, index + m)); // => "bcd"
        }
    }
}
```
This Java code does exactly what the JavaScript version does. It uses the `substring` method to get substrings from a given string and the `indexOf` method to find the position of a specified character or substring within that string. It also handles cases where the index might not be found by using an if statement to ensure that it doesn't attempt to create a substring with a negative start index.
