In Rust, the equivalent function would look like this:

```rust
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```

The key differences between the Golang code and the Rust version are:

1. In Rust, you don't need to import `fmt` or `ioutil` modules as they're part of the standard library in Rust.

2. In Rust, function parameters do not require explicit types. This is due to static typing enforced by the compiler.

3. The `println!()` macro used in Rust works similarly to `fmt.Println()` in Golang, and requires a format string that can include any valid Rust expressions. 

4. The comparison operators `&&`, `||`, and `!` work exactly the same way in both languages, and their precedence is also the same (except for operator `!`, which has higher precedence than `&&` or `||`)).
