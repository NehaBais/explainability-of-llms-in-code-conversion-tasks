In Java, string interpolation is achieved using the `String.format()` method. Here's how you can convert the Rust code to Java:

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Mary had a %s lamb", "little");
        // You can specify order
        System.out.printf("%2$s had a %1$s lamb%n", "little", "Mary");
        // Or named arguments if you prefer
        System.out.printf("name=%s, adj=%s -> %s had a %s lamb%n", 
                          "Mary", "little", "Mary", "little");
    }
}
```

In the Java code:

- `%s` is used as a placeholder for strings.
- `System.out.println()` and `System.out.printf()` are used to print the formatted strings. The difference between them is that `printf()` allows you to use format specifiers.
- For specifying order, `System.out.printf()` uses indices (`%1$s`, `%2$s`) corresponding to the arguments passed in the same order as they appear in the argument list.

For named arguments, Java does not directly support named placeholders like Rust's named interpolation. However, this can be achieved by using a combination of variables and string concatenation or by creating custom methods to handle such cases.
