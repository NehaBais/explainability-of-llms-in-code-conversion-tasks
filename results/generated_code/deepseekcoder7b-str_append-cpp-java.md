Here is the equivalent Java code for your C++ program:

```java
public class Main {
    public static void main(String[] args) {
        StringBuilder greeting = new StringBuilder("Hello");
        greeting.append(", world!");
        
        System.out.println(greeting.toString());
    }
}
```

In Java, the equivalent of `std::string` is `StringBuilder` and its `append()` method appends a string to another. After all the modifications are done with `append()`, you need to convert it back into a regular String using `toString()`. The result will be shown in standard output (console).

