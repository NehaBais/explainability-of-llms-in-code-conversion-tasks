Here is the equivalent Rust code for your Python logic function. Note that the print statements in Python are replaced with `println!` macro in Rust for logging purposes. Also, Rust uses `&&` and `||` for "and" and "or" operations respectively.

```rust
fn logic(a: bool, b: bool) {
    // Log "and" operation on a and b
    println!("a and b: {}", a && b);

    // Log "or" operation on a and b
    println!("a or b: {}", a || b);

    // Log "not" operation on a
    println!("not a: {}", !a);
}
```

You can call this function with your desired boolean inputs. For example: `logic(true, false);`
