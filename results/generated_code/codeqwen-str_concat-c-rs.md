The equivalent Rust code for the given C code would be as follows:

```rust
fn main() {
    let s = String::from("hello");
    println!("{} literal", s);
    let s2 = format!("{}{}", s, " literal");
    println!("{}", s2);
}
```
