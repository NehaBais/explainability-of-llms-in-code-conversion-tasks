Here's the converted code from JavaScript to Rust:
```rust
fn main() {
 let a: i32 = std::env::args().nth(1).unwrap().parse().unwrap();
 let b: i32 = std::env::args().nth(2).unwrap().parse().unwrap();
 
 let sum = a + b;
 let difference = a - b;
 let product = a * b;
 let division = a as f64 / b as f64; // Division in Rust returns a floating-point number
 let remainder = a % b; // Remainder in Rust uses the same sign as the first operand
 
 println!("a + b = {}", sum);
 println!("a - b = {}", difference);
 println!("a * b = {}", product);
 println!("a / b = {}", division);
 println!("a % b = {}", remainder);
}
```
Note that in Rust, integer division returns a floating-point number. To get an integer quotient, you can use the `div_floor` function from the `num` crate. Here's an example:
```rust
use num::integer::Integer;
 
fn main() {
 let a = 10;
 let b = 3;
 
 let quotient = a.div_floor(b); // Integer division, rounded towards negative infinity
 let remainder = a % b; // Remainder, using the same sign as the first operand
 
 println!("a / b = {}", quotient);
 println!("a % b = {}", remainder);
}
```

