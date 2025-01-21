 Certainly! Below is the Rust code that performs the same operations as the given C code:

```rust
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}

fn main() {
    let a = true;
    let b = false;
    print_logic(a, b);
}
```

In this Rust code:
- The `print_logic` function takes two boolean arguments (`a` and `b`).
- It prints the results of "and" (`&&`), "or" (`||`), and "not" (`!`) operations on these arguments.
- The `main` function demonstrates how to call `print_logic` with specific boolean values.
