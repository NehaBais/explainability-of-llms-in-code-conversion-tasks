 Here is the Java version of your Rust code:

```java
public class Main {
    public static void main(String[] args) {
        booleanOps(true, true);
        booleanOps(true, false);
        booleanOps(false, true);
        booleanOps(false, false);
    }
    
    static void booleanOps(boolean a, boolean b){
        System.out.println("" + a + " and " + b + " -> " + (a && b));
        System.out.println("" + a + " or " + b + " -> " + (a || b));
//        System.out.println("" + a + " xor " + b + " -> " + (a ^ b)); // Bitwise XOR operation not supported in Java
        System.out.println("not " + a + " -> " + !a);
    }
}
```
As you can see, the "xor" operation is not directly equivalent to its Rust counterpart as Java does not support bit-level operations (like bitwise XOR `^`). However, this is usually achieved through other means like using a library or using bit manipulation.
