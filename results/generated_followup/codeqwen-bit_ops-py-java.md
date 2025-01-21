Error: Missing closing parenthesis after shift operator

Fix: Add a closing parenthesis to the end of the shift right operation string.

Corrected Java code:

```java
public class Main {
    // ... (the rest of your code remains unchanged)

    private static void bitwiseBuiltIns(int width, int A, int B) {
        // ... (the rest of your code remains unchanged)

        System.out.println("    SHIFTS:  " +
                "\n        << 1 = 0b" + String.format("%0" + width + "d", (((A << 1) & mask))) +
                "\n        >> 2 = 0b" + String.format("%0" + width + "d", (((A >> 2) & mask)))); // add closing parenthesis
    }

    // ... (the rest of your code remains unchanged)

}
```
