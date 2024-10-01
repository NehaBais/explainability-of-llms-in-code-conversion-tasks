Here is the equivalent Java code for the given Rust function:
```java
public class BooleanOps {
 public static void main(String[] args) {
 boolean_ops(true, true);
 boolean_ops(true, false);
 boolean_ops(false, true);
 boolean_ops(false, false);
 }
 
 public static void boolean_ops(boolean a, boolean b) {
 System.out.println(a + " and " + b + " -> " + (a && b));
 System.out.println(a + " or " + b + " -> " + (a || b));
 System.out.println(a + " xor " + b + " -> " + (a ^ b));
 System.out.println("not " + a + " -> " + !a);
 }
}
```
This Java code has the same functionality as the given Rust code, which takes two logical values `a` and `b` as input and prints out the result of "and", "or", "xor" and "not" operations on these values. The main method calls the boolean_ops function with different combinations of input values to demonstrate its functionality.

