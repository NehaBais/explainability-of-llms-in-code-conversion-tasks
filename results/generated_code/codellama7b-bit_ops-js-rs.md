Rust does not have a built-in `alert()` function, but you can use the `println!` macro to print output in the console. Here's the code converted from JavaScript to Rust:
```
fn bitwise(a: i32, b: i32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);
    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", a >> b); // logical right shift
}
```
Note that Rust uses the `i32` type for 32-bit integers, and the `println!` macro is used to print output in the console. Additionally, the `!` operator is used for bitwise NOT, instead of `~`.
