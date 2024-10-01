In Rust, you can achieve similar functionality with the following code:

```rust
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```

This Rust function takes two boolean arguments `a` and `b`, similar to the Golang version. It then prints out the result of "and" and "or" operations on both arguments, as well as the "not" operation on the first argument. Note that in Rust, you use `{}` instead of `%v` for printing variables.
