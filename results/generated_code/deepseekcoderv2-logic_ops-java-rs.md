 Certainly! Below is the Rust equivalent of the provided Java code. The Rust function `logic` takes two boolean arguments and prints the results of logical AND, OR, and NOT operations on them.

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}

fn main() {
    let a = true;
    let b = false;
    logic(a, b);
}
```

In this Rust code:
- The function `logic` takes two boolean parameters `a` and `b`.
- It prints the results of logical AND (`&&`), OR (`||`), and NOT (`!`) operations on these booleans.
- In the `main` function, we define two boolean variables `a` and `b`, then call the `logic` function with these values.
