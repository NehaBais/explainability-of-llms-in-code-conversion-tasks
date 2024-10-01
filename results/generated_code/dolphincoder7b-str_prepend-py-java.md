This is how you can convert the Python code to Java. It's written in a way that makes it easy for you to understand and reuse it with other tasks:

```java
public class Main {
    public static void main(String[] args) {
        String s = "12345678";
        s = "0" + s; // by concatenation
        System.out.println(s);
    }
}
```

In Java, there's no need to declare a variable like `s` as it's already defined in the code. Also, note that you don't need to specify a character encoding when using UTF-8. The correct encoding is being used (UTF-8) automatically.

This code will output `"012345678"` to the console.
