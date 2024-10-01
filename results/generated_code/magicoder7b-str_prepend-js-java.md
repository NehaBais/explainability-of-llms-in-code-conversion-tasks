 In Java, you can use `StringBuilder` to prepend a value to an existing string. Here is your JavaScript code converted into a Java equivalent:

```java
public class Main {
    public static void main(String[] args) {
        // Create a string variable equal to any text value
        String s = ", World";
        
        // Prepend the string variable with another string literal
        StringBuilder sb = new StringBuilder("Hello");
        sb.insert(0, s);

        System.out.println(sb.toString());
    }
}
```

In this Java code, we first create a `StringBuilder` object and use the method `insert()` to prepend the string "Hello" to the existing `StringBuilder`. Finally, we print out the concatenated string using `System.out.println()`.
