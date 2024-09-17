Sure, here's the equivalent Rust code for the given function:
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
Note that in Rust, the bitwise NOT operator is represented by the `!` symbol, and the left and right shifts are represented by the `<<` and `>>` symbols respectively. The logical right shift is represented by the `>>>` symbol.

