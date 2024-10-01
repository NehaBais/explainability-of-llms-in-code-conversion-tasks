Here is the equivalent Rust code for your Python function. 

This program creates a String variable and prepends another string literal to it:

```rust
fn main() {
    let mut s = String::from("12345678");
    s.insert_str(0, "0");  // by insertion 
    println!("{}", s);
}
```
