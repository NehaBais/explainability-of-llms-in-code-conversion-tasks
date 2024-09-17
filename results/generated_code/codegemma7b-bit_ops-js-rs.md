```rust
fn bitwise(a: i32, b: i32) {
    println!("a & b: {}", a & b); // bitwise AND
    println!("a | b: {}", a | b); // bitwise OR
    println!("a ^ b: {}", a ^ b); // bitwise XOR
    println!("~a: {}", !a); // bitwise NOT
    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", a.shr(b)); // logical right shift
}
```
