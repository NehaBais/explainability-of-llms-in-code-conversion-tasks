Here's how you can convert the given JavaScript code to Rust:

```rust
fn main() {
    // Create a string variable equal to any text value.
    let mut s = String::from("hello");
    println!("Original Variable Content: {}", &s);

    // Create another string variable whose value is the original variable concatenated with another string literal.
    s.push_str(" there!");
    println!("Concatenated Variable Content: {}", &s);
}
```

In Rust, you don't need to explicitly declare a type for variables like in JavaScript. You just assign values to variables and the compiler will infer their types. Also, unlike JavaScript, Rust doesn't have built-in print function as we use `println!`. Instead, it uses the `println!` macro provided by Rust.

The code does what you wanted - create a variable with a value and then concatenate another string to it. The content of these variables is printed to the console after each modification.
