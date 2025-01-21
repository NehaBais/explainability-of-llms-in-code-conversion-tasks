Here is your code converted from Python to Rust:

```rust
fn logic(a: bool, b: bool) {
    println!("a and b: {}", a && b);
    println!("a or b: {}", a || b);
    println!("not a: {}", !a);
}

fn main() {
    logic(true, false);
}
```

In Rust, boolean values are represented with the `bool` type. The logical AND operation is done with `&&`, and the OR operation with `||`. The NOT operation is performed using the `!` operator.
