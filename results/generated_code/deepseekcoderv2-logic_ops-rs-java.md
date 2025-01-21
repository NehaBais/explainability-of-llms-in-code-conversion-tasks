 Sure! Here is the equivalent code in Java:

```java
public class BooleanOps {
    public static void booleanOps(boolean a, boolean b) {
        System.out.println("" + a + " and " + b + " -> " + (a && b));
        System.out.println("" + a + " or " + b + " -> " + (a || b));
        // In Java, there is no direct XOR operator for boolean values, so we use ! to represent it
        System.out.println("" + a + " xor " + b + " -> " + (!a && b || a && !b));
        System.out.println("not " + a + " -> " + !a);
    }

    public static void main(String[] args) {
        booleanOps(true, true);
        booleanOps(true, false);
        booleanOps(false, true);
        booleanOps(false, false);
    }
}
```

### Explanation:
1. **Function Definition**: The function `booleanOps` in Java takes two boolean parameters `a` and `b`.
2. **AND Operation**: The AND operation is performed using the `&&` operator.
3. **OR Operation**: The OR operation is performed using the `||` operator.
4. **XOR Operation**: In Java, there is no direct XOR operator for boolean values, so we use the expression `!a && b || a && !b` to represent it.
5. **NOT Operation**: The NOT operation is performed using the unary `!` operator.
6. **Main Function**: The main function calls `booleanOps` with different combinations of boolean values.
