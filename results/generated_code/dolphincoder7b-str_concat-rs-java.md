The equivalent Java code for the given Rust code is as follows:

```java
public class Main { 
    public static void main(String[] args) {
        String s = "hello".to_owned(); 
        System.out.println(s);

        String s1 = s + " world";  
        System.out.println(s1);
    } 
}
```

In this code, the `+` operator in Rust is replaced by a concatenation operation (+) in Java. The `to_owned()` function in Rust is not available in Java and hence cannot be used directly. Therefore, we have to create a new string variable with the same value as s. This operation can also be done using the `String` class's constructor that takes an array of characters. 

Please note that the `println!` macro in Java is replaced by `System.out.println()`. However, this particulare syntax is not needed when printing variables to console or a file. So the `println!()` Rust macro can be used directly as `println()`. 

The Rust and Java compilers have different behavior when handling string literals, and they operate on different strings data types. Therefore, explicit conversion of string literals into other data types in Rust is not needed in Java. In this code, we are using a string literal for the concatenation operation (`"world"`) which is an `str` type in Rust and a `String` type in Java. 

Remember to replace `.to_owned()` with `new String(s)` if you are dealing with non-ASCII characters. This will ensure that the resulting output is correct when using Unicode.

Lastly, note that there is no equivalent syntax in Rust for `main` function arguments (in this case, `args`). The main function can be invoked directly from Java, without requiring any additional parameter or argument handling. 

Please make sure to adjust the code according to your specific requirements and environment. In case of issues, feel free to ask!
