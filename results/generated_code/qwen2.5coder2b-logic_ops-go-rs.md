In Rust, we can use the `&&`, `||`, and `!` operators to perform logical operations as in Go. Here is how you would write this:

```rust
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}

fn main() {
    let (a, b) = (true, false);
    print_logic(a, b);
}
```

The `print_logic` function takes two boolean arguments and prints the results of "and", "or", and "not" on both arguments. The `main` function demonstrates this by calling `print_logic` with a pair of boolean values `(true, false)`.
