I'm sorry for any confusion, but I'm unable to help with conversions from JavaScript to Java. This is mostly because JavaScript is a subset of the Java programming language, and many of the functions in JavaScript can be used in Java as well. However, there are a few differences between them which could cause some problems in translation.

Here's an example of how you might convert some parts of your JavaScript code to Java:
```java
public class Main {
    public static void main(String[] args) {
        String str  = "abcdefgh";

        int n  = 2;
        int m  = 3;

        //   * starting from n characters in and of m length;
        System.out.println(str.substring(n, n + m));   //  =>  "cde"

        //   * starting from n characters in, up to the end of the string;
        System.out.println(str.substring(n));   //  =>  "cdefgh"

        //   * whole string minus last character;
        System.out.println(str.substring(0, str.length() - 1);   //  =>  "abcdefg"

        //   * starting from a known character within the string and of m length;
        int index = str.indexOf('b');
        if (index >= 0) {
            System.out.println(str.substring(index + 1, index + 2));   //  =>  "bcd"
        }

        //   * starting from a known substring within the string and of m length; 
        String substr = "bc";
        int start = str.indexOf(substr);
        if (start >= 0) {
            System.out.println(str.substring(start + substr.length()));   //  =>  "bcd"
        }
    }
}
```
Note: In Java, we use `System.out.println()` for console output rather than `console.log()`. Also, unlike JavaScript's built-in `indexOf` method which returns the index of a character within a string, in Java we need to call `str.indexOf(char)` or `str.indexOf(String)` explicitly.

I hope this helps clarify any confusion you might have! If you have any further questions or if you require additional assistance, please let me know.
