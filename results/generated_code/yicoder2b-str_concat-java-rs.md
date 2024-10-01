Sure, here is the equivalent code in Rust:

```rust
fn main() {
    let mut s = String::from("hello"); 
    println!("{} literal", &s);
    let mut s2 = format!("{} literal", &mut s);
    println!("{}", &s2);
}
```
In Rust, we use `String::from()` to convert a string literal into a String object. The `format!()` macro is used in place of the concatenation operation to create a new string from an existing string and another string literal. The `&mut s` inside the format macro refers to the variable `s` being mutated, ensuring that the value gets updated when its contents change.
