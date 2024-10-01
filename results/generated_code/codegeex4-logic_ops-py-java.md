Here is your Python code converted to Java:

```java
public class Logic {
    public static void main(String[] args) {
        boolean a = true;
        boolean b = false;

        logic(a, b);
    }

    public static void logic(boolean a, boolean b) {
        System.out.println("a and b: " + (a && b));
        System.out.println("a or b: " + (a || b));
        System.out.println("not a: " + (!a));
    }
}
```

You need to initialize the values of `a` and `b` inside the main method before calling the logic function. The Java equivalent of Python's print statement is `System.out.println()`, and for concatenating strings with variables, you use `+`.
