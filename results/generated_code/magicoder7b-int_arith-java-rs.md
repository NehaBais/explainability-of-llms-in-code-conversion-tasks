 In Rust, you can use the `io::stdin()` method to read from standard input and then call the `read_i32()` function to read two integers. Here's how the code might look:

```rust
use std::io;

fn main() {
    // Get the 2 numbers from command line arguments
    let stdin = io::stdin();
    let mut a: i32 = 0;
    let mut b: i32 = 0;
    stdin.read_i32(&mut a).unwrap();
    stdin.read_i32(&mut b).unwrap();
    
    let sum = a + b;        // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
    let difference = a - b; // The result of subtracting 'b' from 'a'
    let product = a * b;    // The result of multiplying 'a' and 'b'
    let division: i32 = if b == 0 { a } else { a / b };   // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
    let remainder = a % b;  // The remainder of dividing 'a' by 'b'
    
    println!("a + b = {}", sum);
    println!("a - b = {}", difference);
    println!("a * b = {}", product);
    println!("quotient of a / b = {:.0}", division);   // truncates towards 0
    println!("remainder of a / b = {}" ,remainder);   // same sign as first operand
}
```
Please note that Rust requires the use of type annotations to avoid ambiguity when dealing with multiple operations (i.e., it doesn't perform implicit conversions like Java does). Also, in case where division by zero occurs, Rust performs a truncating division, similar to the integer division operator in Java.
