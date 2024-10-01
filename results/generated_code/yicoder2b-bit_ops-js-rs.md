Sure, here is the equivalent code in Rust.

Rust provides built-in functions for bitwise operators and shifting.
Please note that you need to have the `std` crate included in your `Cargo.toml` file (or add it by adding `[dependencies] = { std="1.54.0" }`), Rust's standard library, to use these functions.

```rust
fn bitwise(a: i32, b: i32) {
    let AND = a & b;
    let OR = a | b;
    let XOR = a ^ b;
    let NOT = ~a; 

    println!("a AND b: {}", AND);
    println!("a OR b: {}", OR);
    println!("a XOR b: {}", XOR);
    println!("NOT a: {}", NOT & a);

    // Left shift
    let left_shift = a << b; 
    println!("a << b: {}", left_shift);  

    // Arithmetic right shift
    let arith_right_shift = a >> b;
    println!("a >> b: {}", arith_right_shift);   

    // Logical right shift
    let logical_right_shift = (a as u32) >> b as i32;
    println!("a >>> b: {}", logical_right_shift);  
}
```
The equivalent code in Rust is quite similar to the original JavaScript version. However, it has different ways of doing bitwise operations and shifting than JavaScript. 

Please replace `i32` and `u32` with your data type if needed as these are default types in Rust.
