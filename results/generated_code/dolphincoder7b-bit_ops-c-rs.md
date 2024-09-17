This is the Rust equivalent of your code.
```rust
fn bitwise(a: i32, b: i32) {
    println!("a and b: {}", a & b);
    println!("a or b: {}", a | b);
    println!("a xor b: {}", a ^ b);
    println!("not a: {}", !a);
    println!("a << n: {}", a << b);  // left shift
    println!("a >> n: {}", a >> b);  // on most platforms: arithmetic right shift
    let c = a as u32;
    println!("c >> b: {}", c >> b);  // logical right shift
    /* there are no rotation operators in Rust */
}
```
This code will print out the output of the bitwise operations using your input integers `a` and `b`.
