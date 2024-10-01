Sure, here's the equivalent Rust code:
```
fn print_logic(a: bool, b: bool) {
    println!("a and b is {}", a && b);
    println!("a or b is {}", a || b);
    println!("not a is {}", !a);
}
```
In Rust, `&&` and `||` are operators that do bitwise "and" and "or", respectively. So you need to use `&&` and `||` in the code. Also note that in Go, `!` is used for negation, while in Rust, it's `!`.
