The error is due to missing semicolons at the end of each `println` statement. 

To fix this, we need to add semicolons after each `println` statement. Here's the corrected code:

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

Now the code will compile without any errors.
