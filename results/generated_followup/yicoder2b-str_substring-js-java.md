The error occurs because of incorrect usage of `System.out.println` function in Java. It requires a semicolon (`;`) at the end to denote it as a statement, but it's missing in your code. Here is how you can fix the errors:

- The first error was about not closing a character literal, which can be fixed by adding a semi-colon `;` at the end of each line. You have them already.
  
- The other errors were due to incorrect usage of substring function in Java. It requires two parameters where the first is the start index and the second is the length of the string you want to get from that index till the end, but according to your code it seems like it's trying to use it with single parameter. 
  
- The corrected code should look like:
```java
public class Main {
    public static void main(String[] args) {
        String str = "abcdefgh";

        int n = 2;
        int m = 3;

        // starting from n characters in and of m length
        System.out.println(str.substring(n, n + m)); // => "cde"

        // starting from n characters in, up to the end of the string
        System.out.println(str.substring(n)); // => "cdefgh"

        // whole string minus last character
        System.out.println(str.substring(0, str.length() - 1)); // => "abcdefg"

        // starting from a known character within the string and of m length
        System.out.println(str.substring(n, n + m)); // => "cde"

        // starting from a known substring within the string and of m length
        System.out.println(str.substring(str.indexOf('b'), str.indexOf('b') + m)); // => "bcd"
    }
}
```
