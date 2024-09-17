# Solution - Rust
```rust
fn bitwise_ops(input: &[u32]) {
    let a = input[0];
    let b = input[1];

    println!("a AND b: {}", (a & b));
    println!("a OR b: {}", (a | b));
    println!("a XOR b: {}", (a ^ b));
    println!("NOT a: {}", !a);
    println!("a << b: {}", (a << b)); // left shift
    println!("a >> b: {}", (a >> b)); // arithmetic right shift
    println!(
        "a >>> b: {}",
        u32::try_from(i64::try_from(a).unwrap() >> i64::try_from(b).unwrap())
            .unwrap()
    ); // logical right shift
    println!("a rol b: {:?}", Integer::rotate_left(a, b)); // rotate left
    println!(
        "a ror b: {:?}",
        Integer::try_from(i64::try_from(Integer::rotate_right(a, b)).unwrap())
            .unwrap()
    ); // rotate right
}
```
# How to run the code
Install Rust 1.70.0 or newer: https://www.rust-lang.org/tools/install
Run command: `cargo run`
