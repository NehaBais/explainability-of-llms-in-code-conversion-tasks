Here's how you can convert your Rust code to Java:

```java
public class Main {
    public static void main(String[] args) {
        String s = new StringBuilder("World").insert(0, "Hello ").toString();
        System.out.println(s);
    }
}
```

The equivalent in Java is `StringBuilder` which allows you to modify a string without creating a new object each time. The `insert()` method is used to insert text into the `StringBuilder`, and then `toString()` is called to convert it back to a `String`.
