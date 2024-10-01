The equivalent code in Rust is as follows:
```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", (a && b));
    println!("a OR b: {}", (a || b));
    println!("NOT a: {}", !a);
}
```
This code defines a function `logic` that takes two boolean values and outputs the results of "and", "or", and "not" operations on them. The `println!` macro is used to output the desired messages, followed by the actual calculations in parentheses, which are then evaluated and printed as strings.
