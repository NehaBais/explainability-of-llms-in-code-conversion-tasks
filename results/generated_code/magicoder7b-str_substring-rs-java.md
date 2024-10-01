 In Java, we can use the `substring` method to extract substrings from a string. The `charAt` method can be used to access individual characters in the string. Here is how you can write this code in Java:

```java
public class Main {
    public static void main(String[] args) {
        String s = "abc文字化けdef";
        int n = 2;
        int m = 3;
        
        // Print 3 characters starting at index 2 (c文字)
        System.out.println(s.substring(n, Math.min(s.length(), n + m)));

        // Print all characters starting at index 2 (c文字化けdef)
        System.out.println(s.substring(n));
        
        // Print all characters except the last (abc文字化けde)
        StringBuilder sb = new StringBuilder(s);
        sb.reverse();
        System.out.println(sb.substring(1, sb.length() - 1));
        
        // Print 3 characters starting with 'b' (bc文)
        int cpos = s.indexOf('b');
        if (cpos != -1) {
            System.out.println(s.substring(cpos, Math.min(s.length(), cpos + m)));
        }
        
        // Print 3 characters starting with "けd" (けde)
        int spos = s.indexOf("けd");
        if (spos != -1) {
            System.out.println(s.substring(spos, Math.min(s.length(), spos + m)));
        }
    }
}
```
The `Math.min` function is used to ensure that the substring does not exceed the length of the string in cases where it would otherwise be out of bounds. The Java String class is inherently Unicode, so any valid Unicode character should be handled correctly. Note that Java's built-in indexOf method works with strings as well as characters, and can therefore also find substrings within the string.
