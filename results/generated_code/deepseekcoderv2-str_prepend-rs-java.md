 Here's how you can convert the given Rust code to Java:

```java
public class Main {
    public static void main(String[] args) {
        // Create a string variable equal to any text value.
        StringBuilder s = new StringBuilder("World");
        
        // Prepend the string variable with another string literal.
        s.insert(0, "Hello ");
        
        // Print the result.
        System.out.println(s.toString());
    }
}
```

In this Java code:
- We use `StringBuilder` to create a mutable string.
- The `insert` method is used to insert the string "Hello " at the beginning of the `StringBuilder`.
- Finally, we convert the `StringBuilder` to a string and print it using `System.out.println`.
