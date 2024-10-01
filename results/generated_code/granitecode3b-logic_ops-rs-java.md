Sure! Here's the equivalent Java code for the given Rust function:
```java
public class BooleanOps {
 public static void main(String[] args) {
  booleanAnd(true, true);
  booleanAnd(true, false);
  booleanAnd(false, true);
  booleanAnd(false, false);
  
  booleanOr(true, true);
  booleanOr(true, false);
  booleanOr(false, true);
  booleanOr(false, false);
  
  booleanNot(true);
  booleanNot(false);
 }
 
 public static void booleanAnd(boolean a, boolean b) {
  System.out.println(a + " and " + b + " -> " + (a && b));
 }
 
 public static void booleanOr(boolean a, boolean b) {
  System.out.println(a + " or " + b + " -> " + (a || b));
 }
 
 public static void booleanNot(boolean a) {
  System.out.println("not " + a + " -> " + (!a));
 }
}
```
Note that the `&&`, `||`, and `!` operators have equivalents in Java. The `&&` operator returns true only if both operands are true, while the `||` operator returns true if either operand is true. The `!` operator negates its operand.

