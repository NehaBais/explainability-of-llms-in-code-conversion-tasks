 In Rust, you can use the bitwise operators directly to perform similar operations. Here is how you could convert your JavaScript code into a Rust function:

```rust
fn bitwise(a: i32, b: u8) {
    println!("a AND b: {}", a & b);
    println!("a OR b: {}", a | b);
    println!("a XOR b: {}", a ^ b);
    println!("NOT a: {}", !a);  // equivalent to ~ in JavaScript
    println!("a << b: {}", a << b);  // left shift
    println!("a >> b: {}", a >> b);  // arithmetic right shift
    println!("a >>> b: {}", a >> b);  // logical right shift, since Rust's >> operator is an arithmetic shift.
}
```
Here the function parameters are of type i32 for 'a' and u8 for 'b'. This is due to the fact that JavaScript allows bitwise operations on integers of any size, whereas in Rust you must specify the data type. As such, when we do a left shift in Rust, it automatically promotes `i32` to `u64`, but in this case, as we are only shifting by a constant amount, the result will still be an i32.
