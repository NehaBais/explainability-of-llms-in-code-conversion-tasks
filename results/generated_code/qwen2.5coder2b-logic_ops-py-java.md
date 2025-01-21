Sure! Below is the Java equivalent of the Python code:

```java
public class LogicOperations {
    public static void main(String[] args) {
        // Define the two boolean values
        boolean a = true;
        boolean b = false;

        // Perform operations and print results
        performAnd(a, b);
        performOr(a, b);
        performNot(a);
    }

    private static void performAnd(boolean a, boolean b) {
        System.out.println("a and b: " + (a && b));
    }

    private static void performOr(boolean a, boolean b) {
        System.out.println("a or b: " + (a || b));
    }

    private static void performNot(boolean a) {
        System.out.println("not a: " + !a);
    }
}
```

### Explanation:
1. **`main` Method**: This is the entry point of the program.
2. **Defining Boolean Values**: `boolean a = true;` and `boolean b = false;` define the two boolean values.
3. **Performing Operations**:
   - The `performAnd` method takes two boolean arguments and prints the result of their conjunction (`a && b`).
   - The `performOr` method takes two boolean arguments and prints the result of their disjunction (`a || b`).
   - The `performNot` method takes one boolean argument and prints the result of its negation (`!a`).
4. **Executing Operations**: These methods are called within the `main` method to perform the operations.

This Java code will produce the same output as the Python code, but in a structured and object-oriented manner.
