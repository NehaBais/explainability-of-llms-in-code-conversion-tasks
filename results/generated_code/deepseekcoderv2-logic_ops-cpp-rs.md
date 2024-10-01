## Solution:
Here's the Rust code that accomplishes the same task as the C++ function:
```rust
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```
The Rust function takes two boolean arguments `a` and `b`, performs the logical operations (`&&` for "and", `||` for "or", and `!` for "not"), and prints the results. The `std::boolalpha` part is not needed in Rust because booleans are already printed as "true" or "false".
