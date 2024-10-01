```rust
fn main() {
    // Text assigned to a string variable
    let s = "hello";

    // Output string variable
    println!("{}", s);

    // Concatenate variable and literal, assign result to another string variable
    let s2 = format!("{}{}", s, " literal");

    // Output second string variable
    println!("{}", s2);
}
```
