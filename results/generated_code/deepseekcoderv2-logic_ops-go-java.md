 Sure! Below is the equivalent Java code for the provided Golang function:

```java
public class LogicalOperations {
    public static void printLogic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + !a);
    }

    public static void main(String[] args) {
        printLogic(true, true);
        printLogic(true, false);
        printLogic(false, true);
        printLogic(false, false);
    }
}
```

In this Java code:
- The `printLogic` method takes two boolean arguments.
- It prints the results of "and" (`&&`), "or" (`||`), and "not" (`!`) operations on these arguments.
- The `main` method demonstrates calling `printLogic` with different combinations of boolean values for testing purposes.
