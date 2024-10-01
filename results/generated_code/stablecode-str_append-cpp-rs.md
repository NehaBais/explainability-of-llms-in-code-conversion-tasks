Here is the equivalent Rust code:

```rust
fn main() {
    let mut greeting = String::from("Hello");
    greeting.push_str(", world!");
    println!("{}", greeting);
}
```
This Rust code first initializes a `String` variable named `greeting` with the value "Hello". It then appends another string literal ", world!" to the `greeting` string using the `push_str()` method. Finally, it prints the contents of the `greeting` variable using the `println!()` macro.
