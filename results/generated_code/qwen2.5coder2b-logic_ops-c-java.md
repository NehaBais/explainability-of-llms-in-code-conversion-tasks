Sure, here's the Java equivalent of your C code:

```java
public class Main {
    public static void printLogic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + (!a));
    }

    public static void main(String[] args) {
        // Testing the function
        printLogic(true, false);
        printLogic(false, true);
        printLogic(true, true);
        printLogic(false, false);
    }
}
```

In this Java code:
- The `printLogic` method takes two boolean parameters (a and b).
- It uses the logical operators `&&`, `||`, and `!` to perform "and", "or", and "not" operations on these inputs.
- The results of each operation are then printed using `System.out.println`.
- In the `main` method, we've added a few test cases (`true && false`, `false && true`, `true && true`, `false && false`) to verify that the function works correctly.
