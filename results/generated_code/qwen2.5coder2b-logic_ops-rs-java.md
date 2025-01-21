Sure, here is the equivalent Java code for the given Rust code:

```java
public class Main {
    public static void main(String[] args) {
        booleanOps(true, true);
        booleanOps(true, false);
        booleanOps(false, true);
        booleanOps(false, false);
    }

    public static void booleanOps(boolean a, boolean b) {
        System.out.println(a + " and " + b + " -> " + (a && b));
        System.out.println(a + " or " + b + " -> " + (a || b));
        System.out.println(a + " xor " + b + " -> " + (a ^ b));
        System.out.println(!a + " -> " + (!a));
    }
}
```

In this Java code, I have replaced the `println` method with `System.out.println` as it is in Rust. The `boolean_ops` method has been given an appropriate parameter type and function signature based on your Rust requirement. Finally, the main function calls the `booleanOps` method for each pair of boolean values to demonstrate its functionality.
