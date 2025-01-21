```java
public class Main {
    public static void main(String[] args) {
        printLogic(true, false);
        printLogic(false, true);
        printLogic(true, true);
        printLogic(false, false);
    }

    public static void printLogic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + (!a));
    }
}
```
The `printLogic` function in Java does the same thing as the original C++ function. It takes two boolean arguments, prints their logical and operations, and then prints their negations. The `main` method calls this function with different pairs of boolean arguments to demonstrate its functionality.
