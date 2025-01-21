Here is the equivalent code in Java:

```java
public class Main {
    public static void booleanOps(boolean a, boolean b) {
        System.out.println(a + " and " + b + " -> " + (a && b));
        System.out.println(a + " or " + b + " -> " + (a || b));
        System.out.println(a + " xor " + b + " -> " + (a ^ b)); // XOR in Java is not a built-in operator, so it's replaced with the condition below
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
In Java, the XOR operator (`^`) works on bits and can't be directly applied to `boolean` values. It is equivalent to a conditional (ternary) expression in this case: `a ^ b` is equal to `(a && !b) || (!a && b)`.

If you want to implement an xor operation for booleans that behaves like the logical xor, you can create a method as shown below:

public static boolean xor(boolean a, boolean b){
    return (a && !b) || (!a && b);
}

public static void booleanOps(boolean a, boolean b) {
    System.out.println(a + " and " + b + " -> " + (a && b));
    System.out.println(a + " or " + b + " -> " + (a || b));
    System.out.println(a + " xor " + b + " -> " + xor(a, b));
    System.out.println("not " + a + " -> " + !a);
}
