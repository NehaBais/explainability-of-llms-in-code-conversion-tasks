 Here's the equivalent Java code for the given C function:

```java
public class LogicPrinter {
    public static void printLogic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + (!a));
    }

    public static void main(String[] args) {
        printLogic(true, true);
        printLogic(true, false);
        printLogic(false, true);
        printLogic(false, false);
    }
}
```

In this Java code:
- The `printLogic` method takes two boolean arguments (`a` and `b`).
- It prints the results of "and" (`&&`), "or" (`||`), and "not" (`!`) operations on these boolean values.
- The `main` method demonstrates how to call the `printLogic` method with different combinations of boolean values.
