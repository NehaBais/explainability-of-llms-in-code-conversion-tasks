Here is the equivalent Rust code for your JavaScript snippet:

```rust
fn main() {
    let mut original = String::from("Mary had a X lamb");
    let little = String::from("little");
    
    // Replace "X" with "little", and store result in `original`.
    original.replace!(original.as_str(), "X", &little); 

    println!("{}", original);
}
```
The replace! method on String objects in Rust, like the JavaScript .replace() method, replaces occurrences of a substring with another string. The difference is that because strings in Rust are immutable by default, we need to use the `as_str()` method to provide the original string for replacement. Note that replace! changes its first argument directly (in place), so we need to use mutable variables here as well.

