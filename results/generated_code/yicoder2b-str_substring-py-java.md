The equivalent Java code for the given Python script is as follows -
```java
public class Main {
    public static void main(String[] args) {
        String s = "abcdefgh";
        int n = 2, m = 3, charCode = (int)'d', charsCode = (int)"cd".charAt(0);
        // starting from n=2 characters in and m=3 in length;
        System.out.println(s.substring(n-1, n+m-1));
        // starting from n characters in, up to the end of the string;
        System.out.println(s.substring(n-1));
        // whole string minus last character;
        System.out.println(s.substring(0, s.length()-1));
        // starting from a known character char="d" within the string and of m length;
        int index = s.indexOf(charCode);
        System.out.println(s.substring(index, index+m));
        // starting from a known substring chars="cd" within the string and of m length. 
        index = s.indexOf(charsCode);
        System.out.println(s.substring(index, index+m));
    }
}
```
Note that we need to convert the characters 'd' and "cd" to their corresponding ASCII values before we can use them in string methods like `substring`. Also, Java uses 0-based indexing, hence n=2 refers to the second character of the string (at index 1), and so on.
