Here's the equivalent Java code for your Go function:

```java
public class Main {
   public static void printLogic(boolean A, boolean B) {
        System.out.println("A and B is " + (A && B));
        System.out.println("A or B is " + (A || B));
        System.out.println("not A is " + !A);
    }

   public static void main(String[] args) {
        boolean a = true; // replace with your boolean variable
        boolean B = false; // replace with your boolean variable
        printLogic(A, B);
    }
}
```

This Java code does the same thing as your Go function. It defines a method `printLogic()` that takes two booleans and prints their "and", "or", and "not" values. The `main()` function is an entry point for this program, so we call `printLogic()` with some boolean variables (you can replace them with your own variable). 

Note: In Java, the `!` operator has higher precedence than `&&` or `||`, so we need to wrap `A && B` and `A || B` in parentheses to ensure they are evaluated first.
