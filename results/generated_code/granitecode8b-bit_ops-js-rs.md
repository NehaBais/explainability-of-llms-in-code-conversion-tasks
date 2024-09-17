Here's the equivalent code in Rust:
```
fn bitwise(a: i32, b: i32) {
 println!("a AND b: {}", a & b);
 println!("a OR b: {}", a | b);
 println!("a XOR b: {}", a ^ b);
 println!("NOT a: {}", !a);
 println!("a << b: {}", a << b); // left shift
 println!("a >> b: {}", a >> b); // arithmetic right shift
 println!("a >>> b: {}", a >>> b); // logical right shift
}
```
Note that Rust uses the `i32` type for integers, and the `println!` macro instead of `alert`. Also, I've removed the unnecessary parentheses around the expressions in some places.

