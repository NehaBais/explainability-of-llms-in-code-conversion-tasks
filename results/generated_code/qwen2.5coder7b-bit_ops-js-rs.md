Here is how you can write the same code in Rust:

```rust
fn bitwise(a: i32, b: u32) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);

    // Note: The Rust bitwise shift and rotate operators are the same as JavaScript's.
    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", a.wrapping_shr(b)); // logical right shift
    
    let mut result = a;
    for _ in 0..b {
        let last_bit = result & 1;
        result = (result >> 1) | (last_bit << 31); // left rotate
    }
    println!("a rotate_left b: {}", result);
    
    result = a;
    for _ in 0..b {
        let first_bit = (result >> 31) & 1;
        result = ((result & !1) | first_bit) << 1; // right rotate
    }
    println!("a rotate_right b: {}", result);
}
```

Please note that Rust bitwise shift and rotate operators are the same as JavaScript's. The only difference is that for `a >>> b`, we use the `wrapping_shr` method in Rust because Rust has no logical right shift operator. 

For left and right rotates, I've used a simple for loop to manually perform the operation `b` times. This could be optimized further based on specific use-cases or requirements.
