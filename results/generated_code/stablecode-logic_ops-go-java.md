Here's how you can convert the given Golang code to Java:

```java
public class Main {

    public static void printLogic(boolean a, boolean b) {
        System.out.println("a and b is " + (a && b)));
        System.out.println("a or b is " + (a || b)));
        System.out.println("not a is " + !a));
    }

    public static void main(String[] args) {
        printLogic(true, false);
    }
}
```
This Java code performs the same operations as your Golang code: it takes two boolean values (`a` and `b`), and outputs the result of "and" and "or" on both arguments as well as "not" on the first argument. The main function is used to call the `printLogic()` function with sample boolean inputs (i.e., true and false).
