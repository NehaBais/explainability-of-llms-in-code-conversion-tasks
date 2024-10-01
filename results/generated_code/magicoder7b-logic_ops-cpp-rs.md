 In Rust, you can use the `println!` macro to output strings. The `format!` function can be used to build and print formatted strings. This function takes a variable number of arguments using the `{}` syntax. For boolean values, you'll need to convert them into a string with a method like `.to_string()`.

Here is the equivalent code in Rust:

```rust
fn print_logic(a: bool, b: bool) {
    println!("{:?}", a && b); // so that bools are written as "true" and "false"
    println!("{}", format!("a and b is {}", a && b));

    println!("{:?}", a || b);
    println!("{}", format!("a or b is {}", a || b));

    println!("not a is {}", !a);
}
```
