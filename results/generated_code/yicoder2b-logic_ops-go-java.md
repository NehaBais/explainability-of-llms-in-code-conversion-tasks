Sure, here's how you can convert this code snippet from Golang to Java:

```java
public class Main {
    public static void main(String[] args) {
        printLogic(true, false);
    }

    static void printLogic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b));
        System.out.println("a or b is " + (a || b));
        System.out.println("not a is " + !a);
    }
}
```
This Java code does exactly the same thing as your Golang snippet. The function `printLogic` takes two boolean arguments and prints out their logical "and", "or", and "not" results. This program calls this function with true and false values to display the results in your console.
