 Here's the equivalent Java code for the given C++ function:

```java
public class LogicPrinter {
    public static void printLogic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + (!a));
    }

    public static void main(String[] args) {
        printLogic(true, true);  // Example usage
        printLogic(true, false); // Example usage
        printLogic(false, true); // Example usage
        printLogic(false, false);// Example usage
    }
}
```

This Java code defines a method `printLogic` that takes two boolean arguments and prints the results of "and" (`&&`), "or" (`||`), and "not" (`!`) operations on them. The `main` method demonstrates how to call this function with different combinations of boolean values.
