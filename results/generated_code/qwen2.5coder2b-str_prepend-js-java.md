In Java, you can use the `String` class methods and operators such as `concat()` to concatenate strings. Here is how you could write your code in Java:

```java
public class Main {
    public static void main(String[] args) {
        String s = ", World";
        
        // Prepend a string literal
        s = "Hello" + s;
        
        // Print the result
        System.out.println(s);
    }
}
```

This code does exactly what your JavaScript code does - it prepends the string "Hello" to the existing string variable `s` and then prints the result.
