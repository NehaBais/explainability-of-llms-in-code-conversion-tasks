Sure, here's the Java equivalent of your C++ code:
```java
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        String greeting = "Hello";
        greeting += " , world!";
        System.out.println(greeting);
    }
}
```
In Java, we concatenate strings with `+` instead of using the `append()` function as in C++. The reason is that in C++, the `std::string` class doesn't support overloading the `+=` operator for appending string literals, so you have to use the `append()` function. In Java, however, you can concatenate string literals together with `+`. This way of doing things is more idiomatic, and it also makes your code simpler and easier to understand.
