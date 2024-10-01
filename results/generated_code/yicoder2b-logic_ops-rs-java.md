Sure, here is the equivalent Java code for your Rust function.
```java
public class Main {

    public static void main(String[] args) {
        boolean_ops(true, true);
        boolean_ops(true, false);
        boolean_ops(false, true);
        boolean_ops(false, false);
    }

    private static void boolean_ops(boolean a, boolean b){
        System.out.println("Boolean Operations in Java: " + a + " and " + b + " -> " + (a && b));
        System.out.println("                         " + a + " or "  + b + " -> " + (a || b));
        System.out.println("                          xor "  + b + " -> " + (a ^ b));
        System.out.println("                           not "  + a + " -> " + !a);
    }
}
```
