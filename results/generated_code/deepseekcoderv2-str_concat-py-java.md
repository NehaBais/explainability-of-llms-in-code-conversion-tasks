 Here's the equivalent Java code for the provided Python code. In Java, string concatenation is done using the `+` operator or by using a method like `concat()` if you prefer to chain them. For joining strings with a delimiter in Java, you can use the `String.join()` method.

```java
public class StringConcatenation {
    public static void main(String[] args) {
        // Create a string variable equal to any text value
        String s1 = "hello";
        System.out.println(s1 + " world");

        // Concatenate the original variable with another string literal
        String s2 = s1 + " world";
        System.out.println(s2);

        // Join strings with a delimiter and print them
        String joinedString = String.join(", ", "hello", "world", "mom");
        System.out.println(joinedString);

        // Create a new string variable for the joined result
        s2 = String.join(", ", "hello", "world", "mom");
        System.out.println(s2);
    }
}
```

This Java code does exactly what the Python code does: it demonstrates how to concatenate strings and join them with a delimiter, showing the content of the variables at each step.
