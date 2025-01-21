 Here's the equivalent Java code for the given C code. In this conversion, we use `String` objects in Java instead of character arrays and pointers as in C. We also handle memory allocation and deallocation differently in Java compared to C.

```java
public class Main {
    public static void main(String[] args) {
        String str = "my String";
        String cstr = "Changed ";
        str = cstr + str; // Prepend the string using concatenation
        System.out.println(str);
    }
}
```

This Java code does the following:
1. Initializes a `String` variable `str` with the value `"my String"`.
2. Initializes another `String` variable `cstr` with the value `"Changed "`.
3. Concatenates `cstr` and `str` to prepend `cstr` to `str`.
4. Prints the resulting string.
