 Here is your Python function translated into Java:

```java
public class Main {
    public static void logic(boolean a, boolean b) {
        System.out.println("a and b: " + (a && b));
        System.out.println("a or b: " + (a || b));
        System.out.println("not a: " + !a);
    }
  
    public static void main(String[] args) {
        logic(true, false);  // Test the function with some arguments
    }
}
```

This Java code does exactly what your Python function did. It takes two boolean values and prints their "and", "or" and "not" results. You can modify the main method to test this `logic` method with different inputs if you want.
