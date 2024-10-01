Sure, here's how you can convert the JavaScript code to Rust:
```rust
fn main() {
    let s = String::from("hello"); // create a string variable equal to any text value
    println!("{}", s); // print content of the variables

    let t = s.clone(); // concatenate the original variable with another string literal
    println!("{} there!", t);
}
```
In Rust, you use `let` instead of `var`, and you need to import the `String` type from the standard library to handle strings. The `println!` macro is used to print content of variables. The `.clone()` method is used to make a copy of the original variable. By using these techniques, you can easily convert JavaScript code to Rust.
