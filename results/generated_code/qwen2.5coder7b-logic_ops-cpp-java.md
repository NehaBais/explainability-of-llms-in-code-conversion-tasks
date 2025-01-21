Here's how you can convert the given C++ code to Java:

```java
public class Main {
    public static void printLogic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + (!a));
    }

    public static void main(String[] args) {
        printLogic(true, false);
    }
}
```

This Java code defines a function `printLogic` that takes two boolean parameters. It then prints out the results of the logical AND (`&&`), OR (`||`), and NOT (`!`) operations on these two values. The `main` method is provided to demonstrate how to call the `printLogic` function with example arguments.
