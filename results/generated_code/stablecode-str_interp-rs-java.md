Below is the equivalent Java code for the provided Rust code. In this context, string interpolation means replacing placeholders (like {} in Rust) with values.

The equivalent Java code would be:

```java
public class Main {

    public static void main(String[] args) {
        System.out.printf("Mary had a %s lamb%n", "big");
        // You can specify order
        System.out.printf("%1$s had a %0$s lamb%n", "Mary","little");
        // Or named arguments if you prefer
        System.out.printf("%name had a %adj lamb%n", "Mary","little");
       }
}
```

In the Java code, printf() function is used for string interpolation where placeholders are replaced by values. Here, "%s" and "%1$s" denote string replacement places which are then replaced with the given values.
Similarly "%0$s", or "name had a %adj lamb" are also placeholders that get replaced by actual values provided afterwards.

This Java code works similarly to the provided Rust code for string interpolation in defined variables or values, replacing defined character sequences in the string by the provided values.
