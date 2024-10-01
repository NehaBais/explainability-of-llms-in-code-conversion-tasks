The equivalent code in Java would be:

```java
public class Main {
    public static void main(String[] args) {
        System.out.println("Mary had a " + "little lamb");
        // You can specify order
        System.out.println("%s had a %s lamb", "Mary", "little");
        // Or named arguments if you prefer
        System.out.printf("%s had a %s lamb", "Mary", "little");
    }
}
```

Please note that in Java, to use string interpolation or `{}` syntax with `println()` functions, it's not required to put the placeholder (`%s`) and variable (like "little") together within a single argument passed to `printf()` function. Also, you can replace `+` operator with the appropriate method such as `String.format()`, `String.format("...")` or just `String.format()`.
