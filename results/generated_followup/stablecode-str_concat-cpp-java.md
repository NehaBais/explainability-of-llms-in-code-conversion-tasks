The error is on line 5, where we are trying to concatenate two strings without separating them with a comma (','). To fix this error, we need to separate the two strings with a comma and a space (' , '). Here's the corrected code:
```java
public class Main {

    public static void main(String[] args) {
        String s = "hello";
        System.out.println(s + " literal"));

        String s2 = s + " literal";
        System.out.println(s2));
    }
}
```
In the corrected code, we have separated the two string variables `s` and `s2`, with appropriate spaces (' ')) to ensure proper formatting.
