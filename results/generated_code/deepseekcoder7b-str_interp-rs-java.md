Here is the equivalent Java code for your Rust example:

```java
public class Main {

    public static void main(String[] args) {
        // Replace "X" with a string literal
        String str1 = "Mary had a X lamb";
        String result1 = str1.replace("X", "big");
        System.out.println(result1);  // prints: Mary had a big lamb
        
        // Use format specifiers in the original string (Java equivalent to Rust's {} placeholders)
        String name = "Mary";
        String adj = "little";
        String str2 = "%s had a %s lamb";
        System.out.println(String.format(str2, name, adj));  // prints: Mary had a little lamb
    }
}
```
Note that in the Rust version, you could directly pass variables or values as arguments to `println!()` macro which is being replaced by respective variable names in the string format. In Java, instead of passing arguments directly inside the `String.format(...)` method, we need to use placeholders and then replace them with actual values using String's `replace(...)` method or `printf(...)` function (which is equivalent to Rust's println!() macro). Also in Java, you can not specify argument order within the string format. The order of replacements are determined by their position in the formatted string and the passed arguments array/list.

