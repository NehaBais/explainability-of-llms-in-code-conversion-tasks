Here is the Java version of your C code:

```java
public class Main {
    public static void main(String[] args) {
        // Create a string variable equal to any text value.
        String str = "Good Morning";
        String cstr2 = " !!!";

        // Append the string variable with another string literal in the most idiomatic way.
        str += " to All" + cstr2;

        // Show the contents of the variable after the append operation.
        System.out.println(str);
    }
}
```

This Java code does exactly what your C code does: it creates a string and appends another string literal to it, then prints out the result. Note that strings in Java are immutable, which means once a String object is created, its contents cannot be changed. That's why we use '+=' operator for concatenation here instead of 'strcat()'.
