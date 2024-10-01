In Rust, the equivalent code would be:

```rust
fn print_logic(a: bool, b: bool)
{
    println!("{} and {} is {}", a, b, a && b);
    println!("{} or {} is {}", a, b, a || b);
    println!("not {} is {}", a, !a);
}
```

This Rust function `print_logic` takes two arguments of type `bool` (boolean) and performs the "and", "or" and "not" operations on them. The results are then printed out using the `println!` macro.

Please note that in Rust, the `println!` macro is used to print output to the console. It is similar to `printf` or `cout` in C++ but more powerful and flexible. Unlike C++, there's no need to use `std::endl` or `\n` to insert a newline at the end of each line since this is handled automatically by `println!`. 

The boolean operators &&, ||, and ! work just like in C++. The `!` operator negates a boolean value, so `true` becomes `false`, and `false` becomes `true`.
