Sure! Below is the equivalent Rust code for the given Python function:

```rust
fn main() {
    logic(true, true);
}

fn logic(a: bool, b: bool) {
    println!("a and b: {}", a && b);
    println!("a or b: {}", a || b);
    println!("not a: {}", !a);
}
```

In Rust, you don't need to explicitly import the `print` function from the standard library because it is included by default. The `&&`, `||`, and `!` operators are used for logical operations in Rust.

Here's what each part of the code does:
- The `main` function calls the `logic` function with two true values.
- The `logic` function takes two boolean arguments `a` and `b`.
- It then prints the results of the "and" (`&&`), "or" (`||`), and "not" operations on both `a` and `b`, respectively.
