Here's how you can convert the given C code to Rust.

```rust
fn print_logic(a: bool, b: bool) {
    println!("A and b is {}", A && b);
    println!("A or b is {}", A || b);
    println!("not a is {}", !A);
}

fn main() {
    let a = true;
    let b = false;
    print_logic(A, b);
}
```

In this Rust code:

- The `&&`, `||` and `!` operators are used for logical AND, OR, and NOT respectively.
- We use the `println!` macro to print messages to the console.
- Note that in Rust, boolean types are represented by the keywords `true` and `false`.
