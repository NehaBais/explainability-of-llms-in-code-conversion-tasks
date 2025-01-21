The error is on line 4, where it says `System.out.println(hello + "!!!!"));`. The error message points out that a semicolon (`;`) was expected where none was needed. 

To fix the error, you simply need to remove the extra semicolon at the end of the line.

Here is the corrected code:

```java
public class Main {
    public static void main(String[] args) {
        String hello = "Hello world";
        System.out.println(hello + "!!!!"));
     }
}
```

This Java program does exactly the same thing as your Rust code. It first declares a string variable named `hello` and assigns it the value "Hello world". Then, it concatenates this string with another string literal "!!!!" using the '+' operator, and prints out the resulting string. This is done in an idiomatic way by directly concatenating the two strings using the '+' operator before printing out the resulting string.
