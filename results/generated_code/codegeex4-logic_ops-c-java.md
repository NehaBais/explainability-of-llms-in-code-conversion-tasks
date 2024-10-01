In Java, there are no integer types for boolean values. However, booleans can be used directly in logical expressions. Here's the Java equivalent of your C code:

```java
public class Main {
    public static void print_logic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + (!a));
    }
    
    public static void main(String[] args) {
        print_logic(true, false);
    }
}
```

In this Java code, the `print_logic` method takes two boolean arguments and prints out the results of logical "and", "or" and "not" operations on these values. These operations are done using the && (logical AND), || (logical OR) and ! (logical NOT) operators in Java respectively.

The results from these operations are concatenated with a string and then printed out to the console using System.out.println().
