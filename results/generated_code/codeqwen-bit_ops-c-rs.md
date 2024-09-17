The equivalent code in Rust would look like this:

```rust
fn bitwise(a: i32, b: u32) {
    println!("A and B: {}", A & b);
    println!("A or B: {}", A | b);
    println!("A xor B: {}", A ^ b);
    println!("Not A: {}", !A as i32);
    println!("A << n: {}", A << b); // left shift
    println!("A >> n: {}", A >> b); // arithmetic right shift
    println!("C >> b: {}", ((A & 0xFFFF_FFFF) as u32) >> b); // logical right shift
}
```

In the above code, we use Rust's `>>` operator which performs a logic or arithmetic right shift operation on an integer. But because the Rust standard library does not provide a simple way to perform a logical right shift on signed integers, we cast our integer `A` into an unsigned integer first before performing the operation.

For bitwise NOT operation, instead of using `~`, we use the operator `!`. We also need to convert the result back to `i32` because Rust's `print!` macro expects a format parameter and by default it will try to convert the result into i32.

Note: It is important to remember that in Rust, integers are represented as signed or unsigned (int vs uint). Therefore, we need to explicitly cast our integer variable to unsigned type for logical right shift operation using `as u32`.
