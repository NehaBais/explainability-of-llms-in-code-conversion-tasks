Here is the Java equivalent of your C code:

```java
public class Main {
    public static void main(String[] args) {
        // Create a string variable equal to any text value.
        String str = "Good Morning";

        // Append the string variable with another string literal in the most idiomatic way.
        str += " to all";
        str += " !!!!";

        // Show the contents of the variable after the append operation.
        System.out.println(str);
    }
}
```
This code does exactly what your C code does, converting a char array into a String object in Java and performing string concatenation with the "+=" operator.
