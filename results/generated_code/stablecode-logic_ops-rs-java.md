Here is the equivalent Java code:

```java
public class BooleanOps {

    public static void booleanOps(boolean a, boolean b) {
        System.out.println("{} and {} -> {}", a, b, (a && b)));
        System.out.println("{} or {} -> {}", a, b, (a || b)));
        System.out.println("{} xor {} -> {}", a, b, (a ^ b)));
        System.out.println("not {} -> {}"
                , a, !a));
    }

    public static void main(String[] args) {
        booleanOps(true, true);
        booleanOps(true, false);
        booleanOps(false, true);
        booleanOps(false, false);
    }

}
```

This Java program does the exact same thing as your provided Rust code. It includes functions that take two boolean values and apply various logical operations on those values. The main function demonstrates applying these operations to different combinations of input boolean values.
