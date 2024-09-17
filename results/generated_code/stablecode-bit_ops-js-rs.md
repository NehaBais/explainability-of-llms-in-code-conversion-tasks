In Rust, bitwise operations are performed using the `|` (bitwise OR), `&` (bitwise AND), `^` (bitwise XOR), and `~` (bitwise NOT) operators. Shifts in Rust are done using the `<<` (left shift), `>>` (right shift), and `>>>` (logical right shift) operators, as well as the `rotl` (left rotate) and `rotr` (right rotate) functions from the `std::num::FpCategory` module.

Here's the equivalent Rust code:
```rust
fn bitwise(a: i32, b: i32){
   println!("a AND b: {}", a & b);
   println!("a OR b: {}", a | b);
   println!("a XOR b: {}", a ^ b);
   println!("NOT a: {}", !a);
   println!("a << b: {}", a << b); // left shift
   println!("a >> b: {}", a >> b); // arithmetic right shift
   println!("a >>> b: {}", a as usize >> b as usize)); // logical right shift
}
```
Please note that Rust does not have the `alert` function. Instead, you can use the `eprintln!` macro to print an error message in case the JavaScript code requires user interaction.
