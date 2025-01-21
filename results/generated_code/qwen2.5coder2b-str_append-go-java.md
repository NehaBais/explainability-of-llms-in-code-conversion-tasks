To convert this Golang code to Java, you can use the `StringBuilder` class which is similar to the Go's `strings.Builder`. Here is how you would do it:

```java
public class Main {
    public static void main(String[] args) {
        StringBuilder s = new StringBuilder();
        s.append("foo");
        s.append("bar");
        System.out.println(s.toString());
    }
}
```

This code will create a `StringBuilder` object, append the strings "foo" and "bar" to it, and then print the final string.
