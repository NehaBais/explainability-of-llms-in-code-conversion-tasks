Here is the equivalent Java code for your Rust function:

```java
public class Main {
   public static void main(String[] args) {
       booleanOps(true, true);
       booleanOps(true, false);
       booleanOps(false, true);
       booleanOps(false, false);
   }

   public static void booleanOps(boolean A, boolean B) {
       System.out.println(A + " and " + B + " -> " + (A && B));
       System.out.println(A + " or " + B + " -> " + (A || B));
       System.out.println(A + " xor " + B + " -> " + (A ^ B));
       System.out.println("not " + A + " -> " + (!A));
   }
}
```

This code follows the same logic as the Rust function, printing out the results of logical operations on two booleans and their negation.
