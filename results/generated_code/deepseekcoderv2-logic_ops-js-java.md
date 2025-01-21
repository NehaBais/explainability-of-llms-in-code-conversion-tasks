 Here's the equivalent Java code for the given JavaScript function:

```java
public class Logic {
    public static void main(String[] args) {
        logic(true, true); // Example usage
        logic(true, false); // Example usage
        logic(false, true); // Example usage
        logic(false, false); // Example usage
    }

    public static void logic(boolean a, boolean b) {
        System.out.println("a AND b: " + (a && b));
        System.out.println("a OR b: " + (a || b));
        System.out.println("NOT a: " + (!a));
    }
}
```

In this Java code:
- The `main` method is used to test the `logic` function with different combinations of boolean values.
- The `logic` function takes two boolean parameters, `a` and `b`.
- It prints the results of "AND" (`&&`), "OR" (`||`), and "NOT" (`!`) operations on these parameters.
