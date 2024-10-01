To convert this Java code to Rust, you can use the following lines of code:
```
fn main() {
    let s: &str = "hello";
    println!("{} literal", s);
    let s2: &str = format!("{}{} literal", s, s);
    println!("{}", s2);
}
```
This Rust code creates two string variables, `s` and `s2`, initialized with the values `"hello"` and `"hello literal"`, respectively. It then prints both strings to the console using the `println!` macro.

Note that in Rust, string literals are enclosed in double quotes, whereas in Java they are enclosed in single quotes. Additionally, Rust uses `&str` for string slices and `String` for owned strings. In this case, we use the `format!` macro to create a new string by concatenating two string literals using the `+` operator.

Also note that we use the `println!` macro instead of `System.out.println()` in Rust, as it is more concise and provides more information about the type of data being printed.
