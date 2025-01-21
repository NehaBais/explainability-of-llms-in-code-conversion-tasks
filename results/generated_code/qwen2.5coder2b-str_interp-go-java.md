The equivalent code in Java would be:

```java
public class Main{
    public static void main(String[] args) {
        String str = "Mary had a %s lamb";
        String txt = "little";
        System.out.println(String.format(str, txt));
    }
}
```

Note: In the example above, `String.format` is used to replace `%s` with the variable value. If you need more complex string interpolation (where some values are replaced by different strings or variables at runtime), consider using `java.text.StringTokenizer` for parsing and replacing substrings.
