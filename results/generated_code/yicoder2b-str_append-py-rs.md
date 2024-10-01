Sure, here is the equivalent code in Rust.

```rust
fn main() {
    let mut str = "12345678";
    *str += "9!";
    println!("{}", str);
}
```
In Rust, we use `mut` keyword to declare a variable that can be modified after its declaration. We also used the `println!` macro instead of `print` function for output as it is more idiomatic in Rust than calling functions separately.
