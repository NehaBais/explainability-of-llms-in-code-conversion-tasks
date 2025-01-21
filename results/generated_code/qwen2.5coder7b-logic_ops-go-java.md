Here's how you can convert the given Golang code to Java:

```java
public class Main {
    public static void main(String[] args) {
        printLogic(true, false);
    }

    public static void printLogic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + (!a));
    }
}
```

This Java code defines a method `printLogic` that takes two boolean parameters. It then prints out the result of the logical AND, OR, and NOT operations on these parameters using the `&&`, `||`, and `!` operators respectively. The `main` method calls `printLogic` with sample boolean values (`true` and `false`).
