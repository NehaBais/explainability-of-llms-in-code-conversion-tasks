In Java, we don't have a `print` function like in JavaScript. Instead, we use the `System.out.println()`, which is a part of the PrintStream class (inherited from the Object superclass).

Here's your converted JavaScript code:
```java
public class Main {

    public static void main(String[] args) {
        // Creating string variable and assigning it any text value
        String s = ", World";

        // Preparing another string literal to be added before the first string literal.
        s = "Hello" + s;

        // Printing the final result using the println() function.
        System.out.println(s);
    }
}
```
This Java code is equivalent to your provided JavaScript code. It performs the same operations - creating a string variable, assigning it any text value, preparing another string literal to be added before the first string literal., and printing the final result using the println() function.
