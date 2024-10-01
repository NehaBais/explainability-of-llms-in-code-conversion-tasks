Here's the Rust code that meets the requirements:
```rust
fn main() {
 let s = String::from("hello");
 println!("{} literal", s);
 let s2 = format!("{} literal", s);
 println!("{}", s2);
}
```
This code creates a `String` variable `s` with the value "hello". It then prints out `s` concatenated with the string literal `"literal"`. The result is:

hello literal

Next, it creates another `String` variable `s2` by formatting `s` and the string literal `"literal"`. It then prints out `s2`, which has the value "hello literal". The result is:

hello literal


