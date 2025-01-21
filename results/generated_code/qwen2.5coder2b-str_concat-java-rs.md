Sure, here is the equivalent Rust code for your Java program. 

Rust uses a different syntax and has several differences from Java.

```rust
fn main() {
    let s: &str = "hello"; // creating a string reference
    println!("s = {}", s); 
    let s2 = format!("{} literal", s); // concatenating two strings using `format!` macro
    println!("s2 = {}", s2);
}
```

The `let s: &str = "hello";` statement creates a immutable string reference. The `println!` function is used to print the value of the variable.

The `format!("{} literal", s);` statement concatenates the string literals `"hello"` and `" literal"`. 

Note that Rust doesn't allow you to modify strings like Java does, so `s2 = format!("{} literal", s);` would result in an error. To perform operations like this, you should create a new String type.
