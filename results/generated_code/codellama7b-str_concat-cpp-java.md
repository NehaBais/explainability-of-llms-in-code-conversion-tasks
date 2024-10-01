To convert this code from C++ to Java, you can use the following:
```
public class Main {
    public static void main(String[] args) {
        String s = "hello";
        System.out.println(s + " literal");
        String s2 = s + " literal";
        System.out.println(s2);
    }
}
```
Explanation:

In Java, strings are represented as objects of the `String` class. Therefore, you need to create a `String` object to store the value of the string variable. In C++, you can use the `std::string` class to represent strings. The `<<` operator is used in C++ to concatenate strings, which is equivalent to the `+` operator in Java.

In the Java code, we first create a `String` object with the value `"hello"`, and then print it followed by the string literal `"literal"` using `System.out.println()`. We then create another `String` object with the value of concatenating the original string variable `s` with the string literal `" literal"`, and then print it using `System.out.println()` again.
