Here is how you can convert the given Python code to Rust:

```rust
fn logic(A: bool, b: bool) {
    println!("A and b: {}", A && b);
    println!("A or b: {}", A || b);
    println!("not A: {}", !A);
}

fn main() {
    logic(true, false);  // You can replace true and false with any boolean values you want.
}
```
This Rust code does the same thing as your Python code: it takes two boolean arguments `A` and `b`, performs "and", "or" operations on them, and prints the results of these operations. The `!` operator in Rust is equivalent to `not` in Python, which negates a boolean value.

Please note that you need to call the logic function within your main function or else it won't get executed. In this code example, I have called `logic(true, false)` from the `main` function for demonstration purposes. You can replace `true` and `false` with any boolean values you want.

Also note that Rust is a statically typed language which means that it needs to know the type of each variable at compile time. In this code, `A` and `b` are defined as booleans (bool in Rust), but they could be replaced with different types if needed.
