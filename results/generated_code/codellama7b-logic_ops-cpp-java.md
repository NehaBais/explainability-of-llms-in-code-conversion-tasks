To convert this code from C++ to Java, you can use the following approach:

1. Replace all instances of `std::cout` with `System.out.println()`.
2. Replace all instances of `std::boolalpha` with `System.out.println()`.
3. Replace the function signature `void print_logic(bool a, bool b)` with `public static void printLogic(boolean a, boolean b)`.
4. Replace the function body with the following code:

  System.out.println("a and b is " + (a && b));
  System.out.println("a or b is " + (a || b));
  System.out.println("not a is " + (!a));

Here's the complete code in Java:
```java
public class Logic {
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
