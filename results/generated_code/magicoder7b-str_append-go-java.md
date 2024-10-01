 In Java, you can use StringBuilder to achieve the same result. Here's how you would write this code:

```java
public class Main {
    public static void main(String[] args) {
        StringBuilder s = new StringBuilder();
        s.append("foo");
        s.append("bar");
        System.out.println(s);
    }
}
```
In this Java code:
1. We create a new instance of the `StringBuilder` class named `s`.
2. The `append()` method is used to add a string ("foo" and "bar") to our `StringBuilder` object `s`.
3. We then call the `toString()` method on `s` to convert it back into a regular string, which we print to the console with `System.out.println()`.
