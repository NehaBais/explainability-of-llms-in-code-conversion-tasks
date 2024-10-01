 In Java, we can use the `String.format()` function to replace placeholders in a string with specified values. Here is equivalent code in Java:

```java
public class Main {
    public static void main(String[] args) {
        System.out.printf("Mary had a %s lamb", "little");
        // You can specify order
        System.out.printf("%s had a %s lamb", "Mary", "little");
        // Or named arguments if you prefer
        System.out.printf("%1$s had a %2$s lamb", "Mary", "little");
    }
}
```
In this Java code, `%s` is the placeholder that will be replaced by the provided value. The `System.out.printf()` function uses `printf`-style formatting, and `$1`/`$2` are placeholders for first (`$1`) and second (`$2`) argument respectively when used in a format string.

Note: Unlike Rust's `{}`, Java’s `%s` is only used to insert a `String`. If you want to insert an integer, you can use `%d`.
