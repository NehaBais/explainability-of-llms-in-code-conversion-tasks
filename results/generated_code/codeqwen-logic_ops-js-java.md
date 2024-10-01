Here is the equivalent Java code for your JavaScript function:

```java
public class Main {
    public static void main(String[] args) {
        logic(true, false);
    }

    static void logic(boolean A, boolean B) {
        System.out.println("A AND b: " + (A && B));
        System.out.println("A OR b: " + (A || B));
        System.out.println("NOT a: " + (!A));
    }
}
```

In Java, the print statement is replaced by System.out.println(). The boolean values are passed as arguments to the function logic and it performs the logical operations accordingly.
