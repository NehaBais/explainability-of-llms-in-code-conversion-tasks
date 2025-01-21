The equivalent code in Java would be:

```java
public class Main {
    public static void main(String[] args) {
        String str = "Good Morning";
        
        // Append the string variable with another string literal in the most idiomatic way
        str += " to all !!!"; // Java's += method appends the right operand to the left operand

        System.out.println(str);  // Show the contents of the variable after the append operation
    }
}
```

In this Java code, `str += " to all !!!"` is used to concatenate the string `"Good Morning"` with `" to all !!!"`. The `+` operator in Java is overloaded for strings and can be used to do this without needing a separate method like `strcat()`.
