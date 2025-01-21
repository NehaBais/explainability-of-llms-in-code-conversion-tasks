The error occurs because the `&&` (AND), `||` (OR), and `!` (NOT) operators are not valid operators for integer variables in Java. The correct way to perform these operations on boolean values is by using the `&&`, `||`, and `!` operators, respectively.
The fix is to replace the `&&`, `||`, and `!` operators with the appropriate Java operators.
Here's the corrected code in a single code block:
```java
public class LogicCalculator {
  public static void main(String[] args) {
    int a = 1;
    int b = 0;

    System.out.println("a and b is " + (a && b));
    System.out.println("a or b is " + (a || b));
    System.out.println("not a is " + (!a));
  }
}
```

