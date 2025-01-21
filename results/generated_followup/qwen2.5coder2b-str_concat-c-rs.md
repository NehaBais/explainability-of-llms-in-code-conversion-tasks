The error message indicates that the crate name cannot start with a period (`.`). In Rust, crate names must not start with a dot, and it's generally recommended to use snake_case for crate names.

Here is the corrected code:

```rust
fn main() {
    let s: &str = "hello";
    println!("{} literal",
               s);
    println!("{}{}", s, " literal");

    let s2 = format!("{} literal", s);
    println!("{}", s2);
}
```

This will compile without any errors and run the program as expected.
