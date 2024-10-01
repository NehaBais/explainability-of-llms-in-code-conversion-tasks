In Java, you can use the `String.format()` method for string interpolation. Here is how your code would be converted:

```java
public class Main {
    public static void main(String[] args) {
        String str = "Mary had a %s lamb.";
        String txt = "little";
        String out = String.format(str, txt);
        System.out.println(out);
    }
}
```

This Java code will output: `Mary had a little lamb.`
