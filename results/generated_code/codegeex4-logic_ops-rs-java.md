Below is the equivalent Java code for your given Rust code:

```java
public class Main {

    public static void booleanOps(boolean a, boolean b) {
        System.out.println(a + " and " + b + " -> " + (a && b));
        System.out.println(a + " or " + b + " -> " + (a || b));
        System.out.println("not " + a + " -> " + (!a));

    }

    public static void main(String[] args) {
        booleanOps(true, true);
        booleanOps(true, false);
        booleanOps(false, true);
        booleanOps(false, false);
    }
}
```

In the above Java code, `boolean` is equivalent to `bool` in Rust. The logical operators `&&`, `||`, and `!` are equivalent to `and`, `or` and `not` respectively in Rust.

Please note that Java does not support XOR operator for boolean type like Rust. That's why I commented out the last operation in your code. To implement XOR operation, you need to create a custom method or use existing library.
