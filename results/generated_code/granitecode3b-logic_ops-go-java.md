Sure! Here's the equivalent Java code:
```
public static void printLogic(boolean a, boolean b) {
    System.out.println("a and b is " + (a && b));
    System.out.println("a or b is " + (a || b));
    System.out.println("not a is " + (!a));
}
```
Note that the `&&` and `||` operators in Java have higher precedence than the `!` operator, so we need to add parentheses to ensure the correct order of operations. Also note that the Java code uses lowercase `a` and `b`, while Golang uses uppercase.

