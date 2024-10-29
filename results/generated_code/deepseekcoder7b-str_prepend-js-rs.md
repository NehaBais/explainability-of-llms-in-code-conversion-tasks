Here is your JavaScript code converted into Rust:

```rust
fn main() {
    let mut s = String::from("World");
    let prefix = "Hello, ";
    s.insert_str(0, prefix);
    
    println!("{}", &s);
}
```

In Rust, the `insert_str` method is used to insert a string at a given index of another string. Here we are using it to prepend "Hello, " before our variable 's'. The `&s` inside the print statement is for getting the ownership of s and not borrowing it which is necessary in Rust when you want the actual string value instead of just a reference to it.

