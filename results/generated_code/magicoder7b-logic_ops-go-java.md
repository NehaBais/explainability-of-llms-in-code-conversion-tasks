 Here's how you can write the same function in Java:

```java
public class Main {
    public static void main(String[] args) {
        printLogic(true, false);
        printLogic(false, true);
        printLogic(false, false);
        printLogic(true, true);
    }

    private static void printLogic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + !a);
    }
}
```

In Java, boolean types are handled the same way as in Golang: they can be used directly in Boolean expressions, and there's no special function to determine their truth value like `boolValue()` in Go.
The only difference between your provided Golang code and the Java version is that the output statements use parentheses around the expression for improved readability.
