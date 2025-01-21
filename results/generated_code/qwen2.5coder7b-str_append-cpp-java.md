Here is the equivalent code in Java:

```java
public class Main {

    public static void main(String[] args) {
        String greeting = "Hello";
        greeting += ", world!";
        System.out.println(greeting);
    }
}
```

This Java code performs the same operations as the original C++ code:
- It creates a string variable `greeting` initialized with the text value "Hello".
- It appends another string literal ", world!" to the `greeting` variable using the `+=` operator, which is equivalent to the `.append()` method in Java.
- Finally, it shows the contents of the `greeting` variable after the append operation by printing it to the console with `System.out.println()`.
