Sure, I can help with that. The C++ code seems to require conversion from boolean logic operations to Rust using bitwise operators. But keep in mind that Rust uses 0 for false and 1 for true unlike C++ where true is represented as 1 and false as 0. So please adjust the equivalent values accordingly.

Here's how you can rewrite the provided C++ code into Rust:

```rust
fn print_logic(mut a: bool, mut b: bool) {
    println!("{:?}", (a && b)); // so that bools are written as "true" and "false"
    println!("{:?}", (a || b));
    println!("{:?}", !a);
}
```

The above code will print the results of 'and', 'or' and negation operation in terms of booleans. For instance, for boolean a = true and b=true, it will output (true && true) as true, (true || false) as true, and !(true) as false.
