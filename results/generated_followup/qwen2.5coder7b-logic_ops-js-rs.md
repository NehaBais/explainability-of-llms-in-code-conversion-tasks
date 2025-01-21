**Error Explanation:** The error message indicates that there is an invalid character ('.') in the crate name, which violates Rust's naming conventions.

**Fix Explanation:** Remove any non-alphanumeric characters from the crate name to adhere to Rust's naming rules.

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}

fn main() {
    let a = true;
    let b = false;
    
    logic(a,b);
}
```
