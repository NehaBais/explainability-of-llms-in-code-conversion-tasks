Here's the equivalent Java code for your C++ function:

```java
public class Main {
    public static void printLogic(boolean A, boolean b) {
        System.out.println("A and b is " + (A && b));
        System.out.println("A or b is " + (A || b));
        System.out.println("not a is " + (!A));
    }

    public static void main(String[] args) {
        printLogic(true, false); // Replace true and false with your desired boolean values
    }
}
```

In this Java code, the `main` function calls the `printLogic` function with two boolean arguments. You can replace these boolean arguments with any value you want to check. The function will then output whether the first argument is "and" or "or"ed with the second argument as well as the "not" of the first argument, just like your C++ code does.
