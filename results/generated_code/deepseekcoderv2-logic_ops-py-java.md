 Here's the equivalent Java code for the given Python function:

```java
public class Logic {
    public static void logic(boolean a, boolean b) {
        System.out.println("a and b: " + (a && b));
        System.out.println("a or b: " + (a || b));
        System.out.println("not a: " + !a);
    }

    public static void main(String[] args) {
        logic(true, true);
        logic(true, false);
        logic(false, true);
        logic(false, false);
    }
}
```

This Java code defines a method `logic` that takes two boolean arguments `a` and `b`, performs the logical "and" (`&&`), "or" (`||`), and "not" (`!`) operations on them, and prints the results. The `main` method demonstrates how to call this method with different sets of boolean values.
