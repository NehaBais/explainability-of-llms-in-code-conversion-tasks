Here is your Java code translated to Rust:

```rust
fn main() {
    let adjective = "big";
    let mut lyric = String::from("Mary had a X lamb");
    
    // Replace the placeholder `X` with the variable value.
    lyric = lyric.replace("X", adjective);
    
    println!("{}", lyric);
}
```
This Rust code does essentially the same thing as your Java code: it replaces a place-holder string "X" in a string with a variable value, and then prints out the resulting string. The `replace` method is used to replace all instances of substring "X" with the content of the variable `adjective`.

