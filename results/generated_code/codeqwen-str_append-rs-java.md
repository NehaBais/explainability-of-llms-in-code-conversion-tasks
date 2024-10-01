The given Rust code can be converted to Java as follows:

In the first example, we are using StringBuilder's append function to add the string literal at the end of the existing string.
```java
public class Main {
    public static void main(String[] args) {
        String hello = "Hello world";
        System.out.println(hello + "!!!!");
    }
}
```

In the second example, we are using StringBuilder's push function to add the string literal at the end of the existing string.

public class Main {
    public static void main(String[] args) {
        StringBuilder hello = new StringBuilder("Hello world");
        hello.append("!!!!");
        System.out.println(hello);
    }
}
