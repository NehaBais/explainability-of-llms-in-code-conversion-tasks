Here's the equivalent Java code for your C function:

```java
public class Main {
    public static void main(String[] args) {
        printLogic(true, true);
        printLogic(false, true);
        printLogic(true, false);
        printLogic(false, false);
    }

    static void printLogic(boolean A, boolean b) {
        System.out.println("A and b is " + (A && b));
        System.out.println("A or b is " + (A || b));
        System.out.println("not a is " + (!A));
    }
}
```

This Java code defines a static method named `printLogic` that takes two boolean arguments and prints the result of "and" operation, "or" operation and "not" on the first argument. The `main` function tests this with four different combinations of logical values.
