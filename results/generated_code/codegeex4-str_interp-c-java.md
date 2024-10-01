In Java, you can use String.format method for string interpolation.

Here's the equivalent code in Java:

```java
public class Main {

    public static void main(String[] args) {
        String extra = "little";
        System.out.printf("Mary had a %s lamb.\n", extra);
    }
}
```

In this code, `System.out.printf` is used instead of C's `printf`. The `%s` inside the quotes specifies that a string should be inserted at that location. This is similar to how you use `%d`, `%f`, etc., for integer and floating-point values in printf.
