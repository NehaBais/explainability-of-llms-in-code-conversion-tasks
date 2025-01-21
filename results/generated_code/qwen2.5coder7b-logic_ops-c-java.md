Here's how you can convert the given C code to Java. In Java, boolean values are represented by `true` and `false`. The `printf` function is replaced with `System.out.printf`, and the format specifiers for integers (`%d`) remain the same.

```java
public class LogicOperations {

    // Function that takes two boolean values and prints the result of "and", "or", and "not" operations.
    public static void printLogic(boolean a, boolean b) {
        System.out.printf("a and b is %b\n", a && b);
        System.out.printf("a or b is %b\n", a || b);
        System.out.printf("not a is %b\n", !a);
    }

    // Main method to test the printLogic function.
    public static void main(String[] args) {
        // Test with both true and false values for a and b
        boolean testA = true;
        boolean testB = false;
        
        System.out.println("Testing with a = true, b = false:");
        printLogic(testA, testB);

        // Additional tests can be done here by changing the values of testA and testB.
    }
}
```

### Explanation:
1. **Class Definition**: The code is encapsulated within a class named `LogicOperations`.
2. **Function Declaration**: The `printLogic` method takes two `boolean` parameters, `a` and `b`, and prints the results of logical operations on them.
3. **Logical Operations**:
   - `a && b`: Logical AND operation.
   - `a || b`: Logical OR operation.
   - `!a`: Logical NOT operation on `a`.
4. **Main Method**: The `main` method is provided to test the `printLogic` function with different boolean values.

This Java code will produce output similar to what you would get from the original C code when run.
