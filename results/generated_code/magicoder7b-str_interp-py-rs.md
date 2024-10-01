 In Rust, you can use format! macro to perform this kind of string interpolation. Here is the equivalent Rust code:

```rust
fn main() {
    let extra = "little";
    let new_str = format!("Mary had a {} lamb.", extra);
    println!("{}", new_str);
}
```
