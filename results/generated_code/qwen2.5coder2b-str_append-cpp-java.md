In Java, you can use the `+` operator to append strings or the `concat()` method. Here's how you can convert the given C++ code to Java:

```java
public class Main {
    public static void main(String[] args) {
        String greeting = "Hello";
        greeting += ", world!";
        System.out.println(greeting);
    }
}
```

The `+` operator is used to concatenate strings in Java. When you append a string literal, it will be concatenated to the existing string in the variable, without changing its original value.
