Below is the Java equivalent of your C code:

```java
public class Main {
    public static void main(String[] args) {
        String str = "Good Morning";
        String cstr = " to all";
        String cstr2 = " !!!";

        if (str.length() < 24 && cstr.length() + cstr2.length() <= 24 - str.length()) {

            /* 1st method */
            str.concat(cstr);

            /* 2nd method */
            str = String.format("%s%s", str, cstr2);

            System.out.println(str);
        }
    }
}
```

Note that Java strings are immutable. So, the `concat()` function returns a new string instead of modifying the original one. This is why we need to re-assign the value of `str` after concatenation.

Also, I have removed the size check because in Java, you wouldn't typically deal with fixed-length arrays like in C for strings - instead you'd use dynamic data structures provided by the language such as String or StringBuilder.
