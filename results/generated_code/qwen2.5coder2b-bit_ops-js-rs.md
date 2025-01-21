Sure, here is the equivalent Rust code for the given JavaScript functions:

```rust
fn bitwise(a: i32, b: i32) {
    let and_result = a & b;
    let or_result = a | b;
    let xor_result = a ^ b;

    println!("a AND b: {}", and_result);
    println!("a OR b: {}", or_result);
    println!("a XOR b: {}", xor_result);

    let not_a = !a;

    println!("NOT a: {}", not_a);

    println!("a << b: {}", a << b); // left shift
    println!("a >> b: {}", a >> b); // arithmetic right shift
    println!("a >>> b: {}", a >> b); // logical right shift
}

fn main() {
    bitwise(10, 5);
}
```

This code defines a function `bitwise` which takes two i32 integers as input and prints out the results of various bitwise operations. The ! operator is used for the bit NOT operation.

The left shift operator (<<) shifts the bits in the number to the left by the specified amount, filling in 0s on the right side.
The arithmetic right shift operator (>>) shifts the bits to the right by the specified amount, copying the most significant bit into each position.
The logical right shift operator (>>>) also shifts the bits to the right but fills in 0s on the right side. The most significant bit is dropped instead of being copied.

In the `main` function, we call the `bitwise` function with two example integers (10 and 5) as arguments.
