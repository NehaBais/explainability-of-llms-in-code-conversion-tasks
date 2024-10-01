Sure, here is the equivalent Java code for the given Python code: 

```java
public class Main {
  public static void main(String[] args) {
    boolean a = true;
    boolean b = false;
    logic(a, b);
  }

  static void logic(boolean a, boolean b) {
    System.out.println("a and b: " + (a && b));
    System.out.println("a or b: " + (a || b));
    System.out.println("not a: " + !a);
  }
}
```
In Java, it's not possible to use 'and' and 'or' directly with boolean data type, but we can simulate their behavior using '&&' and '||' operators respectively. Also, the 'not' operator in java corresponds to unary '!' operator in Python. 
This Java code uses 'main' method for executing the logic function which is calling from main method. The logic function has two boolean parameters a and b, performs logical operations on them like "and", "or" and outputs the result of not operation on first argument a.
