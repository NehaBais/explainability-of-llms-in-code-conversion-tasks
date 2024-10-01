In Java, you can use System.out.println() to print outputs. And for logical operations, you can directly use '&&', '||' and '!'. Here's the equivalent code:

```java
public class Main {
    public static void main(String[] args) {
        logic(true, false);
    }

    public static void logic(boolean a, boolean b) {
        System.out.println("a AND b: " + (a && b));
        System.out.println("a OR b: " + (a || b));
        System.out.println("NOT a: " + (!a));
    }
}
```

This code will print the results of the logical operations on boolean values 'a' and 'b', where in this case, 'a' is true and 'b' is false. You can replace these values with any other boolean values as per your need.
