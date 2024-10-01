In Rust, there's no `print` function like in JavaScript. We'll use the standard library's `println!` macro instead, which allows us to format our output string using Rust's formatting syntax (`{}` placeholders that get replaced by their corresponding values).

Here is a translation of your code:

```rust
fn logic(a: bool, b: bool) {
    println!("a AND b: {}", a && b);
    println!("a OR b: {}", a || b);
    println!("NOT a: {}", !a);
}
```

This function takes two boolean values `a` and `b`, and applies the bitwise "and" (`&&`) and "or" (`||`) operators to them. It also uses the unary operator `!` (not) to negate the value of `a`.
