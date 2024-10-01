Here is the equivalent Rust code for your Golang code: 

```rust
fn main() {
    // text assigned to a string variable
    let s = "hello".to_string();

    // output string variable
    println!("{}", &s);

    // concatenate variable and literal, assign result to another string variable
    let s2 = format!("{} literal", &s);

    // output second string variable
    println!("{}", &s2);
}
```
The Rust `to_string()` function is used to convert a string literal into an actual String type. The ampersand (&) before the variable name in println! macro is used because it expects references to variables as input. 
In Rust, all strings are sequences of Unicode Scalar Values, they're not byte-by-byte equivalent with other languages. Thus the conversion between different encodings may lead to errors if there's any invalid character sequence in string literals.
And `format!()` function is used here because it returns a formatted String which we then store in s2 variable.
