```rust
fn main() {
    let mut str_var: String = "my String".to_string();
    str_var.insert_str(0, "Changed ");

    println!("{}", str_var); // Output: Changed my String
}
```