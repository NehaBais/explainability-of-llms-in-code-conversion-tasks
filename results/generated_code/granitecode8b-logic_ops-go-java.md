Here's the Java code equivalent to the Golang function you provided:
```java
public class Logic {
  public static void printLogic(boolean a, boolean b) {
    System.out.println("a and b is " + (a && b));
    System.out.println("a or b is " + (a || b));
    System.out.println("not a is " + !a);
  }
}
```
In Java, the logical AND operator is represented by the `&&` symbol, and the logical OR operator is represented by the `||` symbol. The logical NOT operator is represented by the `!` symbol. 
The function takes two boolean arguments (`a` and `b`) and prints three lines of output:
1. The result of `a && b`, which is `true` if both `a` and `b` are `true`, and `false` otherwise.
2. The result of `a || b`, which is `true` if either `a` or `b` is `true`, and `false` otherwise.
3. The result of `!a`, which is the negation of `a`.
Note that in Java, the logical AND and OR operators have higher precedence than the logical NOT operator, so you can write `!(a && b)` to get the negation of the AND operation without parentheses.

