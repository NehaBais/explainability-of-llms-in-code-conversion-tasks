In Java, you can create a string variable using the `String` data type. Here's how you would translate your JavaScript code to Java:

```java
public class Main {
    public static void main(String[] args) {
        // Create a String variable equal to any text value
        String s = "hello";

        // Create another string variable whose value is the original variable concatenated with another string literal
        String s2 = s + " there!";

        // To illustrate the operation, show the content of the variables
        System.out.println("s: " + s);
        System.out.println("s2: " + s2);
    }
}
```

When you run this Java program, it will print:


s: hello
s2: hello there!

