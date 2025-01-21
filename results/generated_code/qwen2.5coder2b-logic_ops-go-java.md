Sure, here's how you can convert the Go code to Java:

```java
public class Main {
    public static void main(String[] args) {
        printLogic(true, true);
        printLogic(false, false);
        printLogic(true, false);
        printLogic(false, true);
    }

    public static void printLogic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + (!a));
    }
}
```

This Java code does the same thing as your Go code. It defines a `printLogic` method that takes two boolean arguments and prints out the results of the "and", "or" and "not" operations on these arguments. The main method calls this function with some test cases to demonstrate its functionality.
