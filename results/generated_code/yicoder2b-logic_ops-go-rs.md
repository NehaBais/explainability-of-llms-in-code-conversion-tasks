Sure, here's how you can write that function in Rust:

```rust
fn print_logic(a: bool, b: bool) {
    let a_and_b = a && b;
    let a_or_b = a || b;
    let not_a = !a;

    println!("a and b is {}", a_and_b);
    println!("a or b is {}", a_or_b);
    println!("not a is {}", not_a);
}
```

In this Rust code, the `print_logic` function takes in two bool values (boolean) and returns nothing. The variables `a_and_b`, `a_or_b` and `not_a` represent the result of "and", "or", and "not" operations on both input arguments. This code is similar to the Golang version but with some key differences due to Rust's syntax and its handling of boolean values (`true` and `false`).
