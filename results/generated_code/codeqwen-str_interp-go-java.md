The equivalent code in Java would be:

```java
public class Main {
    public static void main(String[] args) {
        String str = "Mary had a %s lamb";
        String txt = "little";
        String out = String.format(str, txt);
        System.out.println(out);
    }
}
```

In Java, the method `printf()` is used for string interpolation, just like in Golang. The `String.format()` function takes a format string and any number of arguments which are inserted into the format string at the appropriate places.
