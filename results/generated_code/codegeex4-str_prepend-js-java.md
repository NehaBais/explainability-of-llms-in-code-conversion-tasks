In Java, you can't directly prepend strings as in JavaScript, but this can be achieved by using the `StringBuilder` class. Here's how it can be done:

```java
public class Main {
    public static void main(String[] args) {
        StringBuilder s = new StringBuilder(", World");
        s.insert(0, "Hello");
        System.out.println(s.toString());
    }
}
```
This code creates a `StringBuilder` object with the value ", World". Then it uses the `insert()` method to prepend "Hello" to the beginning of the string. Finally, it prints out the resulting string.
