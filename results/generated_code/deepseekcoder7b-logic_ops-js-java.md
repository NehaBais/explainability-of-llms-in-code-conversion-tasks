Here is the Java equivalent of your JavaScript code:

```java
public class Main {
    public static void main(String[] args) {
        logic(true, false);
    }
    
    public static void logic(boolean a, boolean b)  {
      System.out.println("a AND b: " + (a && b));
      System.out.println("a OR b: "  + (a || b));
      System.out.println("NOT a: " + (!a));
    }
}
```
This code defines the `logic` method which takes two boolean parameters, `a` and `b`. It calculates `(a && b)` for AND operation, `(a || b)` for OR operation, and `(!a)` for NOT operation. Then it prints these results in a formatted manner using Java's built-in System.out println function. In the main method, you call this logic with two values (true and false).

