In Rust, you can achieve this by using the `+` operator along with the `to_string()` method. Here is the equivalent of your Java code in Rust.

```rust
fn main() {
    let s = String::from("hello");
    println!("{} literal", s);
    
    let s2 = format!("{} literal", s);
    println!("{}", s2);
}
```
In this code, `String::from()` creates a new string from the given value. The `format!` macro is used to create a new String that contains the contents of `s` and " literal". The `{}` inside the `println!` macros are placeholders for the variables passed as arguments.

Please remember that `println!("{} literal", s);` and `println!("{}", s2);` do not concatenate strings. In Rust, concatenation is done differently than in Java or Python. Here we use format! macro to form new string by combining other strings.
Rust strings are heap allocated unlike Java's which can be stack allocated, it provides more control over memory management and safety guarantees.
