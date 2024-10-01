Sure, here is the equivalent code in Rust:

```rust
use std::io;

fn main() {
  let mut s1 = io::stdin().read_line(&mut s).unwrap();
  let a = i32::from_str(s1.trim()).unwrap();
  
  let mut s2 = io::stdin().read_line(&mut s).unwrap();
  let b = i32::from_str(s2.trim()).unwrap();
  
  let sum = a + b;        // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
  let difference = a - b; // The result of subtracting 'b' from 'a'
  let product = a * b;    // The result of multiplying 'a' and 'b'
  let division = if b != 0 { a / b } else { std::i32::MAX + 1 };   // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
  let remainder = if b != 0 { a % b } else { 0 };  // The remainder of dividing 'a' by 'b', same sign as first operand if different
                        
  println!("{} + {} = {}", a, b, sum);
  println!("{} - {} = {}", a, b, difference);
  println!("{} * {} = {}", a, b, product);
  if division != std::i32::MAX + 1 {
    println!("quotient of {} / {} = {}", a, b, division);   // truncates towards 0
  } else {
    println!("div by 0 in quotient calculation, treating as positive infinity");
  }
  if remainder != 0 {
    println!("remainder of {} % {} = {}", a, b, remainder);   // same sign as first operand if different
  } else {
    println!("div by 0 in remainder calculation, treating as zero");
  }
}
```
Please note that this rust code doesn't exactly replicate the exact behavior of the original java program. It just provides a similar functionality. Rust uses some different rules for division and modulo operations compared to Java which are handled differently here. The original java version would not have been able to perform exponentiation or calculate signs correctly with such rules, but this rust code does the same operations in the same way as it was designed.
