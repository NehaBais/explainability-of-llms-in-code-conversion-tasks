The equivalent Java code for the given JavaScript code would be:
```java
public class Main {
    public static void main(String[] args) {
        String str = "abcdefgh";

        int n = 2;
        int m = 3;

        //  *  starting from n characters in and of m length;
        System.out.println(str.substring(n, n + m));  // => "cde"

        //  * starting from n characters in, up to the end of the string;
        System.out.println(str.substring(n));  // => "cdefgh"

        //  * whole string minus last character;
        System.out.println(str.substring(0, str.length() - 1));  // => "abcdefg"

        //  * starting from a known character within the string and of m length;
        System.out.println(str.substring(str.indexOf('b'), n + m));  // => "bcd"

        //  * starting from a known substring within the string and of m length. 
        System.out.println(str.substring(str.indexOf("bc"), n + m));  // => "bcd"
    }
}
```
Please note that in Java, indexing starts at 0. So, if you want to start from the third character, you need to pass `2` as the index. Similarly, if you want to get substring of length 3, you need to provide `3` as the end index (or you can leave it out and Java will automatically calculate it for you).
