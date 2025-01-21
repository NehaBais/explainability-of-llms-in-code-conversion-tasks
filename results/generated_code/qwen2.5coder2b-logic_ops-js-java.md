In Java, you can use the logical operators `&&` and `||` for "and" and "or", respectively. The boolean operator `!` is used for "not". Here's how to convert your JavaScript function into Java:

```java
public class Logic {
    public static void main(String[] args) {
        logic(true, true);
        logic(false, false);
        logic(true, false);
        logic(false, true);
    }

    public static void logic(boolean a, boolean b) {
        System.out.println("a AND b: " + (a && b));
        System.out.println("a OR b: " + (a || b));
        System.out.println("NOT a: " + (!a));
    }
}
```

This Java code defines a `Logic` class with a `main` method that calls the `logic` function with different arguments. The `logic` function takes two boolean parameters `a` and `b`, prints out the results of `a && b`, `a || b`, and `!a`.
